%{
/****************************************************************************
myparser.y
ParserWizard generated YACC file.

Date: 2018年10月17日
****************************************************************************/
#include <ctype.h>
#include <stdio.h>
%}
%include {
#ifndef YYSTYPE
#define YYSTYPE double
#endif
}

//%token NUMBER
%left '+' '-'
%left '*' '/' //显示地指定优先级
%right UMINUS//代表一元减号的伪标记，处于最高优先级

%%
lines	:	lines expr '\n'	{ printf("%g\n", $2); }
		|	lines '\n'
		|
		;

expr	:	expr '+' expr	{ $$ = $1 + $3; }
		|	expr '-' expr	{ $$ = $1 - $3; }
		|	expr '*' expr	{ $$ = $1 * $3; }
		|	expr '/' expr	
			{
				if($3 == 0)
					yyerror("divide by zero");
				else 
					$$ = $1 / $3; 
			}
		|	'(' expr ')'	{ $$ = $2; }
		|	'-' expr %prec UMINUS	{ $$ = -$2; }
		|	DIGIT
		;
NUMBER	:	'0'				{ $$ = 0.0; }
		|	'1'				{ $$ = 1.0; }
		|	'2'				{ $$ = 2.0; }
		|	'3'				{ $$ = 3.0; }
		|	'4'				{ $$ = 4.0; }
		|	'5'				{ $$ = 5.0; }
		|	'6'				{ $$ = 6.0; }
		|	'7'				{ $$ = 7.0; }
		|	'8'				{ $$ = 8.0; }
		|	'9'				{ $$ = 9.0; }
		;
DIGIT	:	NUMBER			{ $$ = $1; }
		|	NUMBER DIGIT	{ $$ = $1 * 10 + $2; }
		;
		
%%
int yygettoken(void)
{	
	int token;
	token = getchar();
	while (token == ' ' || token == '/n' || token == '/t')
		token = getchar();
	
	return getchar();
}

int main(void)
{
	return yyparse();
}
