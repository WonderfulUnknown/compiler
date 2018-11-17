%{
/****************************************************************************
mylexer.l
ParserWizard generated Lex file.

Date: 2018年11月15日
****************************************************************************/
#include "myparser.h"
#include<iostream>
#include<stdio.h>
#include<string.h>
#include<cstring>
#include<fstream>
#include<stdlib.h> 
using namespace std;
int number=0; //记录符号表中储存的个数
char symbol_table[30][1000];//符号表
double yyvalue=0;
%}

/////////////////////////////////////////////////////////////////////////////
// declarations section

// lexical analyser name
%name mylexer

// class definition
{
	// place any extra class members here
   int set_table();
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


%%

/////////////////////////////////////////////////////////////////////////////
// rules section

%{
	// extract yylval for use later on in actions
	YYSTYPE YYFAR& yylval = *(YYSTYPE YYFAR*)yyparserptr->yylvalptr;
%}

// place your Lex rules here

delim       [ \t\n]
delims      {delim}+
digit       [0-9]
letter      [A-Za-z]
number      -?{digit}+(\.{digit}+)?([eE][-+]?{digit}+)?
id          ({letter}|[_])({letter}|{digit}|[_])*
annotation  ("/*"([^*"]*|".*"|\*+[^/])*\**"*/")|("//".*\n)

%%
{delims}  {/*do nothing*/}
//数据类型
int     {return INT;}
double 	{return DOUBLE;}
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

//关系运算符
"=="    {return EQ;}
">"     {return GT;}
"<"     {return LT;}
">="    {return GE;}
"<="    {return LE;}
"!="    {return NEQ;}

//逻辑运算符
"&"     {return INAD;}
"|"     {return IOR;}
"^"     {return XOR;}
"~"     {return NOT;}
"<<"    {return SHL;}
">>"    {return SHR;}
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
{id}        {yyvalue=set_table();
            return ID;}
            //yyleng=strlen(yytext)
{number}    {yyvalue=atof(yytext);
            return NUMBER;}
{annotation}{}
.           {return UNKNOWN;}

%%

/////////////////////////////////////////////////////////////////////////////
// programs section

