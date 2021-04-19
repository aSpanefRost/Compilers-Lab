
%{ 
	#include <stdio.h>
	#include <string.h>
	extern int yylex();
	void yyerror(char *s);
%}

%union {
	int val;
}

%token  NOT EXCLAMATION HASH PERCENTAGE XOR AND MULTIPLY OPENROUNDBRACKET CLOSEROUNDBRACKET MINUS DECREMENT 
%token  EQUAL EQUALEQUAL ELLIPSIS SUBTRACTASSIGN ANDASSIGN ADDASSIGN ORASSIGN XORASSIGN GREATERTHANEQUAL
%token  PLUS INCREMENT OPENCURLYBRACKET CLOSECURLYBRACKET OPENSQUAREBRACKET CLOSESQUAREBRACKET OR COLON
%token  SEMICOLON COMMA LESSTHAN LEFTSHIFT DOT GREATERTHAN RIGHTSHIFT QUESTIONMARK DIVIDE LESSTHANEQUAL 
%token  NOTEQUAL POINTER MULTIPLYASSIGN DIVIDEASSIGN MODASSIGN LEFTSHIFTASSIGN RIGHTSHIFTASSIGN 
%token  SIZEOF EXTERN STATIC VOID CHAR SHORT INT LONG FLOAT DOUBLE CASE DEFAULT IF ELSE SWITCH 
%token  WHILE DO FOR GOTO CONTINUE  BREAK RETURN STRUCT TYPEDEF UNION RESTRICT VOLATILE CONST INLINE
%token INT_CONSTANT FLOAT_CONSTANT CHAR_CONSTANT IDENTIFIER STRING_LITERAL
%start translation_unit
%token SINGLE_LINE_COMMENT
%token MULTI_LINE_COMMENT

%%


constant : INT_CONSTANT | FLOAT_CONSTANT | CHAR_CONSTANT ;
primary_expression : IDENTIFIER | constant | STRING_LITERAL | OPENROUNDBRACKET expression CLOSEROUNDBRACKET 
{ printf("Rule: PRIMARY_EXPRESSION\n");};

postfix_expression : primary_expression | postfix_expression OPENSQUAREBRACKET expression CLOSESQUAREBRACKET | postfix_expression OPENROUNDBRACKET CLOSEROUNDBRACKET | postfix_expression OPENROUNDBRACKET argument_expression_list CLOSEROUNDBRACKET | postfix_expression DOT IDENTIFIER | postfix_expression POINTER IDENTIFIER | postfix_expression INCREMENT | postfix_expression DECREMENT | OPENROUNDBRACKET type_name CLOSEROUNDBRACKET OPENCURLYBRACKET initializer_list CLOSECURLYBRACKET |  OPENROUNDBRACKET type_name CLOSEROUNDBRACKET OPENCURLYBRACKET initializer_list COMMA CLOSECURLYBRACKET 
{printf("Rule: POSTFIX_EXPRESSION\n");};

argument_expression_list : assignment_expression | argument_expression_list COMMA assignment_expression 
{printf("Rule: ARGUMENT_EXPRESSION_LIST\n");};

unary_expression : postfix_expression | INCREMENT unary_expression | DECREMENT unary_expression | unary_operator cast_expression | SIZEOF unary_expression | SIZEOF OPENROUNDBRACKET type_name CLOSEROUNDBRACKET 
{printf("Rule: UNARY_EXPRESSION\n");};

unary_operator: AND | MULTIPLY | PLUS | MINUS | NOT | EXCLAMATION 
{printf("Rule: UNARY_OPERATOR\n");};

cast_expression : unary_expression | OPENROUNDBRACKET type_name CLOSEROUNDBRACKET cast_expression 
{printf("Rule: CAST_EXPRESSION\n");};

multiplicative_expression : cast_expression | multiplicative_expression MULTIPLY cast_expression | multiplicative_expression DIVIDE cast_expression | multiplicative_expression PERCENTAGE cast_expression 
{printf("Rule: MULTIPLICATIVE_EXPRESSION\n");};

additive_expression : multiplicative_expression | additive_expression PLUS multiplicative_expression | additive_expression MINUS multiplicative_expression 
{printf("Rule: ADDITIVE_EXPRESSION\n");};

shift_expression : additive_expression | shift_expression LEFTSHIFT additive_expression | shift_expression RIGHTSHIFT additive_expression 
{printf("Rule: SHIFT_EXPRESSION\n");};

relational_expression : shift_expression | relational_expression LESSTHAN shift_expression | relational_expression GREATERTHAN shift_expression | relational_expression LESSTHANEQUAL shift_expression | relational_expression GREATERTHANEQUAL shift_expression 
{printf("Rule: RELATIONAL_EXPRESSION\n");};

equality_expression : relational_expression | equality_expression EQUALEQUAL relational_expression | equality_expression NOTEQUAL relational_expression 
{printf("Rule: EQUALITY_EXPRESSION\n");};

AND_expression : equality_expression | AND_expression AND equality_expression 
{printf("Rule: AND_expression\n");};

exclusive_OR_expression : AND_expression | exclusive_OR_expression XOR AND_expression 
{printf("Rule: EXCLUSIVE_OR_EXPRESSION \n");}; 

inclusive_OR_expression : exclusive_OR_expression | inclusive_OR_expression '|' exclusive_OR_expression 
{printf("Rule: INCLUSIVE_OR_EXPRESSION\n");};

logical_AND_expression : inclusive_OR_expression | logical_AND_expression AND inclusive_OR_expression 
{printf("Rule: LOGICAL_AND_EXPRESSION\n");};

logical_OR_expression : logical_AND_expression | logical_OR_expression OR logical_AND_expression 
{printf("Rule: LOGICAL_OR_EXPRESSION \n");};

conditional_expression : logical_OR_expression | logical_OR_expression QUESTIONMARK expression COLON conditional_expression 
{printf("Rule: CONDITIONAL_EXPRESSION\n");};

assignment_expression : conditional_expression | unary_expression assignment_operator assignment_expression 
{printf("Rule: ASSIGNMENT_EXPRESSION\n");};

assignment_operator : EQUAL | MULTIPLYASSIGN | DIVIDEASSIGN | MODASSIGN | ADDASSIGN | SUBTRACTASSIGN | LEFTSHIFTASSIGN | RIGHTSHIFTASSIGN | ANDASSIGN | XORASSIGN | ORASSIGN 
{printf("Rule: ASSIGNMENT_OPERATOR\n");};

expression : assignment_expression | expression COMMA assignment_expression 
{printf("Rule: EXPRESSION\n");};

constant_expression : conditional_expression 
{printf("Rule: CONSTANT_EXPRESSION\n");};

declaration : declaration_specifiers SEMICOLON | declaration_specifiers init_declarator_list SEMICOLON 
{printf("Rule: DECLARATION\n");};

declaration_specifiers : storage_class_specifier | storage_class_specifier declaration_specifiers | type_specifier | type_specifier declaration_specifiers | type_qualifier | type_qualifier declaration_specifiers | function_specifier  | function_specifier declaration_specifiers 
{printf("Rule: DECLARATION_SPECIFIERS\n");};

init_declarator_list : init_declarator | init_declarator_list COMMA init_declarator 
{printf("Rule: INIT_DECLARATOR_LIST\n");};

init_declarator : declarator | declarator EQUAL initializer 
{printf("Rule: INIT_DECLARATOR\n");};

type_qualifier : CONST | VOLATILE | RESTRICT 
{printf("Rule: TYPE_QUAIFIER \n");};

storage_class_specifier : EXTERN | STATIC 
{printf("Rule: STORAGE_CLASS_SPECIFIER\n");};

type_specifier : VOID | CHAR | SHORT | INT | LONG | FLOAT | DOUBLE  
{printf("Rule: TYPE_SPECIFIER\n");};

specifier_qualifier_list : type_specifier | type_specifier specifier_qualifier_list | type_qualifier | type_qualifier specifier_qualifier_list  
{printf("Rule: SPECIFIER_QUALIFIER_LIST\n");};

function_specifier : INLINE 
{printf("Rule: FUNCTION_SPECIFIER\n");};

declarator : pointer direct_declarator | direct_declarator 
{printf("Rule: DECLARATOR\n");};

direct_declarator : IDENTIFIER | OPENROUNDBRACKET declarator CLOSEROUNDBRACKET | direct_declarator OPENSQUAREBRACKET  type_qualifier_list_opt assignment_expression_opt CLOSESQUAREBRACKET | direct_declarator OPENSQUAREBRACKET STATIC type_qualifier_list_opt assignment_expression CLOSESQUAREBRACKET | direct_declarator OPENSQUAREBRACKET type_qualifier_list STATIC assignment_expression CLOSESQUAREBRACKET | direct_declarator OPENSQUAREBRACKET type_qualifier_list_opt MULTIPLY CLOSESQUAREBRACKET | direct_declarator OPENROUNDBRACKET parameter_type_list CLOSEROUNDBRACKET | direct_declarator OPENROUNDBRACKET identifier_list_opt CLOSEROUNDBRACKET {printf("DIRECT_DECLARATOR\n");};
type_qualifier_list_opt : %empty | type_qualifier_list
assignment_expression_opt : %empty | assignment_expression
identifier_list_opt : %empty | identifier_list

pointer : MULTIPLY | MULTIPLY type_qualifier_list | MULTIPLY pointer | MULTIPLY type_qualifier_list pointer 
{printf("Rule: POINTER\n");};

type_qualifier_list : type_qualifier | type_qualifier_list type_qualifier
{printf("Rule: TYPE_QUALIFIER_LIST\n");};

parameter_type_list : parameter_list | parameter_list COMMA ELLIPSIS 
{printf("Rule: PARAMETER_TYPE_LIST\n");};

parameter_list : parameter_declaration | parameter_list COMMA parameter_declaration 
{printf("Rule: PARAMETER_LIST\n");};

parameter_declaration : declaration_specifiers declarator | declaration_specifiers 
{printf("Rule: PARAMETER_DECLARATION\n");};

identifier_list: IDENTIFIER | identifier_list COMMA IDENTIFIER 
{printf("Rule: IDENTIFIER_LIST\n");};

type_name : specifier_qualifier_list 
{printf("Rule: TYPE_NAME\n");};

initializer : assignment_expression | OPENCURLYBRACKET initializer_list CLOSECURLYBRACKET | OPENCURLYBRACKET initializer_list COMMA CLOSECURLYBRACKET
{printf("Rule: INITIALIZER\n");};

initializer_list : designation_opt initializer | initializer_list COMMA designation_opt initializer {printf("INITIALIZER_LIST\n");};
designation_opt : %empty | designation

designation : designator_list EQUAL 
{printf("Rule: DESIGNATION\n");};

designator_list : designator | designator_list designator 
{printf("Rule: DESIGNATOR_LIST\n");};

designator : OPENSQUAREBRACKET constant_expression CLOSESQUAREBRACKET | DOT IDENTIFIER 
{printf("Rule: DESIGNATOR\n");};

statement : labeled_statement | compound_statement | expression_statement | selection_statement | iteration_statement | jump_statement 
{printf("Rule: STATEMENT\n");} ;

labeled_statement : IDENTIFIER COLON statement | CASE constant_expression COLON statement | DEFAULT COLON statement 
{printf("Rule: LABELED_STATMENT\n");};

compound_statement : OPENCURLYBRACKET CLOSECURLYBRACKET | OPENCURLYBRACKET block_item_list CLOSECURLYBRACKET 
{printf("Rule: COMPOUND_STATEMENT\n");};

block_item_list : block_item | block_item_list block_item 
{printf("Rule: BLOCK_ITEM_LIST\n");};

block_item : declaration | statement 
{printf("Rule: BLOCK_ITEM\n");};

expression_statement : SEMICOLON | expression SEMICOLON 
{printf("Rule: EXPRESSION_STATEMENT\n");};

selection_statement : IF OPENROUNDBRACKET expression CLOSEROUNDBRACKET statement | IF OPENROUNDBRACKET expression CLOSEROUNDBRACKET statement ELSE statement | SWITCH OPENROUNDBRACKET expression CLOSEROUNDBRACKET statement 
{printf("Rule: SELECTION_STATEMENT\n");};

iteration_statement : WHILE OPENROUNDBRACKET expression CLOSEROUNDBRACKET statement | DO statement WHILE OPENROUNDBRACKET expression CLOSEROUNDBRACKET SEMICOLON | FOR OPENROUNDBRACKET expression_opt SEMICOLON expression_opt SEMICOLON expression_opt CLOSEROUNDBRACKET statement  
{printf("Rule: ITERATION_STATEMENT\n");};
expression_opt : %empty | expression

jump_statement : GOTO IDENTIFIER SEMICOLON | CONTINUE SEMICOLON | BREAK SEMICOLON | RETURN SEMICOLON | RETURN expression SEMICOLON 
{printf("Rule: JUMP_STATEMENT\n");} ;

translation_unit : external_declaration | translation_unit external_declaration 
{printf("Rule: TRANSLATION_UNIT\n");};

external_declaration : function_definition | declaration 
{printf("Rule: EXTERNAL_DECLARATION\n");};

function_definition : declaration_specifiers declarator declaration_list compound_statement | declaration_specifiers declarator compound_statement 
{printf("Rule: FUNCTION_DEFINITION\n");};

declaration_list : declaration | declaration_list declaration 
{printf("Rule: DECLARATION_LIST\n");};


%%

void yyerror(char *s) {
	printf ("ERROR IS : %s",s);
}