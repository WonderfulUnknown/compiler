%{
/****************************************************************************
mylexer.l
ParserWizard generated Lex file.

Date: 2018年11月15日
****************************************************************************/
// #include <iostream>
#include <string.h>

#include "myparser.h"

//using namespace std;

//#include "ParseTree.h"
#include "Tree.h"
// Parse_tree tree;
TreeNode node;
Symbol_table table;
%}

/////////////////////////////////////////////////////////////////////////////
// declarations section

// lexical analyser name
%name mylexer

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

// place any declarations here

delim       [ \t]
delims      {delim}+
newline     \n
digit       [0-9]
letter      [A-Za-z]
number      -?{digit}+(\.{digit}+)?([eE][-+]?{digit}+)?
id          ({letter}|[_])({letter}|{digit}|[_])*
annotation  ("/*"([^*"]*|".*"|\*+[^/])*\**"*/")|("//".*\n)
%%

/////////////////////////////////////////////////////////////////////////////
// rules section

%{
	// extract yylval for use later on in actions
	YYSTYPE YYFAR& yylval = *(YYSTYPE YYFAR*)yyparserptr->yylvalptr;
	yylval = &node;
%}

// place your Lex rules here

{delims}		   {}
{newline}      {table.all_line++;}
{annotation}	{}

//myparser.h 中自动给出相应的宏定义

//数据类型
int     {return INT;}
double  {return DOUBLE;}
float   {return FLOAT;}
char    {return CHAR;}
bool    {return BOOL;}
void    {return VOID;}

//算术运算
"+"     {return PLUS;}
"-"     {return MINUS;}
"*"     {return MUL;}
"/"     {return DIV;}
"%"     {return MOD;}
"++"    {return INC;}
"--"    {return DEC;}
"&"     {return INAD;}
"|"     {return IOR;}
"^"     {return XOR;}
"~"     {return NOT;}
"<<"    {return SHL;}
">>"    {return SHR;}

//关系运算符
"=="    {return EQ;}
">"     {return GT;}
"<"     {return LT;}
">="    {return GE;}
"<="    {return LE;}
"!="    {return NEQ;}

//逻辑运算符
"&&"    {return AND;}
"||"    {return OR;}
"!"     {return OPPOSITE;}

//语句
if      {return IF;}
else    {return ELSE;}
while   {return WHILE;}
for     {return FOR;}
break   {return BREAK;}
return  {return RETURN;}

//其他符号
main    {return MAIN;}
"="     {return ASSIGN;}
"{"     {return LBRACE;}
"}"     {return RBRACE;}
"("     {return LPRACE;}
")"     {return RPRACE;}
"["     {return LSBRACE;}
"]"     {return RSBRACE;}
","     {return COMMA;}
";"     {return SIMICOLON;}
":"     {return COLON;}

//其他 
{id}        {
               //通过yylval将id在符号表中的地址传给.y
               //yylval = table.search_table(yytext);//不在符号表中就填入
               //yylval = &node;
			   yylval->address = table.search_table(yytext);
			   yylval->attr.name = (yytext);
            yylval->type.exp_type = id;
            return ID;
            }
            
            //yyleng=strlen(yytext)
{number}    { 
               yylval->attr.value = atof(yytext);
               yylval->type.exp_type = number;
               return NUMBER;
            }

// .          {return UNKNOWN;}

%%

/////////////////////////////////////////////////////////////////////////////
// programs section

