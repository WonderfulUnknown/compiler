typedef enum
{
	stmt,
	exps
} NodeType;

typedef enum
{
	type_spe,
	asgn_stmt,
	dec_stmt,
	if_stmt,
	while_stmt,
	for_stmt,
	com_stmt,
	input_stmt,
	output_stmt
} StmtType;

typedef enum
{
	oper,
	number,
	id
} ExpType;

#define MAXCHILDREN 3
struct TreeNode
{
	struct TreeNode * child[MAXCHILDREN];
	struct TreeNode * brother;

	int lineno;//����ڴ����е��к�
	int node_num;//���������������ı��
	int data_type;//��¼����
	int temp_num;//��ʱ�����ı��
	int address;//��ʶ���ڷ��ű��е�λ��

	NodeType node_type;

	union
	{
		StmtType stmt_type;
		ExpType exp_type;
	} type;

	union NodeAttr
	{
		int op;
		double value;
		char name[50];
	} attr;

	union JmpAddress
	{
		char true_label[10];
		char false_label[10];
		char begin_label[10];
		char curr_label[10];//���ڿ����������תʱ����
	}label;

	TreeNode* stmt_node(StmtType type);
	TreeNode* exp_node(ExpType type);
};

struct ParseTree
{
	//���Ƿ��ű�������ʵ��
	char symbol_table[1000][50];//���ű�
	int id_type[1000];//���ڴ洢����id������

	int table_number = 0; //��¼���ű��д���ĸ���
	int all_line = 0;//��¼���������
	int all_node = 0;//��¼���н������
	int temp_sum = 0;//��¼��ʱ��������
	int label_sum = 0;//��¼��ǩ����

	TreeNode * root;//����ĸ����

	int search_table(char *id);//���&���
	//����﷨�������ͼ��
	void print_node(TreeNode *node);
	void print_tree(TreeNode *node);
	void print_child(TreeNode *node);
	void check_idtype(TreeNode *node);
	void check_node(TreeNode *node);
	void write_error(TreeNode *node, char error[]);
	//���ɻ�����
	void gen_header();
	void gen_dec(TreeNode *node);
	void gen_stmtcode(TreeNode *node);
	void gen_expcode(TreeNode *node);
	void gen_code(TreeNode *node);
};
