%{
/****************************************************************************
myparser.y
ParserWizard generated YACC file.

Date: 2018年11月15日
****************************************************************************/
#include <iostream>
#include <string.h>

#include "mylexer.h"
#include"ParseTree.h"

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

//定义main函数
c_program
	:MAIN LPRACE RPRACE LBRACE code RBRACE			{$$=$5;}
	|MAIN LPRACE VOID RPRACE LBRACE code RBRACE		{$$=$6;}
	|VOID MAIN LPRACE RPRACE LBRACE code RBRACE		{$$=$6;}
	|VOID MAIN LPRACE VOID RPRACE LBRACE code RBRACE{$$=$7;}
	|INT MAIN LPRACE RPRACE LBRACE code RBRACE		{$$=$6;}
	|INT MAIN LPRACE VOID RPRACE LBRACE code RBRACE	{$$=$7;}
	;

//定义代码段
code
	:stmt 		{$$=$1;}
	|code stmt	{$$=$1;}
	;

//定义语句
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

//定义类型
type
	:INT |DOUBLE |FLOAT |CHAR |BOOL |VOID
	;

//定义算术运算符
ari_op
	:PLUS |MINUS |MUL |DIV |MOD |INC |DEC 
	|INAD |IOR |XOR |NOT |SHL |SHR 
	;

//定义关系运算符
rel_op
	:EQ |GT |LT |GE |LE |NEQ
	;

//定义逻辑运算符
log_op
	:AND |OR |OPPOSITE
	;

//定义id
id
	//避免左递归
	:ID
	|ID COMMA id
	|asgn_stmt
	|asgn_stmt COMMA id
	;

//定义表达式
expr 
	:expr ari_op expr
	|expr rel_op expr	
	|expr log_op expr	
	|LE expr RE		{$$=$2;}
	|NUMBER			{$$=$1;}
	;

//定义赋值语句
asgn_stmt
	:id ASSIGN expr
	;

//定义声明语句
dec_stmt
	:type id SIMICOLON
	;

//没考虑if,while,for后不加{}只有一行的情况

//定义if语句
if_stmt
	//考虑DFA.NFA
	//没考虑else if的实现
	:IF LPRACE exp RPRACE LBRACE stmt RBRACE ELSE LBRACE stmt RBRACE
	|IF LPRACE exp RPRACE LBRACE stmt RBRACE
	|IF LPRACE id RPRACE LBRACE stmt RBRACE ELSE LBRACE stmt RBRACE
	|IF LPRACE id RPRACE LBRACE stmt RBRACE

//定义while语句
while_stmt 
	:WHILE LPRACE expr RPRACE LBRACE stmt RBRACE
	|WHILE LPRACE id RPRACE LBRACE stmt RBRACE
	;
	
//定义for语句
for_stmt 
	//:FOR LPRACE for_1 SIMICOLON for_2 SIMICOLON for_3 RPRACE LBRACE stmt RBRACE
	:FOR LPRACE for_1 SIMICOLON expr SIMICOLON expr RPRACE LBRACE stmt RBRACE
	;

for_1
	//可能为空
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

//定义输入语句
//input_stmt
//定义输出语句
//output_stmt
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

