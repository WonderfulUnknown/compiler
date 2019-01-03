%{
/****************************************************************************
myparser->y
ParserWizard generated YACC file->

Date:2018年11月15日
****************************************************************************/
#include <iostream>
#include <fstream>
// #include <string>
#include "mylexer.h"
#include "Tree.h"

using namespace std;

TreeNode *node = node->stmt_node(com_stmt);
extern ParseTree tree;
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
#define YYSTYPE TreeNode*	//所有的$都是TreeNode*类型
#endif
}

// place any declarations here

%token INT DOUBLE FLOAT CHAR BOOL VOID 
%token PLUS MINUS MUL DIV MOD INC DEC INAD IOR XOR NOT SHL SHR 
%token EQ GT LT GE LE NEQ
%token AND OR OPPOSITE
%token IF ELSE WHILE FOR BREAK RETURN CIN COUT
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
program
	:MAIN LPRACE RPRACE LBRACE code RBRACE			{$$=$5;}
	|MAIN LPRACE VOID RPRACE LBRACE code RBRACE		{$$=$6;}
	|VOID MAIN LPRACE RPRACE LBRACE code RBRACE		{$$=$6;}
	|VOID MAIN LPRACE VOID RPRACE LBRACE code RBRACE{$$=$7;}
	|INT MAIN LPRACE RPRACE LBRACE code RBRACE		{$$=$6;}
	|INT MAIN LPRACE VOID RPRACE LBRACE code RBRACE	{$$=$7;}
	;

//定义代码段
code
	:stmt 
	{
		$$ = $1;
		tree.root = $$;//只有一个语句时根结点
	}
	|code stmt	
	{
		$$ = $2;
		$$->brother = $1;
		
		node->child[0] = $$;
		tree.root = node;
	}
	;

//定义语句
stmt
	:exp SIMICOLON			{$$ = $1;}
	|asgn_stmt SIMICOLON	{$$ = $1;}
	|dec_stmt SIMICOLON		{$$ = $1;}
	|if_stmt 				{$$ = $1;}
	|while_stmt 			{$$ = $1;}
	|for_stmt 				{$$ = $1;}
	|input_stmt SIMICOLON	{$$ = $1;}
	|output_stmt SIMICOLON	{$$ = $1;}
	;

//定义类型
type
	:INT	
	{
		$$ = node->stmt_node(type_spe);
		$$->data_type = INT;
	}
	|DOUBLE
	{
		$$ = node->stmt_node(type_spe);
		$$->data_type = DOUBLE;
	}
	|FLOAT
	{
		$$ = node->stmt_node(type_spe);
		$$->data_type = FLOAT;
	}
	|CHAR
	{
		$$ = node->stmt_node(type_spe);
		$$->data_type = CHAR;
	}
	|BOOL
	{
		$$ = node->stmt_node(type_spe);
		$$->data_type = BOOL;
	}
	|VOID
	{
		$$ = node->stmt_node(type_spe);
		$$->data_type = VOID;
	};

//定义op
op
	:ari_op		{$$ = $1;}
	|rel_op		{$$ = $1;}
	|log_op		{$$ = $1;}
	|ASSIGN
	{
		$$ = node->exp_node(oper);
		$$->attr.op = ASSIGN;
	}
	;

//定义算术运算符
ari_op
	:PLUS	
	{
		$$ = node->exp_node(oper);
		$$->attr.op = PLUS;
	}
	|MINUS	
	{
		$$ = node->exp_node(oper);
		$$->attr.op = MINUS;
	}
	|MUL 	
	{
		$$ = node->exp_node(oper);
		$$->attr.op = MUL;
	}
	|DIV
	{
		$$ = node->exp_node(oper);
		$$->attr.op = DIV;
	}
	|MOD
	{
		$$ = node->exp_node(oper);
		$$->attr.op = MOD;
	}
	|INC
	{
		$$ = node->exp_node(oper);
		$$->attr.op = INC;
	}
	|DEC
	{
		$$ = node->exp_node(oper);
		$$->attr.op = DEC;
	}
	|INAD
	{
		$$ = node->exp_node(oper);
		$$->attr.op = INAD;
	}
	|IOR
	{
		$$ = node->exp_node(oper);
		$$->attr.op = IOR;
	}
	|XOR
	{
		$$ = node->exp_node(oper);
		$$->attr.op = XOR;
	}
	|NOT
	{
		$$ = node->exp_node(oper);
		$$->attr.op = NOT;
	}
	|SHL
	{
		$$ = node->exp_node(oper);
		$$->attr.op = SHL;
	}
	|SHR
	{
		$$ = node->exp_node(oper);
		$$->attr.op = SHR;
	}
	;

//定义关系运算符
rel_op
	:EQ
	{
		$$ = node->exp_node(oper);
		$$->attr.op = 276;
	}
	|GT
	{
		$$ = node->exp_node(oper);
		$$->attr.op = GT;
	}
	|LT
	{
		$$ = node->exp_node(oper);
		$$->attr.op = LT;
	}
	|GE
	{
		$$ = node->exp_node(oper);
		$$->attr.op = GE;
	}
	|LE
	{
		$$ = node->exp_node(oper);
		$$->attr.op = LE;
	}
	|NEQ
	{
		$$ = node->exp_node(oper);
		$$->attr.op = NEQ;
	}
	;

//定义逻辑运算符
log_op
	:AND
	{
		$$ = node->exp_node(oper);
		$$->attr.op = AND;
	}
	|OR
	{
		$$ = node->exp_node(oper);
		$$->attr.op = OR;
	}
	|OPPOSITE
	{
		$$ = node->exp_node(oper);
		$$->attr.op = OPPOSITE;
	}
	;

//定义id
id
	:ID
	{
		$$ = node->exp_node(id);
		strcpy($$->attr.name, $1->attr.name);
		$$->address = tree.search_table($$->attr.name);
		$$->data_type = INT;
		$$->data_type = tree.id_type[$$->address];
	}
	|id COMMA ID //id按顺序
	{		
		$$ = node->exp_node(id);
		strcpy($$->attr.name , $3->attr.name);
		$$->address = tree.search_table($$->attr.name);
		$$->brother = $1;
	}
	;

//定义表达式
exp 
	:exp op exp	//按exp op exp 顺序创建结点	
	{
		$2->child[0] = $1;
		$2->child[1] = $3;
		$$ = $2;
	}
	|LPRACE exp RPRACE		{$$ = $2;}
	|NUMBER	
	{
		$$ = node->exp_node(number);
		$$->attr.value = $1->attr.value;
	}
	|id	{$$ = $1;}
	;

//定义赋值语句
asgn_stmt
	:id ASSIGN exp
	{
		$$ = node->stmt_node(asgn_stmt);
		$$->child[0] = $1;
		$$->child[1] = $3;
	}
	|asgn_stmt COMMA id
	{
		$$ = node->stmt_node(asgn_stmt);
		$$->child[0] = $1;
		$$->child[1] = $3;
	}
	|id ASSIGN asgn_stmt
	{
		$$ = node->stmt_node(asgn_stmt);
		$$->child[0] = $1;
		$$->child[1] = $3;
	}
	;

//定义声明语句
dec_stmt
	:type id 
	{
		$$ = node->stmt_node(dec_stmt);
		$$->child[0] = $1;
		$$->child[1] = $2;
		$2->data_type = $1->data_type;
		TreeNode *temp;
		temp = $2;
		while(temp)
		{
			temp->data_type = $1->data_type;
			tree.id_type[temp->address] = $1->data_type;
			temp = temp->brother;
		}
	}
	;

//定义if语句
if_stmt
	:IF LPRACE exp RPRACE stmt
	{
		$$ = node->stmt_node(if_stmt);
		$$->child[0] = $3;
		$$->child[1] = $5;
		sprintf_s($5->label.curr_label,sizeof($5->label.curr_label), "L%d", tree.label_sum++);//拼接函数
		$$->label.true_label = $5->label.curr_label;
	}
	// |IF LPRACE exp RPRACE LBRACE stmt RBRACE ELSE LBRACE stmt RBRACE
	// {
	// 	$$ = node->stmt_node(if_stmt);
	// 	$$->child[0] = $3;
	// 	$$->child[1] = $6;
	// 	$$->child[2] = $10;
	// }
	// |IF LPRACE exp RPRACE LBRACE stmt RBRACE
	// {
	// 	$$ = node->stmt_node(if_stmt);
	// 	$$->child[0] = $3;
	// 	$$->child[1] = $6;
	// }
	;

//定义while语句
while_stmt       
	:WHILE LPRACE exp RPRACE LBRACE stmt RBRACE
	{
		$$ = node->stmt_node(while_stmt);
		$$->child[0] = $3;
		$$->child[1] = $6;
		sprintf_s($6->label.curr_label,sizeof($6->label.curr_label), "L%d", tree.label_sum++);//拼接函数
		$$->label.true_label = $6->label.curr_label;
	}
	|WHILE LPRACE id RPRACE LBRACE stmt RBRACE
	{
		$$ = node->stmt_node(while_stmt);
		$$->child[0] = $3;
		$$->child[1] = $6;
		sprintf_s($6->label.curr_label,sizeof($6->label.curr_label), "L%d", tree.label_sum++);//拼接函数
		$$->label.true_label = $6->label.curr_label;
	}
	;
	
//定义for语句
for_stmt 
	:FOR LPRACE asgn_stmt SIMICOLON exp SIMICOLON exp RPRACE LBRACE stmt RBRACE
	{
		$$ = node->stmt_node(for_stmt);
		$$->child[0] = $3;
		$$->child[1] = $5;
		$$->child[2] = $7;
		$$->child[3]= $10;
		sprintf_s($10->label.curr_label,sizeof($10->label.curr_label), "L%d", tree.label_sum++);//拼接函数
		$$->label.true_label = $10->label.curr_label;
	}
	|FOR LPRACE id SIMICOLON exp SIMICOLON exp RPRACE LBRACE stmt RBRACE
	{
		$$ = node->stmt_node(for_stmt);
		$$->child[0] = $3;
		$$->child[1] = $5;
		$$->child[2] = $7;
		$$->child[3]= $10;
		sprintf_s($10->label.curr_label,sizeof($10->label.curr_label), "L%d", tree.label_sum++);//拼接函数
		$$->label.true_label = $10->label.curr_label;
	}
	;

//定义输入语句
input_stmt
	:CIN GT GT id
	{
		$$ = node->stmt_node(input_stmt);
		$$->child[0] = $4;
	}
	;
//定义输出语句
output_stmt
	:COUT LT LT id
	{
		$$ = node->stmt_node(input_stmt);
		$$->child[0] = $4;
	}
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
			ofstream fout1("error.txt");	
			fout1.close();//清空error文件
			ofstream fout2("code.txt");	
			fout2.close();//清空code文件

			tree.gen_header(); //输出汇编代码头
			freopen("input.txt", "r",stdin);
			n = parser.yyparse();
			freopen("CON", "r", stdin);
			
			tree.gen_dec(tree.root);
			tree.print_tree(tree.root);
		}
	}

	system("pause");
	return n;
}

