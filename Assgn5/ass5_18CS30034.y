%{
    #include <iostream>
    #include <cstdlib>
    #include <string>
    #include <stdio.h>
    #include <sstream>
    #include "ass5_18CS30034_translator.h"

    extern "C" int yylex();
    void yyerror ( string s );
    extern string Type;
    using namespace std;
%}

%union {
  int intval;
  char* charval;
  int instr;
  sym* symp;
  symtype* symtp;
  expr* E;
  statement* S;
  Array* A;
  char unaryOperator;
}

%token<symp> IDENTIFIER
%token<intval> INTEGER_CONST
%token<charval> FLOATING_CONST
%token<charval> CHARACTER_CONST ENUMERATION_CONST
%token<charval> STRING_LITERALS

%token AUTO ENUM RESTRICT UNSIGNED BREAK EXTERN RETURN VOID CASE FLOAT SHORT
%token VOLATILE CHAR FOR SIGNED WHILE CONST GOTO SIZEOF BOOL CONTINUE IF
%token STATIC COMPLEX DEFAULT INLINE STRUCT IMAGINARY DO INT SWITCH DOUBLE
%token LONG TYPEDEF ELSE REGISTER UNION

%token LEFT_SQUARE RIGHT_SQUARE LEFT_ROUND RIGHT_ROUND LEFT_CURLY RIGHT_CURLY
%token DOT LE_OP GE_OP EQ_OP NE_OP AND_LOGICAL_OP OR_LOGICAL_OP LT_OP GT_OP
%token POINTER_OP INCREMENT_OP DECREMENT_OP LEFT_LOGICAL_OP RIGHT_LOGICAL_OP
%token MUL_ASSIGN DIV_ASSIGN MOD_ASSIGN ADD_ASSIGN SUB_ASSIGN LEFT_ASSIGN
%token RIGHT_ASSIGN AND_ASSIGN XOR_ASSIGN OR_ASSIGN EQUALS
%token ADD SUB MUL NEG BIT_AND MOD DIV EXCL BIT_XOR BIT_OR QUES
%token COLON SEMICOLON ELLIPSIS COMMA HASH

%start translation_unit

//For removing dangling else problems ( causes shift/reduce error )
%right THEN ELSE

//Expressions
%type <E>
    expression
    primary_expression
    multiplicative_expression
    additive_expression
    shift_expression
    relational_expression
    equality_expression
    and_expression
    exclusive_or_expression
    inclusive_or_expression
    logical_and_expression
    logical_or_expression
    conditional_expression
    assignment_expression
    expression_statement

%type <intval> argument_expression_list

//Array to be used
%type <A> postfix_expression
    unary_expression
    cast_expression

%type <unaryOperator> unary_operator
%type <symp> CONSTANT initializer
%type <symp> direct_declarator init_declarator declarator
%type <symtp> pointer

//Non terminals M and N
%type <instr> M
%type <S> N


//Statements
%type <S>  statement
    labeled_statement
    compound_statement
    selection_statement
    iteration_statement
    jump_statement
    block_item
    block_item_list


%%

primary_expression
    : IDENTIFIER {
        $$ = new expr();
        $$->loc = $1;
        $$->type = "NONBOOL";
    }
    | CONSTANT {
        $$ = new expr();
        $$->loc = $1;
    }
    | STRING_LITERALS {
        $$ = new expr();
        symtype* tmp = new symtype("PTR");
        $$->loc = gentemp(tmp, $1);
        $$->loc->type->ptr = new symtype("CHAR");
    }
    | LEFT_ROUND expression RIGHT_ROUND {
    $$ = $2;
    }
    ;

CONSTANT
    :INTEGER_CONST {
        stringstream strs;
        strs << $1;
        string temp_str = strs.str();
        char* intStr = (char*) temp_str.c_str();
        string str = string(intStr);
        $$ = gentemp(new symtype("INTEGER"), str);
        emit("EQUAL", $$->name, $1);
    }
    |FLOATING_CONST {
        $$ = gentemp(new symtype("DOUBLE"), string($1));
        emit("EQUAL", $$->name, string($1));
    }
    |CHARACTER_CONST {
        $$ = gentemp(new symtype("CHAR"),$1);
        emit("EQUALCHAR", $$->name, string($1));
    }
    ;

postfix_expression
    : primary_expression {
        $$ = new Array ();
        $$->array = $1->loc;
        $$->loc = $$->array;
        $$->type = $1->loc->type;
    }
    | postfix_expression LEFT_SQUARE expression RIGHT_SQUARE {
        $$ = new Array();

        $$->array = $1->loc;                    // copy the base
        $$->type = $1->type->ptr;               // type = type of element
        $$->loc = gentemp(new symtype("INTEGER"));      // store computed address

        // New address =(if only) already computed + $3 * new width
        if ($1->cat=="ARR") {                   // if already computed
            sym* t = gentemp(new symtype("INTEGER"));
            stringstream strs;
                strs <<size_type($$->type);
                string temp_str = strs.str();
                char* intStr = (char*) temp_str.c_str();
            string str = string(intStr);
            emit ("MULT", t->name, $3->loc->name, str);
            emit ("ADD", $$->loc->name, $1->loc->name, t->name);
        } else {
            stringstream strs;
                strs <<size_type($$->type);
                string temp_str = strs.str();
                char* intStr1 = (char*) temp_str.c_str();
            string str1 = string(intStr1);
            emit("MULT", $$->loc->name, $3->loc->name, str1);
        }
        $$->cat = "ARR";
    }
    | postfix_expression LEFT_ROUND argument_expression_list RIGHT_ROUND {
        $$ = new Array();
        $$->array = gentemp($1->type);
        stringstream strs;
            strs <<$3;
            string temp_str = strs.str();
            char* intStr = (char*) temp_str.c_str();
        string str = string(intStr);
        emit("CALL", $$->array->name, $1->array->name, str);
    }
    | postfix_expression LEFT_ROUND RIGHT_ROUND {
    }
    | postfix_expression DOT IDENTIFIER {
    }
    | postfix_expression POINTER_OP IDENTIFIER {
    }
    | postfix_expression INCREMENT_OP {
        $$ = new Array();

        // copy $1 to $$
        $$->array = gentemp($1->array->type);
        emit ("EQUAL", $$->array->name, $1->array->name);

        // Increment $1
        emit ("ADD", $1->array->name, $1->array->name, "1");
    }
    | postfix_expression DECREMENT_OP {
        $$ = new Array();

        // copy $1 to $$
        $$->array = gentemp($1->array->type);
        emit ("EQUAL", $$->array->name, $1->array->name);

        // Decrement $1
        emit ("SUB", $1->array->name, $1->array->name, "1");
    }
    | LEFT_ROUND type_name RIGHT_ROUND LEFT_CURLY initializer_list RIGHT_CURLY {
        $$ = new Array();
        $$->array = gentemp(new symtype("INTEGER"));
        $$->loc = gentemp(new symtype("INTEGER"));
    }
    | LEFT_ROUND type_name RIGHT_ROUND LEFT_CURLY initializer_list COMMA RIGHT_CURLY {
        $$ = new Array();
        $$->array = gentemp(new symtype("INTEGER"));
        $$->loc = gentemp(new symtype("INTEGER"));
    }
    ;

argument_expression_list
    : assignment_expression {
        emit ("PARAM", $1->loc->name);
        $$ = 1;
    }
    | argument_expression_list COMMA assignment_expression {
        emit ("PARAM", $3->loc->name);
        $$ = $1+1;
    }
    ;

unary_expression
    : postfix_expression {
        $$ = $1;
    }
    | INCREMENT_OP unary_expression {
        // Increment $2
        emit ("ADD", $2->array->name, $2->array->name, "1");

        // Use the same value as $2
        $$ = $2;
    }
    | DECREMENT_OP unary_expression {
        // Decrement $2
        emit ("SUB", $2->array->name, $2->array->name, "1");

        // Use the same value as $2
        $$ = $2;
    }
    | unary_operator cast_expression {
        $$ = new Array();
        switch ($1) {
            case '&':
                $$->array = gentemp((new symtype("PTR")));
                $$->array->type->ptr = $2->array->type;
                emit ("ADDRESS", $$->array->name, $2->array->name);
                break;
            case '*':
                $$->cat = "PTR";
                $$->loc = gentemp ($2->array->type->ptr);
                emit ("PTRR", $$->loc->name, $2->array->name);
                $$->array = $2->array;
                break;
            case '+':
                $$ = $2;
                break;
            case '-':
                $$->array = gentemp(new symtype($2->array->type->type));
                emit ("UMINUS", $$->array->name, $2->array->name);
                break;
            case '~':
                $$->array = gentemp(new symtype($2->array->type->type));
                emit ("BNOT", $$->array->name, $2->array->name);
                break;
            case '!':
                $$->array = gentemp(new symtype($2->array->type->type));
                emit ("LNOT", $$->array->name, $2->array->name);
                break;
            default:
                break;
        }
    }
    | SIZEOF unary_expression {
    }
    | SIZEOF LEFT_ROUND type_name RIGHT_ROUND {
    }
    ;

unary_operator
    : BIT_AND {
        $$ = '&';
    }
    | MUL {
        $$ = '*';
    }
    | ADD {
        $$ = '+';
    }
    | SUB {
        $$ = '-';
    }
    | NEG {
        $$ = '~';
    }
    | EXCL {
        $$ = '!';
    }
    ;

cast_expression
    : unary_expression {
        $$=$1;
    }
    | LEFT_ROUND type_name RIGHT_ROUND cast_expression {
        $$=$4;
    }
    ;

multiplicative_expression
    : cast_expression {
        $$ = new expr();
        if ($1->cat=="ARR") { // Array
            $$->loc = gentemp($1->loc->type);
            emit("ARRR", $$->loc->name, $1->array->name, $1->loc->name);
        }
        else if ($1->cat=="PTR") { // Pointer
            $$->loc = $1->loc;
        }
        else { // otherwise
            $$->loc = $1->array;
        }
    }
    | multiplicative_expression MUL cast_expression {
        if (typecheck ($1->loc, $3->array) ) {
            $$ = new expr();
            $$->loc = gentemp(new symtype($1->loc->type->type));
            emit ("MULT", $$->loc->name, $1->loc->name, $3->array->name);
        }
        else cout << "Type Error"<< endl;
    }
    | multiplicative_expression DIV cast_expression {
        if (typecheck ($1->loc, $3->array) ) {
            $$ = new expr();
            $$->loc = gentemp(new symtype($1->loc->type->type));
            emit ("DIVIDE", $$->loc->name, $1->loc->name, $3->array->name);
        }
        else cout << "Type Error"<< endl;
    }
    | multiplicative_expression MOD cast_expression {
        if (typecheck ($1->loc, $3->array) ) {
            $$ = new expr();
            $$->loc = gentemp(new symtype($1->loc->type->type));
            emit ("MODOP", $$->loc->name, $1->loc->name, $3->array->name);
        }
        else cout << "Type Error"<< endl;
    }
    ;

additive_expression
    : multiplicative_expression {
        $$=$1;
    }
    | additive_expression ADD multiplicative_expression {
        if (typecheck ($1->loc, $3->loc) ) {
            $$ = new expr();
            $$->loc = gentemp(new symtype($1->loc->type->type));
            emit ("ADD", $$->loc->name, $1->loc->name, $3->loc->name);
        }
        else cout << "Type Error"<< endl;
    }
    | additive_expression SUB multiplicative_expression {
            if (typecheck ($1->loc, $3->loc) ) {
            $$ = new expr();
            $$->loc = gentemp(new symtype($1->loc->type->type));
            emit ("SUB", $$->loc->name, $1->loc->name, $3->loc->name);
        }
        else cout << "Type Error"<< endl;

    }
    ;

shift_expression
    : additive_expression {
        $$=$1;
    }
    | shift_expression LEFT_LOGICAL_OP additive_expression {
        if ($3->loc->type->type == "INTEGER") {
            $$ = new expr();
            $$->loc = gentemp (new symtype("INTEGER"));
            emit ("LEFTOP", $$->loc->name, $1->loc->name, $3->loc->name);
        }
        else cout << "Type Error"<< endl;
    }
    | shift_expression RIGHT_LOGICAL_OP additive_expression {
        if ($3->loc->type->type == "INTEGER") {
            $$ = new expr();
            $$->loc = gentemp (new symtype("INTEGER"));
            emit ("RIGHTOP", $$->loc->name, $1->loc->name, $3->loc->name);
        }
        else cout << "Type Error"<< endl;
    }
    ;

relational_expression
    : shift_expression {
        $$=$1;
    }
    | relational_expression LT_OP shift_expression {
        if (typecheck ($1->loc, $3->loc) ) {
            $$ = new expr();
            $$->type = "BOOL";

            $$->truelist = makelist (nextinstr());
            $$->falselist = makelist (nextinstr()+1);
            emit("LT", "", $1->loc->name, $3->loc->name);
            emit ("GOTOOP", "");
        }
        else cout << "Type Error"<< endl;
    }
    | relational_expression GT_OP shift_expression {
        if (typecheck ($1->loc, $3->loc) ) {
            $$ = new expr();
            $$->type = "BOOL";

            $$->truelist = makelist (nextinstr());
            $$->falselist = makelist (nextinstr()+1);
            emit("GT", "", $1->loc->name, $3->loc->name);
            emit ("GOTOOP", "");
        }
        else cout << "Type Error"<< endl;
    }
    | relational_expression LE_OP shift_expression {
        if (typecheck ($1->loc, $3->loc) ) {
            $$ = new expr();
            $$->type = "BOOL";

            $$->truelist = makelist (nextinstr());
            $$->falselist = makelist (nextinstr()+1);
            emit("LE", "", $1->loc->name, $3->loc->name);
            emit ("GOTOOP", "");
        }
        else cout << "Type Error"<< endl;
    }
    | relational_expression GE_OP shift_expression {
        if (typecheck ($1->loc, $3->loc) ) {
            $$ = new expr();
            $$->type = "BOOL";

            $$->truelist = makelist (nextinstr());
            $$->falselist = makelist (nextinstr()+1);
            emit("GE", "", $1->loc->name, $3->loc->name);
            emit ("GOTOOP", "");
        }
        else cout << "Type Error"<< endl;
    }
    ;

equality_expression
    : relational_expression {
        $$=$1;
    }
    | equality_expression EQ_OP relational_expression {
        if (typecheck ($1->loc, $3->loc)) {
            convertBool2Int ($1);
            convertBool2Int ($3);

            $$ = new expr();
            $$->type = "BOOL";

            $$->truelist = makelist (nextinstr());
            $$->falselist = makelist (nextinstr()+1);
            emit("EQOP", "", $1->loc->name, $3->loc->name);
            emit ("GOTOOP", "");
        }
        else cout << "Type Error"<< endl;
    }
    | equality_expression NE_OP relational_expression {
        if (typecheck ($1->loc, $3->loc) ) {
            // If any is bool get its value
            convertBool2Int ($1);
            convertBool2Int ($3);

            $$ = new expr();
            $$->type = "BOOL";

            $$->truelist = makelist (nextinstr());
            $$->falselist = makelist (nextinstr()+1);
            emit("NEOP", "", $1->loc->name, $3->loc->name);
            emit ("GOTOOP", "");
        }
        else cout << "Type Error"<< endl;
    }
    ;

and_expression
    : equality_expression {
        $$=$1;
    }
    | and_expression BIT_AND equality_expression {
        if (typecheck ($1->loc, $3->loc) ) {
            // If any is bool get its value
            convertBool2Int ($1);
            convertBool2Int ($3);

            $$ = new expr();
            $$->type = "NONBOOL";

            $$->loc = gentemp (new symtype("INTEGER"));
            emit ("BAND", $$->loc->name, $1->loc->name, $3->loc->name);
        }
        else cout << "Type Error"<< endl;
    }
    ;

exclusive_or_expression
    : and_expression {
        $$=$1;
    }
    | exclusive_or_expression BIT_XOR and_expression {
        if (typecheck ($1->loc, $3->loc) ) {
            // If any is bool get its value
            convertBool2Int ($1);
            convertBool2Int ($3);

            $$ = new expr();
            $$->type = "NONBOOL";

            $$->loc = gentemp (new symtype("INTEGER"));
            emit ("XOR", $$->loc->name, $1->loc->name, $3->loc->name);
        }
        else cout << "Type Error"<< endl;
    }
    ;

inclusive_or_expression
    : exclusive_or_expression {
        $$=$1;
    }
    | inclusive_or_expression BIT_OR exclusive_or_expression {
        if (typecheck ($1->loc, $3->loc) ) {
            // If any is bool get its value
            convertBool2Int ($1);
            convertBool2Int ($3);

            $$ = new expr();
            $$->type = "NONBOOL";

            $$->loc = gentemp (new symtype("INTEGER"));
            emit ("INOR", $$->loc->name, $1->loc->name, $3->loc->name);
        }
        else cout << "Type Error"<< endl;
    }
    ;

logical_and_expression
    : inclusive_or_expression {
        $$=$1;
    }
    | logical_and_expression N AND_LOGICAL_OP M  inclusive_or_expression {
        convertInt2Bool($5);

        // convert $1 to bool and backpatch using N
        backpatch($2->nextlist, nextinstr());
        convertInt2Bool($1);

        $$ = new expr();
        $$->type = "BOOL";

        backpatch($1->truelist, $4);
        $$->truelist = $5->truelist;
        $$->falselist = merge ($1->falselist, $5->falselist);
    }
    ;

logical_or_expression
    : logical_and_expression {
        $$=$1;
    }
    | logical_or_expression N OR_LOGICAL_OP M logical_and_expression {
        convertInt2Bool($5);

        // convert $1 to bool and backpatch using N
        backpatch($2->nextlist, nextinstr());
        convertInt2Bool($1);

        $$ = new expr();
        $$->type = "BOOL";

        backpatch ($$->falselist, $4);
        $$->truelist = merge ($1->truelist, $5->truelist);
        $$->falselist = $5->falselist;
    }
    ;

M   : %empty{   // To store the address of the next instruction
        $$ = nextinstr();
    };

N   : %empty {  // gaurd against fallthrough by emitting a goto
        $$  = new statement();
        $$->nextlist = makelist(nextinstr());
        emit ("GOTOOP","");
    }
    ;

conditional_expression
    : logical_or_expression {
        $$=$1;
    }
    | logical_or_expression N QUES M expression N COLON M conditional_expression {
        $$->loc = gentemp($5->loc->type);
        $$->loc->update($5->loc->type);

        emit("EQUAL", $$->loc->name, $9->loc->name);
        list<int> l = makelist(nextinstr());
        emit ("GOTOOP", "");


        backpatch($6->nextlist, nextinstr());
        emit("EQUAL", $$->loc->name, $5->loc->name);
        list<int> m = makelist(nextinstr());
        l = merge (l, m);
        emit ("GOTOOP", "");


        backpatch($2->nextlist, nextinstr());
        convertInt2Bool($1);
        backpatch ($1->truelist, $4);
        backpatch ($1->falselist, $8);
        backpatch (l, nextinstr());
    }
    ;

assignment_expression
    : conditional_expression {
        $$ = $1;
    }
    | unary_expression assignment_operator assignment_expression {
        if($1->cat=="ARR") {
            $3->loc = conv($3->loc, $1->type->type);
            emit("ARRL", $1->array->name, $1->array->name, $3->loc->name);
            }
        else if($1->cat=="PTR") {
            emit("PTRL", $1->array->name, $3->loc->name);
            }
        else{
            $3->loc = conv($3->loc, $1->array->type->type);
            emit("EQUAL", $1->array->name, $3->loc->name);
            }
        $$ = $3;
    }
    ;

assignment_operator
    : EQUALS {}
    | MUL_ASSIGN  {}
    | DIV_ASSIGN {}
    | MOD_ASSIGN {}
    | ADD_ASSIGN {}
    | SUB_ASSIGN {}
    | LEFT_ASSIGN {}
    | RIGHT_ASSIGN {}
    | AND_ASSIGN {}
    | XOR_ASSIGN {}
    | OR_ASSIGN {}
    ;

expression
    : assignment_expression {
        $$ = $1;
    }
    | expression COMMA assignment_expression {}
    ;

constant_expression
    : conditional_expression
    {}
    ;

declaration
    : declaration_specifiers SEMICOLON  {}
    | declaration_specifiers init_declarator_list SEMICOLON {}
    ;

declaration_specifiers
    : storage_class_specifier {}
    | storage_class_specifier declaration_specifiers {}
    | type_specifier {}
    | type_specifier declaration_specifiers {}
    | type_qualifier {}
    | type_qualifier declaration_specifiers {}
    | function_specifier  {}
    | function_specifier declaration_specifiers {}
    ;

init_declarator_list
    : init_declarator {}
    | init_declarator_list COMMA init_declarator {}
    ;

init_declarator
    : declarator {
        $$=$1;
    }
    | declarator EQUALS initializer {
        if ($3->initial_value!="")
            $1->initial_value=$3->initial_value;
        emit ("EQUAL", $1->name, $3->name);
    }
    ;

storage_class_specifier
    : EXTERN {}
    | STATIC {}
    | AUTO {}
    | REGISTER {}
    ;

type_specifier
    : VOID {Type="VOID";}
    | CHAR {Type="CHAR";}
    | SHORT
    | INT {Type="INTEGER";}
    | LONG
    | FLOAT
    | DOUBLE {Type="DOUBLE";}
    | SIGNED
    | UNSIGNED
    | BOOL
    | COMPLEX
    | IMAGINARY
    | enum_specifier
    ;


specifier_qualifier_list
    : type_specifier specifier_qualifier_list {}
    | type_specifier {}
    | type_qualifier specifier_qualifier_list {}
    | type_qualifier {}
    ;


enum_specifier
    : ENUM LEFT_CURLY enumerator_list RIGHT_CURLY {}
    | ENUM IDENTIFIER LEFT_CURLY enumerator_list RIGHT_CURLY {}
    | ENUM LEFT_CURLY enumerator_list COMMA RIGHT_CURLY {}
    | ENUM IDENTIFIER LEFT_CURLY enumerator_list COMMA RIGHT_CURLY {}
    | ENUM IDENTIFIER {}
    ;

enumerator_list
    : enumerator {}
    | enumerator_list COMMA enumerator {}
    ;

enumerator
    : IDENTIFIER {}
    | IDENTIFIER EQUALS constant_expression {}
    ;

type_qualifier
    : CONST {}
    | VOLATILE {}
    | RESTRICT {}
    ;
function_specifier
    : INLINE {}
    ;
declarator
    : pointer direct_declarator {
        symtype * t = $1;
        while (t->ptr !=NULL) t = t->ptr;
        t->ptr = $2->type;
        $$ = $2->update($1);
    }
    | direct_declarator {}
    ;

direct_declarator
    : IDENTIFIER {
        $$ = $1->update(new symtype(Type));
        currentSymbol = $$;
    }
    | LEFT_ROUND declarator RIGHT_ROUND {
        $$ = $2;
    }
    | direct_declarator LEFT_SQUARE type_qualifier_list assignment_expression RIGHT_SQUARE {}
    | direct_declarator LEFT_SQUARE type_qualifier_list RIGHT_SQUARE {}
    | direct_declarator LEFT_SQUARE assignment_expression RIGHT_SQUARE {
        symtype * t = $1 -> type;
        symtype * prev = NULL;
        while (t->type == "ARR") {
            prev = t;
            t = t->ptr;
        }
        if (prev==NULL) {
            int temp = atoi($3->loc->initial_value.c_str());
            symtype* s = new symtype("ARR", $1->type, temp);
            $$ = $1->update(s);
        }
        else {
            prev->ptr =  new symtype("ARR", t, atoi($3->loc->initial_value.c_str()));
            $$ = $1->update ($1->type);
        }
    }
    | direct_declarator LEFT_SQUARE RIGHT_SQUARE {
        symtype * t = $1 -> type;
        symtype * prev = NULL;
        while (t->type == "ARR") {
            prev = t;
            t = t->ptr;
        }
        if (prev==NULL) {
            symtype* s = new symtype("ARR", $1->type, 0);
            $$ = $1->update(s);
        }
        else {
            prev->ptr =  new symtype("ARR", t, 0);
            $$ = $1->update ($1->type);
        }
    }
    | direct_declarator LEFT_SQUARE type_qualifier_list MUL RIGHT_SQUARE {}
    | direct_declarator LEFT_SQUARE STATIC type_qualifier_list assignment_expression RIGHT_SQUARE {}
    | direct_declarator LEFT_SQUARE STATIC assignment_expression RIGHT_SQUARE {}
    | direct_declarator LEFT_SQUARE MUL RIGHT_SQUARE {}
    | direct_declarator LEFT_ROUND CT parameter_type_list RIGHT_ROUND {
        table->name = $1->name;

        if ($1->type->type !="VOID") {
            sym *s = table->lookup("return");
            s->update($1->type);
        }
        $1->nested=table;
        table->parent = globalTable;
        changeTable (globalTable);              // Come back to globalsymbol table
        currentSymbol = $$;
    }
    | direct_declarator LEFT_ROUND identifier_list RIGHT_ROUND {}
    | direct_declarator LEFT_ROUND CT RIGHT_ROUND {
        table->name = $1->name;

        if ($1->type->type !="VOID") {
            sym *s = table->lookup("return");
            s->update($1->type);
        }
        $1->nested=table;

        table->parent = globalTable;
        changeTable (globalTable);              // Come back to globalsymbol table
        currentSymbol = $$;
    }
    ;

CT
    : %empty {                                                          // Used for changing to symbol table for a function
        if (currentSymbol->nested==NULL) changeTable(new symtable("")); // Function symbol table doesn't already exist
        else {
            changeTable (currentSymbol ->nested);                       // Function symbol table already exists
            emit ("LABEL", table->name);
        }
    }
    ;

pointer
    : MUL {
        $$ = new symtype("PTR");
    }
    | MUL type_qualifier_list {}
    | MUL pointer {
        $$ = new symtype("PTR", $2);
    }
    | MUL type_qualifier_list pointer {}
    ;

type_qualifier_list
    : type_qualifier {}
    | type_qualifier_list type_qualifier {}
    ;

parameter_type_list
    : parameter_list {}
    | parameter_list COMMA ELLIPSIS {}
    ;

parameter_list
    : parameter_declaration {}
    | parameter_list COMMA parameter_declaration {}

    ;

parameter_declaration
    : declaration_specifiers declarator {}
    | declaration_specifiers {}
    ;

identifier_list
    : IDENTIFIER {}
    | identifier_list COMMA IDENTIFIER {}
    ;

type_name
    : specifier_qualifier_list {}
    ;

initializer
    : assignment_expression {
        $$ = $1->loc;
    }
    | LEFT_CURLY initializer_list RIGHT_CURLY {}
    | LEFT_CURLY initializer_list COMMA RIGHT_CURLY {}
    ;

initializer_list
    : initializer {}
    | designation initializer {}
    | initializer_list COMMA initializer {}
    | initializer_list COMMA designation initializer {}
    ;

designation
    : designator_list EQUALS {}
    ;

designator_list
    : designator {}
    | designator_list designator {}
    ;

designator
    : LEFT_SQUARE constant_expression RIGHT_SQUARE {}
    | DOT IDENTIFIER {}
    ;

statement
    : labeled_statement {}
    | compound_statement {
        $$=$1;
    }
    | expression_statement {
        $$ = new statement();
        $$->nextlist = $1->nextlist;
    }
    | selection_statement {
        $$=$1;
    }
    | iteration_statement {
        $$=$1;
    }
    | jump_statement {
        $$=$1;
    }
    ;

labeled_statement
    : IDENTIFIER COLON statement {
        $$ = new statement();
    }
    | CASE constant_expression COLON statement {
        $$ = new statement();
    }
    | DEFAULT COLON statement {
        $$ = new statement();
    }
    ;

compound_statement
    : LEFT_CURLY RIGHT_CURLY {
        $$ = new statement();
    }
    | LEFT_CURLY block_item_list RIGHT_CURLY {
        $$ = $2;
    }
    ;

block_item_list
    : block_item {
        $$=$1;
    }
    | block_item_list M block_item {
        $$=$3;
        backpatch ($1->nextlist, $2);
    }
    ;

block_item
    : declaration {
        $$ = new statement();
    }
    | statement {
        $$ = $1;
    }
    ;


expression_statement
    : SEMICOLON {
        $$ = new expr();
    }
    | expression SEMICOLON {
        $$=$1;
    }
    ;

selection_statement
    : IF LEFT_ROUND expression N RIGHT_ROUND M statement N %prec THEN{
        backpatch ($4->nextlist, nextinstr());
        convertInt2Bool($3);
        $$ = new statement();
        backpatch ($3->truelist, $6);
        list<int> temp = merge ($3->falselist, $7->nextlist);
        $$->nextlist = merge ($8->nextlist, temp);
    }
    | IF LEFT_ROUND expression N RIGHT_ROUND M statement N ELSE M statement {
        backpatch ($4->nextlist, nextinstr());
        convertInt2Bool($3);
        $$ = new statement();
        backpatch ($3->truelist, $6);
        backpatch ($3->falselist, $10);
        list<int> temp = merge ($7->nextlist, $8->nextlist);
        $$->nextlist = merge ($11->nextlist,temp);
    }
    | SWITCH LEFT_ROUND expression RIGHT_ROUND statement {}
    ;

iteration_statement
    : WHILE M LEFT_ROUND expression RIGHT_ROUND M statement {
        $$ = new statement();
        convertInt2Bool($4);
        // M1 to go back to boolean again
        // M2 to go to statement if the boolean is true
        backpatch($7->nextlist, $2);
        backpatch($4->truelist, $6);
        $$->nextlist = $4->falselist;
        // Emit to prevent fallthrough
        stringstream strs;
            strs << $2;
            string temp_str = strs.str();
            char* intStr = (char*) temp_str.c_str();
        string str = string(intStr);

        emit ("GOTOOP", str);
    }
    | DO M statement M WHILE LEFT_ROUND expression RIGHT_ROUND SEMICOLON {
        $$ = new statement();
        convertInt2Bool($7);
        // M1 to go back to statement if expression is true
        // M2 to go to check expression if statement is complete
        backpatch ($7->truelist, $2);
        backpatch ($3->nextlist, $4);

        // Some bug in the next statement
        $$->nextlist = $7->falselist;
    }
    | FOR LEFT_ROUND expression_statement M expression_statement RIGHT_ROUND M statement {
        $$ = new statement();
        convertInt2Bool($5);
        backpatch ($5->truelist, $7);
        backpatch ($8->nextlist, $4);
        stringstream strs;
            strs << $4;
            string temp_str = strs.str();
            char* intStr = (char*) temp_str.c_str();
        string str = string(intStr);

        emit ("GOTOOP", str);
        $$->nextlist = $5->falselist;
    }
    | FOR LEFT_ROUND expression_statement M expression_statement M expression N RIGHT_ROUND M statement {
        $$ = new statement();
        convertInt2Bool($5);
        backpatch ($5->truelist, $10);
        backpatch ($8->nextlist, $4);
        backpatch ($11->nextlist, $6);
        stringstream strs;
            strs << $6;
            string temp_str = strs.str();
            char* intStr = (char*) temp_str.c_str();
        string str = string(intStr);
        emit ("GOTOOP", str);
        $$->nextlist = $5->falselist;
    }
    ;

jump_statement
    : GOTO IDENTIFIER SEMICOLON {
        $$ = new statement();
    }
    | CONTINUE SEMICOLON {
        $$ = new statement();
    }
    | BREAK SEMICOLON {
        $$ = new statement();
    }
    | RETURN SEMICOLON {
        $$ = new statement();
        emit("RETURN","");
    }
    | RETURN expression SEMICOLON {
        $$ = new statement();
        emit("RETURN",$2->loc->name);
    }
    ;

translation_unit
    : external_declaration  {}
    | translation_unit external_declaration {}
    ;

external_declaration
    : function_definition {}
    | declaration {}
    ;

function_definition
    : declaration_specifiers declarator declaration_list CT  compound_statement {}
    | declaration_specifiers declarator CT compound_statement {
        table->parent = globalTable;
        changeTable (globalTable);
    }
    | declarator declaration_list compound_statement {}
    | declarator compound_statement {}
    ;
declaration_list
    : declaration {}
    | declaration_list declaration {}
    ;

%%
void yyerror(string s) {
    cout<<s<<endl;
}
