%{

	#define KEYWORD 1
	#define IDENTIFIER 2
	#define INTEGER_CONSTANT 3
	#define FLOATING_CONSTANT 4
	#define CHARACTER_CONSTANT 5
	#define STRING_LITERAL 6
	#define PUNCTUATOR 7
	#define SINGLE_LINE_COMMENT 8
	#define MULTI_LINE_COMMENT 9
	#define ESCAPE_SEQUENCE 10
%}

/* Regular expression definitions are given below */


KEYWORD		"break"|"float"|"static"|"case"|"for"|"struct"|"char"|"goto"|"switch"|"continue"|"if"|"typedef"|"default"|"int"|"union"|"do"|"long"|"void"|"double"|"return"|"while"|"else"|"short"|"extern"|"sizeof"

IDENTIFIER 			{IDENTIFIER_NONDIGIT}({IDENTIFIER_NONDIGIT}|{DIGIT})*
IDENTIFIER_NONDIGIT		[a-zA-Z_]
DIGIT				[0-9]

CONSTANT			{INTEGER_CONSTANT}|{FLOATING_CONSTANT}|{CHARACTER_CONSTANT}
INTEGER_CONSTANT 		0|{NON_ZERO_DIGIT}{DIGIT}*
NON_ZERO_DIGIT			[1-9]
FLOATING_CONSTANT 		({FRACTIONAL_CONSTANT}{EXPONENT_PART}?)|({DIGIT}+{EXPONENT_PART})
FRACTIONAL_CONSTANT 	        (({DIGIT}+)?\.{DIGIT}+)|(({DIGIT}+)\.)
EXPONENT_PART			([eE][-+]?{DIGIT}+)

ESCAPE_SEQUENCE		\\['"?\\abfnrtv]
CHARACTER_CONSTANT 		'({C_CHAR})+'
C_CHAR 			[^'\\\n]|{ESCAPE_SEQUENCE}
C_CHAR_SEQUENCE		{C_CHAR}+

S_CHAR  			{ESCAPE_SEQUENCE}|[^("\"|"\\"|"\n")]
S_CHAR_SEQUENCE		{S_CHAR}+
STRING_LITERAL 		"\""{S_CHAR_SEQUENCE}?"\""

WHITESPACE  			[ \t\v\n\f]

PUNCTUATOR 			"["|"]"|"("|")"|"{"|"}"|"."|"->"|"++"|"--"|"&"|"*"|"+"|"-"|"~"|"!"|"/"|"%"|"<<"|">>"|"<"|">"|"<="|">="|"=="|"!="|"^"|"|"|"&&"|"||"|"?"|":"|";"|"..."|"="|"*="|"/="|"%="|"+="|"-="|"<<="|">>="|"&="|"^="|"|="|","|"#"

SINGLE_LINE_COMMENT			"//"[^("\n")]*
MULTI_LINE_COMMENT			\/\*([^\*]|(\*)+[^\/\*])*(\*)*\/



%%

{KEYWORD}				{return KEYWORD;}
{IDENTIFIER}				{return IDENTIFIER;}
{INTEGER_CONSTANT}			{return INTEGER_CONSTANT;}
{FLOATING_CONSTANT}			{return FLOATING_CONSTANT;}
{CHARACTER_CONSTANT}		        {return CHARACTER_CONSTANT;}
{STRING_LITERAL}			{return STRING_LITERAL;}
{PUNCTUATOR}				{return PUNCTUATOR;}
{SINGLE_LINE_COMMENT}		        {return SINGLE_LINE_COMMENT;}
{MULTI_LINE_COMMENT}		        {return MULTI_LINE_COMMENT;}
{ESCAPE_SEQUENCE}			{return ESCAPE_SEQUENCE;}

%%
