#include <iostream>
#include "ParseTree.h"

using namespace std;

Parse_tree tree;
Symbol_table table;

//遍历符号表，如果id在其中就得到id的位置，不在就填入
int Symbol_table::search_table(string id)
{
    for (int i = 0; i < table.number; i++)
    {
        if (strcmp(table.symbol_table[i], id) == 0)
            break;
    }
    if (i >= table.number)
    {
        strcpy_s(table.symbol[i], strlen(id) + 1, id); //数组长度不加1报错,"\0"
        table.number++;
    }
    return i;
}

int Parse_tree::set_node(string type,Node_attr attr,struct Tree_node[])
{
    Parse_tree *tree = new Parse_tree;

    tree.
}