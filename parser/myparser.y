%{
/****************************************************************************
myparser.y
ParserWizard generated YACC file.

Date: 2018Äê11ÔÂ15ÈÕ
****************************************************************************/
#include "mylexer.h"
#include <iostream>
#include <string.h>
using namespace std;
%}

/////////////////////////////////////////////////////////////////////////////
// declarations section

// parser name
%name myparser

// class definition
{
	// place any extra class members here
}

// constructor
{
	// place any extra initialisation code here
}

// destructor
{
	// place any extra cleanup code here
}

// attribute type
%include {
#ifndef YYSTYPE
#define YYSTYPE int
#endif
}

// place any declarations here

//myparser.h define excpet:
//DOUBLE FLOAT BOOL UNKNOWN BREAK RETURN
%token INT DOUBLE FLOAT CHAR BOOL VOID 
%token PLUS MINUS MUL DIV MOD INC DEC INAD IOR XOR NOT SHL SHR 
%token EQ GT LT GE LE NEQ
%token AND OR OPPOSITE
%token IF ELSE WHILE FOR BREAK RETURN
%token MAIN ASSIGN LBRACE RBRACE LPRACE RPRACE LSBRACE RSBRACE COMMA SIMICOLON COLON
%token ID NUMBER UNKNOWN

%left COMMA
%right ASSIGN
%left OR
%left AND
%left IOR
%left XOR
%left INAD 
%left EQ NEQ
%left LT LE GT GE
%left SHL SHR 
%left PLUS MINUS
%left MUL DIV MOD
%right OPPOSITE NOT 
%left LSBRACE RSBRACE LPRACE RPRACE 

%%

/////////////////////////////////////////////////////////////////////////////
// rules section

// place your YACC rules here (there must be at least one)

//??main?????
c_program
	:MAIN LPRACE RPRACE LBRACE code RBRACE			{$$=$5;}
	|MAIN LPRACE VOID RPRACE LBRACE code RBRACE		{$$=$6;}
	|VOID MAIN LPRACE RPRACE LBRACE code RBRACE		{$$=$6;}
	|VOID MAIN LPRACE VOID RPRACE LBRACE code RBRACE{$$=$7;}
	|INT MAIN LPRACE RPRACE LBRACE code RBRACE		{$$=$6;}
	|INT MAIN LPRACE VOID RPRACE LBRACE code RBRACE	{$$=$7;}
	;

//????????
code
	:stmt 		{$$=$1;}
	|code stmt	{$$=$1;}
	;

//???????
stmt
	:expr SIMICOLON			{$$=$1;}
	|asgn_stmt SIMICOLON	{$$=$1;}
	|dec_stmt SIMICOLON		{$$=$1;}
	|if_stmt SIMICOLON		{$$=$1;}
	|while_stmt SIMICOLON	{$$=$1;}
	|for_stmt SIMICOLON		{$$=$1;}
	|input_stmt SIMICOLON	{$$=$1;}
	|output_stmt SIMICOLON	{$$=$1;}
	;

//????
type
	:INT |DOUBLE |FLOAT |CHAR |BOOL |VOID
	;

//???????
ari_op
	:PLUS |MINUS |MUL |DIV |MOD |INC |DEC 
	|INAD |IOR |XOR |NOT |SHL |SHR 
	;

//???????
rel_op
	:EQ |GT |LT |GE |LE |NEQ
	;

//???????
log_op
	:AND |OR |OPPOSITE
	;

//??id
id
	//???????

	//????????id
	//???id???????
	//????????????????
	:ID
	|ID COMMA id
	|asgn_stmt
	|asgn_stmt COMMA id
	;

//?????
expr 
	:expr ari_op expr
	|expr rel_op expr	
	|expr log_op expr	
	|LE expr RE		{$$=$2;}
	|NUMBER			{$$=$1;}
	;

//??????
asgn_stmt
	:id ASSIGN expr
	;

//??????
dec_stmt
	:type id SIMICOLON
	;

//???if,while,for?????????{}???

//??if??
if_stmt
	//??DFA?NFA???
	//?????else if???
	:IF LPRACE exp RPRACE LBRACE stmt RBRACE ELSE LBRACE stmt RBRACE
	|IF LPRACE exp RPRACE LBRACE stmt RBRACE
	|IF LPRACE id RPRACE LBRACE stmt RBRACE ELSE LBRACE stmt RBRACE
	|IF LPRACE id RPRACE LBRACE stmt RBRACE

//??while??
while_stmt 
	:WHILE LPRACE expr RPRACE LBRACE stmt RBRACE
	|WHILE LPRACE id RPRACE LBRACE stmt RBRACE
	;
	
//??for??
for_stmt 
	//?????for????????
	//????????for????????
	//:FOR LPRACE for_1 SIMICOLON for_2 SIMICOLON for_3 RPRACE LBRACE stmt RBRACE
	:FOR LPRACE for_1 SIMICOLON expr SIMICOLON expr RPRACE LBRACE stmt RBRACE
	;

for_1
	//????
	:
	|asgn_stmt
	|id
	;

// for_2
// 	:expr
// 	;

// for_3
// 	:expr
// 	;

//??????
//??????
%%

/////////////////////////////////////////////////////////////////////////////
// programs section

int main(void)
{
	int n = 1;
	mylexer lexer;
	myparser parser;
	if (parser.yycreate(&lexer)) {
		if (lexer.yycreate(&parser)) {
			n = parser.yyparse();
		}
	}
	return n;
}

