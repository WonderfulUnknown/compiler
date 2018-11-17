%{
/****************************************************************************
expr.y
ParserWizard generated YACC file.

Date: 2016年10月18日
****************************************************************************/
#include <iostream>
#include <cctype>
using namespace std;
%}
%include {
#ifndef YYSTYPE
#define YYSTYPE double
#endif
}


// parser name
%name expr

// class definition
{
	// place any extra class members here
	virtual int yygettoken();
	int tokenval ;
}
// constructor
{
	// place any extra initialisation code here
}

// destructor
{
	// place any extra cleanup code here
}

// place any declarations here
%token ADD
%token SUB
%token MUL
%token DIV
%token LE
%token RE
%token NUMBER

%left ADD SUB
%left MUL DIV
%right UMINUS

%%

lines : lines expr '=' { cout << $2 << endl;}
	|	 lines  '='
	|
	;
	
expr : expr ADD expr	{ $$ = $1 + $3; }
	|	expr SUB expr	{ $$ = $1 - $3; }
	|	expr MUL expr	{ $$ = $1 * $3; }
	|	expr DIV expr	{ $$ = $1 / $3; }
	|	LE expr RE		{ $$ = $2; }
	|	SUB expr %prec UMINUS	{ $$ = -$2; }
	|	NUMBER			{$$=tokenval;}
	;

%%
int YYPARSERNAME::yygettoken()
{
	// place your token retrieving code here
	int token;
	
	while(1){
	token = getchar();
	
	if(token ==' ' || token == '\t' || token == '\n');
	else if (isdigit(token)) {
		tokenval = 0;
		while (isdigit(token)) {
			tokenval = tokenval * 10 + token - '0';
			token = getchar();
		}
		ungetc(token, stdin);
		return NUMBER;
	}
	else{
	
	//printf("%c",token);
	
	switch(token){
		case '+':
			return ADD;
			break;
		case '-':
			return SUB;
			break;
		case '*':
			return MUL;
			break;
		case '/':
			return DIV;
			break;
		case '(':
			return LE;
			break;
		case ')':
			return RE;
			break;
		default:
			return token;
			break;
		}
	}
	}
}

int main(void)
{
	int n = 1;
	expr parser;
	if (parser.yycreate()) {
		n = parser.yyparse();
	}
	return n;
}

    
