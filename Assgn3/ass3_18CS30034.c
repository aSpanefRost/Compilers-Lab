#include<stdio.h>

extern char* yytext;

int main()
{
	int t;
	while(t = yylex())
	{
		switch(t)
		{
			case KEYWORD:
				printf("<KEYWORD, %d, %s>\n",t,yytext);break;

			case IDENTIFIER:
				printf("<IDENTIFIER, %d, %s>\n",t,yytext);break;

			case INTEGER_CONSTANT:
				printf("<INTEGER_CONSTANT, %d, %s>\n",t,yytext);break;

			case FLOATING_CONSTANT:
				printf("<FLOATING_CONSTANT, %d, %s>\n",t,yytext);break;

			case CHARACTER_CONSTANT: 
				printf("<CHARACTER_CONSTANT, %d, %s>\n",t,yytext);break;

			case STRING_LITERAL:
				printf("<STRING_LITERAL, %d, %s>\n",t,yytext);break;

			case PUNCTUATOR:
				printf("<PUNCTUATOR, %d, %s>\n",t,yytext);break;

			case SINGLE_LINE_COMMENT:
		       	break;

			case MULTI_LINE_COMMENT:
		        	break;

			case ESCAPE_SEQUENCE:
				printf("<ESCAPE_SEQUENCE, %d, %s>\n",t,yytext);break;

			default:
				printf("Please enter a valid C literal\n");break;
		}
	}
}
