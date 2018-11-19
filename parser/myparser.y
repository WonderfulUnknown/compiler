%{
/****************************************************************************
myparser.y
ParserWizard generated YACC file.

Date: 2018��11��15��
****************************************************************************/
#include <iostream>
#include <string.h>

#include "mylexer.h"
#include"ParseTree.h"

using namespace std;

Parse_tree tree;

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
#define YYSTYPE Tree_node*
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

//����main����
c_program
	:MAIN LPRACE RPRACE LBRACE code RBRACE			{$$=$5;}
	|MAIN LPRACE VOID RPRACE LBRACE code RBRACE		{$$=$6;}
	|VOID MAIN LPRACE RPRACE LBRACE code RBRACE		{$$=$6;}
	|VOID MAIN LPRACE VOID RPRACE LBRACE code RBRACE{$$=$7;}
	|INT MAIN LPRACE RPRACE LBRACE code RBRACE		{$$=$6;}
	|INT MAIN LPRACE VOID RPRACE LBRACE code RBRACE	{$$=$7;}
	;

//��������
code
	:stmt 		{$$=$1;}
	|code stmt	//{$$=$1;} //////!!!!!!!!!!!!!!!!!!!!!!!!11111111111111
	;

//�������
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

//��������
type
	:INT	{$$=$1;}
	|DOUBLE {$$=$1;}
	|FLOAT 	{$$=$1;}
	|CHAR 	{$$=$1;}
	|BOOL 	{$$=$1;}
	|VOID	{$$=$1;}
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
		//������Ҫ���Ǻ��ӵ�����	
		$$ = tree.set_node(dec_stmt,-1,-1,$s1,yylval);
	}
	|ID COMMA id
	{		
		//������Ҫ�����Ƿ����ʹ��id��ֵ
		YYSTYPE temp = $3;
		while(temp->brother != NULL)
			temp = temp->brother;
		temp->brother = $1;
	}
	// |asgn_stmt		{$$=$s1;}
	// |asgn_stmt COMMA id
	;

//������ʽ
expr 
	:expr ari_op expr		
	{
		$$ = tree.set_node(expr,$2,-1,-1,-1);
		//������Ҫ����$$�Ƿ���.
		$$.first_child = $1;
		//������Ҫ����expr�����ֵܽڵ�
		$1.brother = $3;
	}
	|expr rel_op expr	
	{
		$$ = tree.set_node(expr,$2,-1,-1,-1);
		$$.first_child = $1;
		$1.brother = $3;
	}
	|expr log_op expr	
	{
		$$ = tree.set_node(expr,$2,-1,-1,-1);
		$$.first_child = $1;
		$1.brother = $3;
	}
	|LPRACE expr RPRACE		{$$=$2;}
	//= =Ϊ��.h�ļ�type�������number����
	|NUMBER	
	{
		$$ = tree.set_node(number,-1,$s1,-1,-1);
	}
	;

//���帳ֵ���
asgn_stmt
	:id ASSIGN expr
	{
		$$ = tree.set_node(asgn_stmt,-1,$s3,$s1,yylval);
	}
	|asgn_stmt COMMA id
	{
		///////////////!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
	}
	;
//�����������
dec_stmt
	:type id 
	{
		//type�е�ֵ����mylexer.h��define��ֵ,ע��
		$$ = tree.set_node(dec_stmt,$1,-1,$s2,yylval);
	}
	;

//û����if,while,for�󲻼�{}ֻ��һ�е����
//������Ҫ������Ϊ�ж�����������ٲ���

//void set_node(int stmt_type,int op_type,int value,char symbol,int address)
//����if���
if_stmt
	//����DFA.NFA
	//û����else if��ʵ��
	:IF LPRACE expr RPRACE LBRACE stmt RBRACE ELSE LBRACE stmt RBRACE
	{
		$$ = tree.set_node(if_stmt,-1,-1,-1,-1);
		$$.first_child = $s3;
		$s3.brother = $s6;
		$s6.brother = $s10;
	}
	|IF LPRACE expr RPRACE LBRACE stmt RBRACE
	{
		$$ = tree.set_node(if_stmt,-1,-1,-1,-1);
		$$.first_child = $s3;
		$s3.brother = $s6;
	}
	|IF LPRACE id RPRACE LBRACE stmt RBRACE ELSE LBRACE stmt RBRACE
	{
		$$ = tree.set_node(if_stmt,-1,-1,-1,-1);
		$$.first_child = $s3;
		$s3.brother = $s6;
		$s6.brother = $s10;
	}
	|IF LPRACE id RPRACE LBRACE stmt RBRACE
	{
		$$ = tree.set_node(if_stmt,-1,-1,-1,-1);
		$$.first_child = $s3;
		$s3.brother = $s6;
	}
	;

//����while���
while_stmt       
	:WHILE LPRACE expr RPRACE LBRACE stmt RBRACE
	{
		$$ = tree.set_node(while_stmt,-1,-1,-1,-1);
		$$.first_child = $s3;
		$s3.brother = $s6;		
	}
	|WHILE LPRACE id RPRACE LBRACE stmt RBRACE
	{
		$$ = tree.set_node(while_stmt,-1,-1,-1,-1);
		$$.first_child = $s3;
		$s3.brother = $s6;		
	}
	;
	
//����for���
//������Ҫ����for���������־�ֱ��ж�
for_stmt 
	//:FOR LPRACE for_1 SIMICOLON for_2 SIMICOLON for_3 RPRACE LBRACE stmt RBRACE
	//:FOR LPRACE for_1 SIMICOLON expr SIMICOLON expr RPRACE LBRACE stmt RBRACE
	:FOR LPRACE asgn_stmt SIMICOLON expr SIMICOLON expr RPRACE LBRACE stmt RBRACE
	{
		$$ = tree.set_node(for_stmt,-1,-1,-1,-1);
		$$.first_child = $s3;
		$s3.brother = $s5;
		$s5.brother = $s7;
		$s7.brother = $s10;
	}
	|FOR LPRACE id SIMICOLON expr SIMICOLON expr RPRACE LBRACE stmt RBRACE
	{
		$$ = tree.set_node(for_stmt,-1,-1,-1,-1);
		$$.first_child = $s3;
		$s3.brother = $s5;
		$s5.brother = $s7;
		$s7.brother = $s10;		
	}
	;

// for_1
// 	//����Ϊ��
// 	:
// 	|asgn_stmt
// 	|id
// 	;

// for_2
// 	:expr
// 	;

// for_3
// 	:expr
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

