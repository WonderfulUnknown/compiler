%{
/****************************************************************************
myparser->y
ParserWizard generated YACC file->

Date: 2018��11��15��
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
#define YYSTYPE TreeNode*	//���е�$����TreeNode*����
#endif
}

// place any declarations here

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

//����main����
// c_program
// 	:MAIN LPRACE RPRACE LBRACE code RBRACE			{$$=$5;}
// 	|MAIN LPRACE VOID RPRACE LBRACE code RBRACE		{$$=$6;}
// 	|VOID MAIN LPRACE RPRACE LBRACE code RBRACE		{$$=$6;}
// 	|VOID MAIN LPRACE VOID RPRACE LBRACE code RBRACE{$$=$7;}
// 	|INT MAIN LPRACE RPRACE LBRACE code RBRACE		{$$=$6;}
// 	|INT MAIN LPRACE VOID RPRACE LBRACE code RBRACE	{$$=$7;}
// 	;

//��������
// code
// 	:stmt 		{$$=$1;}
// 	|code stmt	
// 	{
		
// 	}
// 	;

//�������
stmt
	:exp SIMICOLON			{$$=$1;}
	|asgn_stmt SIMICOLON	{$$=$1;}
	|dec_stmt SIMICOLON		{$$=$1;}
	|if_stmt SIMICOLON		{$$=$1;}
	|while_stmt SIMICOLON	{$$=$1;}
	|for_stmt SIMICOLON		{$$=$1;}
	// |input_stmt SIMICOLON	{$$=$1;}
	// |output_stmt SIMICOLON	{$$=$1;}
	;

//��������
type
	:INT	{$$=$1;}
	|DOUBLE {$$=$1;}
	|FLOAT 	{$$=$1;}
	|CHAR 	{$$=$1;}
	|BOOL 	{$$=$1;}
	|VOID	{$$=$1;}
	;
//����op

op
	:ari_op	{$$=$1;}
	|rel_op	{$$=$1;}
	|log_op	{$$=$1;}
	;
	
//�������������
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

//�����ϵ�����
rel_op
	:EQ 	{$$=$1;}
	|GT 	{$$=$1;}
	|LT 	{$$=$1;}
	|GE		{$$=$1;}
	|LE 	{$$=$1;}
	|NEQ	{$$=$1;}
	;

//�����߼������
log_op
	:AND 		{$$=$1;}
	|OR 		{$$=$1;}
	|OPPOSITE	{$$=$1;}
	;

//����id
id
	//������ݹ�
	:ID
	{	
		$$ = node->stmt_node(dec_stmt);
		$$->attr.name = $1->attr.name;
		$$->address = $1->address;
	}
	//shift-reduce conflict on COMMA �ƽ���Լ��ͻ
	//|ID COMMA id
	|id COMMA ID
	{		
		//������Ҫ�����Ƿ����ʹ��id��ֵ
		YYSTYPE temp = $3;
		while(temp->brother != NULL)
			temp = temp->brother;
		temp->brother = $1;
	}
	// |asgn_stmt		{$$=$1;}
	// |asgn_stmt COMMA id
	;

//������ʽ
exp 
	//�ƽ���Լ��ͻ����������Ϊ��ͬ��op���ȼ���һ��
	:exp op exp		
	{
		$$ = node->exp_node($2->type.exp_type);
		$$->child[0] = $1;
		$$->child[1] = $3;
	}
	|LPRACE exp RPRACE		{$$=$2;}
	|NUMBER	
	{
		$$ = node->exp_node($2->type.exp_type);
		$$->attr.value = $2->attr.value;
	}
	;

//���帳ֵ���
asgn_stmt
	:id ASSIGN exp
	{
		$$ = node->exp_node($2->type.exp_type);
	}
	|asgn_stmt COMMA id
	{
		$$ = node->stmt_node(asgn_stmt);
		$$->child[0] = $1;
		$$->child[1] = $3;
	}
	;
//�����������
dec_stmt
	:type id 
	{
		//type�е�ֵ����mylexer->h��define��ֵ,ע��
		$$ = node->stmt_node(dec_stmt);
		$$->child[0] = $1;
		$$->child[1] = $2;
	}
	;

//û����if,while,for�󲻼�{}ֻ��һ�е����
//������Ҫ������Ϊ�ж�����������ٲ���

//����if���
if_stmt
	//����DFA->NFA
	//û����else if��ʵ��
	:IF LPRACE exp RPRACE LBRACE stmt RBRACE ELSE LBRACE stmt RBRACE
	{
		$$ = node->stmt_node(if_stmt);
		$$->child[0] = $3;
		$$->child[1] = $6;
		$$->child[2] = $10;
	}
	|IF LPRACE exp RPRACE LBRACE stmt RBRACE
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

//����while���
while_stmt       
	:WHILE LPRACE exp RPRACE LBRACE stmt RBRACE
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
	
//����for���
//������Ҫ����for���������־�ֱ��ж�
for_stmt 
	//:FOR LPRACE for_1 SIMICOLON for_2 SIMICOLON for_3 RPRACE LBRACE stmt RBRACE
	//:FOR LPRACE for_1 SIMICOLON exp SIMICOLON exp RPRACE LBRACE stmt RBRACE
	:FOR LPRACE asgn_stmt SIMICOLON exp SIMICOLON exp RPRACE LBRACE stmt RBRACE
	{
		$$ = node->stmt_node(for_stmt);
		$$->child[0] = $3;
		$$->child[1] = $5;
		$$->child[2] = $7;
		$$->child[3]= $10;
	}
	|FOR LPRACE id SIMICOLON exp SIMICOLON exp RPRACE LBRACE stmt RBRACE
	{
		$$ = node->stmt_node(for_stmt);
		$$->child[0] = $3;
		$$->child[1] = $5;
		$$->child[2] = $7;
		$$->child[3]= $10;	
	}
	;

// for_1
// 	//����Ϊ��
// 	:
// 	|asgn_stmt
// 	|id
// 	;

//�����������
//input_stmt
//����������
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

