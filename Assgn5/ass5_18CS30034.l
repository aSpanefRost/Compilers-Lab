%{
#include <stdio.h>
#include <string.h>
#include "ass5_18CS30034_translator.h"
#include "y.tab.h"
extern "C" int yylex();
%}

/* Rules: */

IDENTIFIER      {LETTER}({LETTER}|{CONST})*

/*Constants */

STRING_LITERALS     \"{S_CHAR_SEQUENCE}+\"
INTEGER_CONST       [1-9][0-9]*|"0"
FLOATING_CONST      {CONST}+{EXPONENTIAL_PART}|{FRACTIONAL_CONST}{EXPONENTIAL_PART}|{FRACTIONAL_CONST}
ENUMERATION_CONST   {IDENTIFIER}
CHARACTER_CONST     \'{C_CHAR_SEQUENCE}+\'

S_CHAR_SEQUENCE     {ESCAPE_SEQUENCE}|[^("\""|"\\"|"\n")]
C_CHAR_SEQUENCE     {ESCAPE_SEQUENCE}|[^("\'"|"\\"|"\n")]
ESCAPE_SEQUENCE     [\\][\']|[\\][\"]|[\\][?]|[\\][\\]|[\\][a]|[\\][b]|[\\][f]|[\\][n]|[\\][r]|[\\][t]|[\\][v]

EXPONENTIAL_PART    ("e+"|"e-"|"e"){CONST}+
FRACTIONAL_CONST    {CONST}+[.]{CONST}*|{CONST}+[.]|[.]{CONST}+ll

CONST               [0-9]
LETTER              [a-zA-Z_]

/*Comments */
COMMENT             {SINGLE_COMMENT}|{MULTI_COMMENT}
SINGLE_COMMENT      "//"[^("\n")]*
MULTI_COMMENT       "/*"([^*]|\*+[^*/])*\*+"/"
WS                  [ \t\n]

%%
"enum"          { return ENUM; }
"auto"          { return AUTO; }
"restrict"      { return RESTRICT; }
"unsigned"      { return UNSIGNED; }
"break"         { return BREAK; }
"extern"        { return EXTERN; }
"return"        { return RETURN; }
"void"          { return VOID; }
"case"          { return CASE; }
"float"         { return FLOAT; }
"short"         { return SHORT; }
"volatile"      { return VOLATILE; }
"char"          { return CHAR; }
"for"           { return FOR; }
"signed"        { return SIGNED; }
"while"         { return WHILE; }
"const"         { return CONST; }
"goto"          { return GOTO; }
"sizeof"        { return SIZEOF; }
"_Bool"         { return BOOL; }
"continue"      { return CONTINUE; }
"if"            { return IF; }
"static"        { return STATIC; }
"_Complex"      { return COMPLEX; }
"default"       { return DEFAULT; }
"inline"        { return INLINE; }
"struct"        { return STRUCT; }
"_Imaginary"        { return IMAGINARY; }
"do"            { return DO; }
"int"           { return INT; }
"switch"        { return SWITCH; }
"double"        { return DOUBLE; }
"long"          { return LONG; }
"typedef"       { return TYPEDEF; }
"else"          { return ELSE; }
"register"      { return REGISTER; }
"union"         { return UNION; }

{STRING_LITERALS}   {
    yylval.charval = yytext;
    return STRING_LITERALS;
}
{IDENTIFIER}        {
    yylval.symp = table->lookup(yytext);
    return IDENTIFIER;
}
{INTEGER_CONST}     {
    yylval.intval = atoi(yytext);
    return INTEGER_CONST;
}
{FLOATING_CONST}    {
    yylval.charval = yytext;
    return FLOATING_CONST;
}

{CHARACTER_CONST}   {
    yylval.charval = yytext;
    return CHARACTER_CONST;
}

"("         { return LEFT_ROUND; }
")"         { return RIGHT_ROUND; }
"["         { return LEFT_SQUARE; }
"]"         { return RIGHT_SQUARE; }
"{"         { return LEFT_CURLY; }
"}"         { return RIGHT_CURLY; }
"."         { return DOT; }
"<="            { return LE_OP; }
">="            { return GE_OP; }
"=="            { return EQ_OP; }
"!="            { return NE_OP; }
"&&"            { return AND_LOGICAL_OP; }
"||"            { return OR_LOGICAL_OP; }
"++"            { return INCREMENT_OP; }
"--"            { return DECREMENT_OP; }
"->"            { return POINTER_OP; }
"<<"            { return LEFT_LOGICAL_OP; }
">>"            { return RIGHT_LOGICAL_OP; }
"*="            { return MUL_ASSIGN; }
"/="            { return DIV_ASSIGN; }
"%="            { return MOD_ASSIGN; }
"+="            { return ADD_ASSIGN; }
"-="            { return SUB_ASSIGN; }
"<<="           { return LEFT_ASSIGN; }
">>="           { return RIGHT_ASSIGN; }
"&="            { return AND_ASSIGN; }
"^="            { return XOR_ASSIGN; }
"|="            { return OR_ASSIGN; }
"&"         { return BIT_AND; }
"^"         { return BIT_XOR; }
"|"         { return BIT_OR; }
"*"         { return MUL; }
"+"         { return ADD; }
"-"         { return SUB; }
","         { return COMMA; }
"#"         { return HASH; }
"="         { return EQUALS; }
"..."           { return ELLIPSIS; }
";"         { return SEMICOLON; }
":"         { return COLON; }
"?"         { return QUES; }
">"             { return LT_OP; }
"<"             { return GT_OP; }
"!"         { return EXCL; }
"/"         { return DIV; }
"%"         { return MOD; }
"~"             { return NEG; }

{COMMENT}       {/* comment */ }
{WS}            {/* Ignore whitespace */}
%%
