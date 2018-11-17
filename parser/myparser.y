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
%token PLUS MINUS MUL DIV MOD INC DEC
%token EQ GT LT GE LE NEQ
%token INAD IOR XOR NOT SHL SHR AND OR OPPOSITE
%token IF ELSE WHILE FOR BREAK RETURN
%token ASSIGN LBRACE RBRACE LPRACE RPRACE LSBRACE RSBRACE COMMA SIMICOLON COLON
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

Grammar
	: /* empty */
	;

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

