%{
/****************************************************************************
myparser->y
ParserWizard generated YACC file->

Date: 2018年11月15日
****************************************************************************/
#include <iostream>
// #include <string->h>

#include "mylexer.h"


using namespace std;
#include "Tree.h"
TreeNode *node;
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
#define YYSTYPE TreeNode*
#endif
}

// place any declarations here

//myparser->h define excpet:
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
	|code stmt	//{$$=$1;} //////!!!!!!!!!!!!!!!!!!!!!!
	;

//定义语句
stmt
	:expr SIMICOLON			{$$=$1;}
	|asgn_stmt SIMICOLON	{$$=$1;}
	|dec_stmt SIMICOLON		{$$=$1;}
	|if_stmt SIMICOLON		{$$=$1;}
	|while_stmt SIMICOLON	{$$=$1;}
	|for_stmt SIMICOLON		{$$=$1;}
	// |input_stmt SIMICOLON	{$$=$1;}
	// |output_stmt SIMICOLON	{$$=$1;}
	;

//定义类型
type
	:INT	{$$=$1;}
	|DOUBLE {$$=$1;}
	|FLOAT 	{$$=$1;}
	|CHAR 	{$$=$1;}
	|BOOL 	{$$=$1;}
	|VOID	{$$=$1;}
	;
//定义op

op
	:ari_op	{$$=$1;}
	|rel_op	{$$=$1;}
	|log_op	{$$=$1;}
	;
	
//定义算术运算符
ari_op
	:PLUS	{$$=$1;}
	|MINUS	{$$=$1;} 
	|MUL 	{$$=$1;}
	|DIV 	{$$=$1;}
	|MOD 	{$$=$1;}
	|INC 	{$$=$1;}
	|DEC	{$$=$1;} 
	|INAD 	{$$=$1;}
	|IOR 	{$$=$1;}
	|XOR 	{$$=$1;}
	|NOT 	{$$=$1;}
	|SHL 	{$$=$1;}
	|SHR	{$$=$1;} 
	;

//定义关系运算符
rel_op
	:EQ 	{$$=$1;}
	|GT 	{$$=$1;}
	|LT 	{$$=$1;}
	|GE		{$$=$1;}
	|LE 	{$$=$1;}
	|NEQ	{$$=$1;}
	;

//定义逻辑运算符
log_op
	:AND 		{$$=$1;}
	|OR 		{$$=$1;}
	|OPPOSITE	{$$=$1;}
	;

//定义id
id
	//避免左递归
	:ID
	{	
		$$ = node->stmt_node(dec_stmt);
		$$->attr.name = $1->attr.name;
		//不识别yylval
		$$->address = yylval->address;
	}
	|ID COMMA id
	{		
		//可能需要考虑是否可以使用id赋值
		YYSTYPE temp = $3;
		while(temp->brother != NULL)
			temp = temp->brother;
		temp->brother = $1;
	}
	// |asgn_stmt		{$$=$1;}
	// |asgn_stmt COMMA id
	;

//定义表达式
expr 
	:expr op expr		
	{
		$$ = node->expr_node($2->attr.value);
		$$->child[0] = $1;
		$$->child[1] = $3;
	}
	|LPRACE expr RPRACE		{$$=$2;}
	|NUMBER	
	{
		$$ = node->simple_expr();
	}
	;

//定义赋值语句
asgn_stmt
	:id ASSIGN expr
	{
		$$ = node->expr_node($2);
	}
	|asgn_stmt COMMA id
	{
		///////////////!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
	}
	;
//定义声明语句
dec_stmt
	:type id 
	{
		//type中的值都是mylexer->h中define的值,注意
		$$ = node->stmt_node(dec_stmt);
		$$->child[0] = $1;
		$$->child[1] = $2;
	}
	;

//没考虑if,while,for后不加{}只有一行的情况
//可能需要对能作为判断条件的语句再补充

//定义if语句
if_stmt
	//考虑DFA->NFA
	//没考虑else if的实现
	:IF LPRACE expr RPRACE LBRACE stmt RBRACE ELSE LBRACE stmt RBRACE
	{
		$$ = node->stmt_node(if_stmt);
		$$->child[0] = $3;
		$$->child[1] = $6;
		$$->child[2] = $10;
	}
	|IF LPRACE expr RPRACE LBRACE stmt RBRACE
	{
		$$ = node->stmt_node(if_stmt);
		$$->child[0] = $3;
		$$->child[1] = $6;
	}
	|IF LPRACE id RPRACE LBRACE stmt RBRACE ELSE LBRACE stmt RBRACE
	{
		$$ = node->stmt_node(if_stmt);
		$$->child[0] = $3;
		$$->child[1] = $6;
		$$->child[2] = $10;
	}
	|IF LPRACE id RPRACE LBRACE stmt RBRACE
	{
		$$ = node->stmt_node(if_stmt);
		$$->child[0] = $3;
		$$->child[1] = $6;
	}
	;

//定义while语句
while_stmt       
	:WHILE LPRACE expr RPRACE LBRACE stmt RBRACE
	{
		$$ = node->stmt_node(while_stmt);
		$$->child[0] = $3;
		$$->child[1] = $6;		
	}
	|WHILE LPRACE id RPRACE LBRACE stmt RBRACE
	{
		$$ = node->stmt_node(while_stmt);
		$$->child[0] = $3;
		$$->child[1] = $6;		
	}
	;
	
//定义for语句
//可能需要考虑for语句的三个字句分别判断
for_stmt 
	//:FOR LPRACE for_1 SIMICOLON for_2 SIMICOLON for_3 RPRACE LBRACE stmt RBRACE
	//:FOR LPRACE for_1 SIMICOLON expr SIMICOLON expr RPRACE LBRACE stmt RBRACE
	:FOR LPRACE asgn_stmt SIMICOLON expr SIMICOLON expr RPRACE LBRACE stmt RBRACE
	{
		$$ = node->stmt_node(for_stmt);
		$$->child[0] = $3;
		$$->child[1] = $5;
		$$->child[2] = $7;
		$$->child[3]= $10;
	}
	|FOR LPRACE id SIMICOLON expr SIMICOLON expr RPRACE LBRACE stmt RBRACE
	{
		$$ = node->stmt_node(for_stmt);
		$$->child[0] = $3;
		$$->child[1] = $5;
		$$->child[2] = $7;
		$$->child[3]= $10;	
	}
	;

// for_1
// 	//可能为空
// 	:
// 	|asgn_stmt
// 	|id
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
	if (parser->yycreate(&lexer)) {
		if (lexer->yycreate(&parser)) {
			n = parser->yyparse();
		}
	}
	return n;
}

