%{
/****************************************************************************
myparser->y
ParserWizard generated YACC file->

Date:2018年11月15日
****************************************************************************/
#include <iostream>
#include <fstream>
#include "mylexer.h"
#include "Tree.h"
// #include<stdio.h>

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
%token MAIN ENDL ASSIGN LBRACE RBRACE LPRACE RPRACE LSBRACE RSBRACE COMMA SIMICOLON COLON 
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
		tree.root = $$;
		if($1->type.stmt_type == while_stmt || $1->type.stmt_type == if_stmt)
			$1->child[0]->false_label = tree.label_sum++;
			//ofstream fout("code.txt", ios::app);
			//fout << "L" << $1->child[0]->false_label << ":" << endl;
		else if($1->type.stmt_type == for_stmt)
			$1->child[1]->false_label = tree.label_sum++;
	}
	|stmt code
	{
		$$ = $1;
		$$->brother = $2;
		node->child[0] = $$;
		tree.root = node; 
		if($1->type.stmt_type == for_stmt || $1->type.stmt_type == while_stmt || $1->type.stmt_type == if_stmt)
		{
			if($2->curr_label <= 0)
				$2->curr_label = tree.label_sum++;
			$1->child[0]->false_label = $2->curr_label;
		}
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
	|ID COMMA id
	{
		$$ = node->exp_node(id);
		strcpy($$->attr.name , $1->attr.name);
		$$->address = tree.search_table($$->attr.name);
		$$->brother = $3;
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
		if($3->type.exp_type == oper)
		{
			if ($3->temp_num < 0)
				$3->temp_num = ++tree.temp_sum;
		}
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
	//	sprintf_s($5->curr_label,sizeof($5->curr_label), "L%d", tree.label_sum++);//拼接函数
		$5->curr_label = tree.label_sum++;
		$$->true_label = $5->curr_label;
	}
	|IF LPRACE exp RPRACE LBRACE code RBRACE
	{
		$$ = node->stmt_node(if_stmt);
		$$->child[0] = $3;
		$$->child[1] = node->stmt_node(com_stmt);
		$$->child[1]->child[0] = $6;
		$5->curr_label = tree.label_sum++;
		$$->true_label = $5->curr_label;
	}
	// |IF LPRACE exp RPRACE LBRACE stmt RBRACE ELSE LBRACE code RBRACE
	// {
	// 	$$ = node->stmt_node(if_stmt);
	// 	$$->child[0] = $3;
	// 	$$->child[1] = $6;
	// 	$$->child[2] = $10;
	// 	$5->curr_label = tree.label_sum++;
	// 	$$->true_label = $5->curr_label;
	// }
	;

//定义while语句
while_stmt       
	:WHILE LPRACE exp RPRACE LBRACE code RBRACE
	{
		$$ = node->stmt_node(while_stmt);
		$$->curr_label = tree.label_sum++;
		$$->child[0] = $3;
		//$$->child[1] = $6;
		$$->child[1] = node->stmt_node(com_stmt);
		$$->child[1]->child[0] = $6;
		$6->curr_label = tree.label_sum++;
		$3->true_label = $6->curr_label;
	}
	;
	
//定义for语句
for_stmt 
	:FOR LPRACE asgn_stmt SIMICOLON exp SIMICOLON exp RPRACE LBRACE code RBRACE
	{
		$$ = node->stmt_node(for_stmt);
		$$->child[0] = $3;
		$$->child[1] = $5;
		$$->child[2] = $7;
		$$->child[3] = node->stmt_node(com_stmt);
		$$->child[3]->child[0] = $10;
		$10->curr_label = tree.label_sum++;
		$$->true_label = $10->curr_label;
	}
	|FOR LPRACE id SIMICOLON exp SIMICOLON exp RPRACE LBRACE code RBRACE
	{
		$$ = node->stmt_node(for_stmt);
		$$->child[0] = $3;
		$$->child[1] = $5;
		$$->child[2] = $7;
		$$->child[3]= $10;
		$$->child[3] = node->stmt_node(com_stmt);
		$$->child[3]->child[0] = $10;
		$10->curr_label = tree.label_sum++;
		$$->true_label = $10->curr_label;
	}
	;

//定义输入语句
input_stmt
	:CIN SHR id
	{
		$$ = node->stmt_node(input_stmt);
		$$->child[0] = $3;
	}
	|CIN SHR id SHR ENDL
	{
		$$ = node->stmt_node(input_stmt);
		$$->child[0] = $3;
		$$->attr.op = ENDL;
	}
	;

//定义输出语句
output_stmt
	:COUT SHL id
	{
		$$ = node->stmt_node(output_stmt);
		$$->child[0] = $3;
	}
	|COUT SHL id SHL ENDL
	{
		$$ = node->stmt_node(output_stmt);
		$$->child[0] = $3;
		$$->attr.op = ENDL;
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
			
			tree.print_tree(tree.root);
			tree.gen_dec(tree.root);
			tree.gen_code(tree.root);
			tree.gen_end();
		}
	}
	system("pause");
	return n;
}

