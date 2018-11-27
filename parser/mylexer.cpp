/****************************************************************************
*                     U N R E G I S T E R E D   C O P Y
* 
* You are on day 68 of your 30 day trial period.
* 
* This file was produced by an UNREGISTERED COPY of Parser Generator. It is
* for evaluation purposes only. If you continue to use Parser Generator 30
* days after installation then you are required to purchase a license. For
* more information see the online help or go to the Bumble-Bee Software
* homepage at:
* 
* http://www.bumblebeesoftware.com
* 
* This notice must remain present in the file. It cannot be removed.
****************************************************************************/

/****************************************************************************
* mylexer.cpp
* C++ source file generated from mylexer.l.
* 
* Date: 11/27/18
* Time: 21:51:10
* 
* ALex Version: 2.07
****************************************************************************/

#include <yyclex.h>

// namespaces
#ifdef YYSTDCPPLIB
using namespace std;
#endif
#ifdef YYNAMESPACE
using namespace yl;
#endif

#line 1 ".\\mylexer.l"

/****************************************************************************
mylexer.l
ParserWizard generated Lex file.

Date: 2018年11月15日
****************************************************************************/
// #include <iostream>
#include <string.h>

#include "myparser.h"
#include "Tree.h"

//全局变量一个工程下有一个即可，否则error link 2005

extern ParseTree tree;
extern string token;

#line 57 "mylexer.cpp"
// repeated because of possible precompiled header
#include <yyclex.h>

// namespaces
#ifdef YYSTDCPPLIB
using namespace std;
#endif
#ifdef YYNAMESPACE
using namespace yl;
#endif

#include ".\mylexer.h"

/////////////////////////////////////////////////////////////////////////////
// constructor

YYLEXERNAME::YYLEXERNAME()
{
	yytables();
#line 32 ".\\mylexer.l"

	// place any extra initialisation code here

#line 81 "mylexer.cpp"
}

/////////////////////////////////////////////////////////////////////////////
// destructor

YYLEXERNAME::~YYLEXERNAME()
{
#line 37 ".\\mylexer.l"

	// place any extra cleanup code here

#line 93 "mylexer.cpp"
}

#ifndef YYTEXT_SIZE
#define YYTEXT_SIZE 100
#endif
#ifndef YYUNPUT_SIZE
#define YYUNPUT_SIZE YYTEXT_SIZE
#endif
#ifndef YYTEXT_MAX
#define YYTEXT_MAX 0
#endif
#ifndef YYUNPUT_MAX
#define YYUNPUT_MAX YYTEXT_MAX
#endif

/****************************************************************************
* N O T E
* 
* If the compiler generates a YYLEXERNAME error then you have not declared
* the name of the lexical analyser. The easiest way to do this is to use a
* name declaration. This is placed in the declarations section of your Lex
* source file and is introduced with the %name keyword. For instance, the
* following name declaration declares the lexer mylexer:
* 
* %name mylexer
* 
* For more information see help.
****************************************************************************/

// backwards compatability with lex
#ifdef input
int YYLEXERNAME::yyinput()
{
	return input();
}
#else
#define input yyinput
#endif

#ifdef output
void YYLEXERNAME::yyoutput(int ch)
{
	output(ch);
}
#else
#define output yyoutput
#endif

#ifdef unput
void YYLEXERNAME::yyunput(int ch)
{
	unput(ch);
}
#else
#define unput yyunput
#endif

#ifndef YYNBORLANDWARN
#ifdef __BORLANDC__
#pragma warn -rch		// <warning: unreachable code> off
#endif
#endif

int YYLEXERNAME::yyaction(int action)
{
#line 56 ".\\mylexer.l"

	// extract yylval for use later on in actions
	YYSTYPE YYFAR& yylval = *(YYSTYPE YYFAR*)yyparserptr->yylvalptr;
	yylval = new TreeNode;

#line 165 "mylexer.cpp"
	yyreturnflg = yytrue;
	switch (action) {
	case 1:
		{
#line 64 ".\\mylexer.l"

#line 172 "mylexer.cpp"
		}
		break;
	case 2:
		{
#line 65 ".\\mylexer.l"
tree.all_line++;
#line 179 "mylexer.cpp"
		}
		break;
	case 3:
		{
#line 66 ".\\mylexer.l"

#line 186 "mylexer.cpp"
		}
		break;
	case 4:
		{
#line 71 ".\\mylexer.l"
return INT;
#line 193 "mylexer.cpp"
		}
		break;
	case 5:
		{
#line 72 ".\\mylexer.l"
return DOUBLE;
#line 200 "mylexer.cpp"
		}
		break;
	case 6:
		{
#line 73 ".\\mylexer.l"
return FLOAT;
#line 207 "mylexer.cpp"
		}
		break;
	case 7:
		{
#line 74 ".\\mylexer.l"
return CHAR;
#line 214 "mylexer.cpp"
		}
		break;
	case 8:
		{
#line 75 ".\\mylexer.l"
return BOOL;
#line 221 "mylexer.cpp"
		}
		break;
	case 9:
		{
#line 76 ".\\mylexer.l"
return VOID;
#line 228 "mylexer.cpp"
		}
		break;
	case 10:
		{
#line 79 ".\\mylexer.l"
		
   // yylval = yylval->exp_node(oper);
	//	yylval->attr.op = PLUS;
      return PLUS;
#line 238 "mylexer.cpp"
		}
		break;
	case 11:
		{
#line 83 ".\\mylexer.l"
return MINUS;
#line 245 "mylexer.cpp"
		}
		break;
	case 12:
		{
#line 84 ".\\mylexer.l"
return MUL;
#line 252 "mylexer.cpp"
		}
		break;
	case 13:
		{
#line 85 ".\\mylexer.l"
return DIV;
#line 259 "mylexer.cpp"
		}
		break;
	case 14:
		{
#line 86 ".\\mylexer.l"
return MOD;
#line 266 "mylexer.cpp"
		}
		break;
	case 15:
		{
#line 87 ".\\mylexer.l"
return INC;
#line 273 "mylexer.cpp"
		}
		break;
	case 16:
		{
#line 88 ".\\mylexer.l"
return DEC;
#line 280 "mylexer.cpp"
		}
		break;
	case 17:
		{
#line 89 ".\\mylexer.l"
return INAD;
#line 287 "mylexer.cpp"
		}
		break;
	case 18:
		{
#line 90 ".\\mylexer.l"
return IOR;
#line 294 "mylexer.cpp"
		}
		break;
	case 19:
		{
#line 91 ".\\mylexer.l"
return XOR;
#line 301 "mylexer.cpp"
		}
		break;
	case 20:
		{
#line 92 ".\\mylexer.l"
return NOT;
#line 308 "mylexer.cpp"
		}
		break;
	case 21:
		{
#line 93 ".\\mylexer.l"
return SHL;
#line 315 "mylexer.cpp"
		}
		break;
	case 22:
		{
#line 94 ".\\mylexer.l"
return SHR;
#line 322 "mylexer.cpp"
		}
		break;
	case 23:
		{
#line 97 ".\\mylexer.l"
return EQ;
#line 329 "mylexer.cpp"
		}
		break;
	case 24:
		{
#line 98 ".\\mylexer.l"
return GT;
#line 336 "mylexer.cpp"
		}
		break;
	case 25:
		{
#line 99 ".\\mylexer.l"
return LT;
#line 343 "mylexer.cpp"
		}
		break;
	case 26:
		{
#line 100 ".\\mylexer.l"
return GE;
#line 350 "mylexer.cpp"
		}
		break;
	case 27:
		{
#line 101 ".\\mylexer.l"
return LE;
#line 357 "mylexer.cpp"
		}
		break;
	case 28:
		{
#line 102 ".\\mylexer.l"
return NEQ;
#line 364 "mylexer.cpp"
		}
		break;
	case 29:
		{
#line 105 ".\\mylexer.l"
return AND;
#line 371 "mylexer.cpp"
		}
		break;
	case 30:
		{
#line 106 ".\\mylexer.l"
return OR;
#line 378 "mylexer.cpp"
		}
		break;
	case 31:
		{
#line 107 ".\\mylexer.l"
return OPPOSITE;
#line 385 "mylexer.cpp"
		}
		break;
	case 32:
		{
#line 110 ".\\mylexer.l"
return IF;
#line 392 "mylexer.cpp"
		}
		break;
	case 33:
		{
#line 111 ".\\mylexer.l"
return ELSE;
#line 399 "mylexer.cpp"
		}
		break;
	case 34:
		{
#line 112 ".\\mylexer.l"
return WHILE;
#line 406 "mylexer.cpp"
		}
		break;
	case 35:
		{
#line 113 ".\\mylexer.l"
return FOR;
#line 413 "mylexer.cpp"
		}
		break;
	case 36:
		{
#line 114 ".\\mylexer.l"
return BREAK;
#line 420 "mylexer.cpp"
		}
		break;
	case 37:
		{
#line 115 ".\\mylexer.l"
return RETURN;
#line 427 "mylexer.cpp"
		}
		break;
	case 38:
		{
#line 118 ".\\mylexer.l"
return MAIN;
#line 434 "mylexer.cpp"
		}
		break;
	case 39:
		{
#line 119 ".\\mylexer.l"
return ASSIGN;
#line 441 "mylexer.cpp"
		}
		break;
	case 40:
		{
#line 120 ".\\mylexer.l"
return LBRACE;
#line 448 "mylexer.cpp"
		}
		break;
	case 41:
		{
#line 121 ".\\mylexer.l"
return RBRACE;
#line 455 "mylexer.cpp"
		}
		break;
	case 42:
		{
#line 122 ".\\mylexer.l"
return LPRACE;
#line 462 "mylexer.cpp"
		}
		break;
	case 43:
		{
#line 123 ".\\mylexer.l"
return RPRACE;
#line 469 "mylexer.cpp"
		}
		break;
	case 44:
		{
#line 124 ".\\mylexer.l"
return LSBRACE;
#line 476 "mylexer.cpp"
		}
		break;
	case 45:
		{
#line 125 ".\\mylexer.l"
return RSBRACE;
#line 483 "mylexer.cpp"
		}
		break;
	case 46:
		{
#line 126 ".\\mylexer.l"
return COMMA;
#line 490 "mylexer.cpp"
		}
		break;
	case 47:
		{
#line 127 ".\\mylexer.l"
return SIMICOLON;
#line 497 "mylexer.cpp"
		}
		break;
	case 48:
		{
#line 128 ".\\mylexer.l"
return COLON;
#line 504 "mylexer.cpp"
		}
		break;
	case 49:
		{
#line 131 ".\\mylexer.l"

            yylval->address = -1;
			   yylval->address = tree.search_table(yytext);
			   //yylval->attr.name = (yytext);
            //yylval=new TreeNode;
            strcpy(yylval->attr.name,yytext);
            yylval->type.exp_type = id;
            return ID;
            
#line 519 "mylexer.cpp"
		}
		break;
#line 140 ".\\mylexer.l"
            
            //yyleng=strlen(yytext)
#line 525 "mylexer.cpp"
	case 50:
		{
#line 142 ".\\mylexer.l"
 
               yylval->attr.value = atof(yytext);
               // yylval->type.exp_type = number;
               return NUMBER;
            
#line 534 "mylexer.cpp"
		}
		break;
	default:
		yyassert(0);
		break;
	}
	yyreturnflg = yyfalse;
	return 0;
}

#ifndef YYNBORLANDWARN
#ifdef __BORLANDC__
#pragma warn .rch		// <warning: unreachable code> to the old state
#endif
#endif

void YYLEXERNAME::yytables()
{
	yystext_size = YYTEXT_SIZE;
	yysunput_size = YYUNPUT_SIZE;
	yytext_max = YYTEXT_MAX;
	yyunput_max = YYUNPUT_MAX;

	static const yymatch_t YYNEARFAR YYBASED_CODE match[] = {
		0
	};
	yymatch = match;

	yytransitionmax = 214;
	static const yytransition_t YYNEARFAR YYBASED_CODE transition[] = {
		{ 0, 0 },
		{ 3, 1 },
		{ 4, 1 },
		{ 42, 13 },
		{ 0, 13 },
		{ 69, 69 },
		{ 69, 69 },
		{ 69, 69 },
		{ 69, 69 },
		{ 69, 69 },
		{ 69, 69 },
		{ 69, 69 },
		{ 69, 69 },
		{ 69, 69 },
		{ 69, 69 },
		{ 3, 3 },
		{ 84, 66 },
		{ 43, 14 },
		{ 43, 84 },
		{ 62, 32 },
		{ 59, 30 },
		{ 68, 66 },
		{ 44, 14 },
		{ 0, 45 },
		{ 3, 1 },
		{ 5, 1 },
		{ 46, 69 },
		{ 0, 13 },
		{ 60, 30 },
		{ 6, 1 },
		{ 7, 1 },
		{ 95, 84 },
		{ 8, 1 },
		{ 9, 1 },
		{ 10, 1 },
		{ 11, 1 },
		{ 12, 1 },
		{ 13, 1 },
		{ 3, 3 },
		{ 14, 1 },
		{ 15, 1 },
		{ 15, 1 },
		{ 15, 1 },
		{ 15, 1 },
		{ 15, 1 },
		{ 15, 1 },
		{ 15, 1 },
		{ 15, 1 },
		{ 15, 1 },
		{ 15, 1 },
		{ 16, 1 },
		{ 17, 1 },
		{ 18, 1 },
		{ 19, 1 },
		{ 20, 1 },
		{ 0, 45 },
		{ 0, 95 },
		{ 52, 25 },
		{ 46, 69 },
		{ 0, 13 },
		{ 53, 25 },
		{ 70, 46 },
		{ 57, 29 },
		{ 70, 46 },
		{ 66, 95 },
		{ 58, 29 },
		{ 63, 33 },
		{ 45, 15 },
		{ 67, 95 },
		{ 15, 15 },
		{ 15, 15 },
		{ 15, 15 },
		{ 15, 15 },
		{ 15, 15 },
		{ 15, 15 },
		{ 15, 15 },
		{ 15, 15 },
		{ 15, 15 },
		{ 15, 15 },
		{ 50, 20 },
		{ 51, 20 },
		{ 47, 18 },
		{ 48, 18 },
		{ 22, 1 },
		{ 64, 34 },
		{ 23, 1 },
		{ 24, 1 },
		{ 65, 36 },
		{ 68, 44 },
		{ 40, 7 },
		{ 25, 1 },
		{ 26, 1 },
		{ 27, 1 },
		{ 28, 1 },
		{ 29, 1 },
		{ 41, 11 },
		{ 72, 52 },
		{ 30, 1 },
		{ 73, 53 },
		{ 74, 54 },
		{ 75, 55 },
		{ 31, 1 },
		{ 76, 56 },
		{ 77, 57 },
		{ 78, 58 },
		{ 79, 60 },
		{ 32, 1 },
		{ 80, 61 },
		{ 81, 62 },
		{ 82, 63 },
		{ 33, 1 },
		{ 34, 1 },
		{ 83, 64 },
		{ 54, 26 },
		{ 84, 67 },
		{ 35, 1 },
		{ 36, 1 },
		{ 37, 1 },
		{ 38, 1 },
		{ 21, 102 },
		{ 21, 102 },
		{ 21, 102 },
		{ 21, 102 },
		{ 21, 102 },
		{ 21, 102 },
		{ 21, 102 },
		{ 21, 102 },
		{ 21, 102 },
		{ 21, 102 },
		{ 55, 27 },
		{ 56, 28 },
		{ 85, 72 },
		{ 86, 73 },
		{ 87, 74 },
		{ 88, 75 },
		{ 89, 76 },
		{ 21, 102 },
		{ 21, 102 },
		{ 21, 102 },
		{ 21, 102 },
		{ 21, 102 },
		{ 21, 102 },
		{ 21, 102 },
		{ 21, 102 },
		{ 21, 102 },
		{ 21, 102 },
		{ 21, 102 },
		{ 21, 102 },
		{ 21, 102 },
		{ 21, 102 },
		{ 21, 102 },
		{ 21, 102 },
		{ 21, 102 },
		{ 21, 102 },
		{ 21, 102 },
		{ 21, 102 },
		{ 21, 102 },
		{ 21, 102 },
		{ 21, 102 },
		{ 21, 102 },
		{ 21, 102 },
		{ 21, 102 },
		{ 90, 77 },
		{ 91, 80 },
		{ 92, 81 },
		{ 93, 82 },
		{ 21, 102 },
		{ 94, 83 },
		{ 21, 102 },
		{ 21, 102 },
		{ 21, 102 },
		{ 21, 102 },
		{ 21, 102 },
		{ 21, 102 },
		{ 21, 102 },
		{ 21, 102 },
		{ 21, 102 },
		{ 21, 102 },
		{ 21, 102 },
		{ 21, 102 },
		{ 21, 102 },
		{ 21, 102 },
		{ 21, 102 },
		{ 21, 102 },
		{ 21, 102 },
		{ 21, 102 },
		{ 21, 102 },
		{ 21, 102 },
		{ 21, 102 },
		{ 21, 102 },
		{ 21, 102 },
		{ 21, 102 },
		{ 21, 102 },
		{ 21, 102 },
		{ 71, 71 },
		{ 71, 71 },
		{ 71, 71 },
		{ 71, 71 },
		{ 71, 71 },
		{ 71, 71 },
		{ 71, 71 },
		{ 71, 71 },
		{ 71, 71 },
		{ 71, 71 },
		{ 39, 5 },
		{ 96, 86 },
		{ 97, 88 },
		{ 98, 90 },
		{ 99, 92 },
		{ 100, 94 },
		{ 49, 19 },
		{ 101, 97 },
		{ 102, 99 },
		{ 61, 31 }
	};
	yytransition = transition;

	static const yystate_t YYNEARFAR YYBASED_CODE state[] = {
		{ 0, 0, 0 },
		{ 102, -8, 0 },
		{ 1, 0, 0 },
		{ 0, 6, 1 },
		{ 0, 0, 2 },
		{ 0, 143, 31 },
		{ 0, 0, 14 },
		{ 0, 51, 17 },
		{ 0, 0, 42 },
		{ 0, 0, 43 },
		{ 0, 0, 12 },
		{ 0, 52, 10 },
		{ 0, 0, 46 },
		{ 15, -42, 11 },
		{ 0, -25, 13 },
		{ 69, 21, 50 },
		{ 0, 0, 48 },
		{ 0, 0, 47 },
		{ 0, 21, 25 },
		{ 0, 149, 39 },
		{ 0, 18, 24 },
		{ 102, 0, 49 },
		{ 0, 0, 44 },
		{ 0, 0, 45 },
		{ 0, 0, 19 },
		{ 102, -54, 49 },
		{ 102, 9, 49 },
		{ 102, 18, 49 },
		{ 102, 22, 49 },
		{ 102, -46, 49 },
		{ 102, -82, 49 },
		{ 102, 116, 49 },
		{ 102, -82, 49 },
		{ 102, -45, 49 },
		{ 102, -20, 49 },
		{ 0, 0, 40 },
		{ 0, -37, 18 },
		{ 0, 0, 41 },
		{ 0, 0, 20 },
		{ 0, 0, 28 },
		{ 0, 0, 29 },
		{ 0, 0, 15 },
		{ 0, 0, 16 },
		{ 95, 0, 0 },
		{ -44, 78, 0 },
		{ 69, -46, 0 },
		{ 71, 18, 0 },
		{ 0, 0, 21 },
		{ 0, 0, 27 },
		{ 0, 0, 23 },
		{ 0, 0, 26 },
		{ 0, 0, 22 },
		{ 102, -15, 49 },
		{ 102, -3, 49 },
		{ 102, 2, 49 },
		{ 102, -17, 49 },
		{ 102, -13, 49 },
		{ 102, -8, 49 },
		{ 102, -10, 49 },
		{ 102, 0, 32 },
		{ 102, -11, 49 },
		{ 102, 2, 49 },
		{ 102, -8, 49 },
		{ 102, 4, 49 },
		{ 102, 7, 49 },
		{ 0, 0, 30 },
		{ -43, -26, 0 },
		{ 95, 72, 0 },
		{ 0, 0, 3 },
		{ 0, -43, 50 },
		{ 71, 0, 0 },
		{ 0, 146, 50 },
		{ 102, 23, 49 },
		{ 102, 35, 49 },
		{ 102, 19, 49 },
		{ 102, 36, 49 },
		{ 102, 34, 49 },
		{ 102, 65, 49 },
		{ 102, 0, 35 },
		{ 102, 0, 4 },
		{ 102, 53, 49 },
		{ 102, 47, 49 },
		{ 102, 65, 49 },
		{ 102, 59, 49 },
		{ 67, -16, 0 },
		{ 102, 0, 8 },
		{ 102, 98, 49 },
		{ 102, 0, 7 },
		{ 102, 98, 49 },
		{ 102, 0, 33 },
		{ 102, 91, 49 },
		{ 102, 0, 38 },
		{ 102, 94, 49 },
		{ 102, 0, 9 },
		{ 102, 108, 49 },
		{ -43, 22, 3 },
		{ 102, 0, 36 },
		{ 102, 110, 49 },
		{ 102, 0, 6 },
		{ 102, 102, 49 },
		{ 102, 0, 34 },
		{ 102, 0, 5 },
		{ 0, 71, 37 }
	};
	yystate = state;

	static const yybackup_t YYNEARFAR YYBASED_CODE backup[] = {
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0
	};
	yybackup = backup;
}
#line 150 ".\\mylexer.l"


/////////////////////////////////////////////////////////////////////////////
// programs section


