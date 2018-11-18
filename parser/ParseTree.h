#include"mylexer.h"
#include"myparser.h"

const int max_table = 1024;
const int max_child = 10;

enum stmt_type
{
    asgn_stmt = 0;
    dec_stmt;
    if_stmt;
    while_stmt;
    for_stmt;
    input_stmt;
    output_stmt;
}

enum expr_type
{
    ari_expr = 0;
    rel_expr;
    log_expr;
    expr;
    number;
}

enum op_type;
{
	PLUS = 0;
    MINUS;
    MUL;
    DIV; 
    MOD; 
    INC;
    DEC; 
    INAD; 
    IOR; 
    XOR; 
    NOT; 
    SHL; 
    SHR;
	EQ; 
    GT; 
    LT; 
    GE; 
    LE; 
    NEQ;
    AND; 
    OR; 
    OPPOSITE;
};

enum data_type
{
    Int = 0;
    Dobule;
    Float;
    Char;
    Bool;
    Void;
}

class Tree_node_attr
{
    //考虑是否赋初值
    int op_type;
    int value;
    char symbol;
    int address;//id在符号表中的位置
}

class Tree_node
{
    class Tree_node *child[max_child];
    int child_num;//孩子结点的数量
    class Tree_node_attr attr;
    // class Tree_node parent;
    // class Tree_node *brother;

    int stmt_type;
    int node_num;//结点对于整棵树的编号
    // int line;
}

class Tree
{
    class Tree_node root;
    int node_num;//树中结点数量

    void insert();
    void search();
    void gettype();
}

class Symbol_table
{
    char symbol[30][1000];//符号表
    int number=0; //记录符号表中储存的个数

   // int set_table;
   // int get_adr(string id);
   // int insert(string id)
    int search_table(string id);
    int get_num(char*);
}