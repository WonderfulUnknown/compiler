/****************************************************************************
*                     U N R E G I S T E R E D   C O P Y
* 
* You are on day 66 of your 30 day trial period.
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
* Date: 11/25/18
* Time: 19:53:37
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

//using namespace std;

//#include "ParseTree.h"
#include "Tree.h"
// Parse_tree tree;
TreeNode node;
Symbol_table table;

#line 59 "mylexer.cpp"
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
#line 34 ".\\mylexer.l"

	// place any extra initialisation code here

#line 83 "mylexer.cpp"
}

/////////////////////////////////////////////////////////////////////////////
// destructor

YYLEXERNAME::~YYLEXERNAME()
{
#line 39 ".\\mylexer.l"

	// place any extra cleanup code here

#line 95 "mylexer.cpp"
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
#line 58 ".\\mylexer.l"

	// extract yylval for use later on in actions
	YYSTYPE YYFAR& yylval = *(YYSTYPE YYFAR*)yyparserptr->yylvalptr;
	yylval = &node;

#line 167 "mylexer.cpp"
	yyreturnflg = yytrue;
	switch (action) {
	case 1:
		{
#line 66 ".\\mylexer.l"

#line 174 "mylexer.cpp"
		}
		break;
	case 2:
		{
#line 67 ".\\mylexer.l"
table.all_line++;
#line 181 "mylexer.cpp"
		}
		break;
	case 3:
		{
#line 68 ".\\mylexer.l"

#line 188 "mylexer.cpp"
		}
		break;
	case 4:
		{
#line 73 ".\\mylexer.l"
return INT;
#line 195 "mylexer.cpp"
		}
		break;
	case 5:
		{
#line 74 ".\\mylexer.l"
return DOUBLE;
#line 202 "mylexer.cpp"
		}
		break;
	case 6:
		{
#line 75 ".\\mylexer.l"
return FLOAT;
#line 209 "mylexer.cpp"
		}
		break;
	case 7:
		{
#line 76 ".\\mylexer.l"
return CHAR;
#line 216 "mylexer.cpp"
		}
		break;
	case 8:
		{
#line 77 ".\\mylexer.l"
return BOOL;
#line 223 "mylexer.cpp"
		}
		break;
	case 9:
		{
#line 78 ".\\mylexer.l"
return VOID;
#line 230 "mylexer.cpp"
		}
		break;
	case 10:
		{
#line 81 ".\\mylexer.l"
return PLUS;
#line 237 "mylexer.cpp"
		}
		break;
	case 11:
		{
#line 82 ".\\mylexer.l"
return MINUS;
#line 244 "mylexer.cpp"
		}
		break;
	case 12:
		{
#line 83 ".\\mylexer.l"
return MUL;
#line 251 "mylexer.cpp"
		}
		break;
	case 13:
		{
#line 84 ".\\mylexer.l"
return DIV;
#line 258 "mylexer.cpp"
		}
		break;
	case 14:
		{
#line 85 ".\\mylexer.l"
return MOD;
#line 265 "mylexer.cpp"
		}
		break;
	case 15:
		{
#line 86 ".\\mylexer.l"
return INC;
#line 272 "mylexer.cpp"
		}
		break;
	case 16:
		{
#line 87 ".\\mylexer.l"
return DEC;
#line 279 "mylexer.cpp"
		}
		break;
	case 17:
		{
#line 88 ".\\mylexer.l"
return INAD;
#line 286 "mylexer.cpp"
		}
		break;
	case 18:
		{
#line 89 ".\\mylexer.l"
return IOR;
#line 293 "mylexer.cpp"
		}
		break;
	case 19:
		{
#line 90 ".\\mylexer.l"
return XOR;
#line 300 "mylexer.cpp"
		}
		break;
	case 20:
		{
#line 91 ".\\mylexer.l"
return NOT;
#line 307 "mylexer.cpp"
		}
		break;
	case 21:
		{
#line 92 ".\\mylexer.l"
return SHL;
#line 314 "mylexer.cpp"
		}
		break;
	case 22:
		{
#line 93 ".\\mylexer.l"
return SHR;
#line 321 "mylexer.cpp"
		}
		break;
	case 23:
		{
#line 96 ".\\mylexer.l"
return EQ;
#line 328 "mylexer.cpp"
		}
		break;
	case 24:
		{
#line 97 ".\\mylexer.l"
return GT;
#line 335 "mylexer.cpp"
		}
		break;
	case 25:
		{
#line 98 ".\\mylexer.l"
return LT;
#line 342 "mylexer.cpp"
		}
		break;
	case 26:
		{
#line 99 ".\\mylexer.l"
return GE;
#line 349 "mylexer.cpp"
		}
		break;
	case 27:
		{
#line 100 ".\\mylexer.l"
return LE;
#line 356 "mylexer.cpp"
		}
		break;
	case 28:
		{
#line 101 ".\\mylexer.l"
return NEQ;
#line 363 "mylexer.cpp"
		}
		break;
	case 29:
		{
#line 104 ".\\mylexer.l"
return AND;
#line 370 "mylexer.cpp"
		}
		break;
	case 30:
		{
#line 105 ".\\mylexer.l"
return OR;
#line 377 "mylexer.cpp"
		}
		break;
	case 31:
		{
#line 106 ".\\mylexer.l"
return OPPOSITE;
#line 384 "mylexer.cpp"
		}
		break;
	case 32:
		{
#line 109 ".\\mylexer.l"
return IF;
#line 391 "mylexer.cpp"
		}
		break;
	case 33:
		{
#line 110 ".\\mylexer.l"
return ELSE;
#line 398 "mylexer.cpp"
		}
		break;
	case 34:
		{
#line 111 ".\\mylexer.l"
return WHILE;
#line 405 "mylexer.cpp"
		}
		break;
	case 35:
		{
#line 112 ".\\mylexer.l"
return FOR;
#line 412 "mylexer.cpp"
		}
		break;
	case 36:
		{
#line 113 ".\\mylexer.l"
return BREAK;
#line 419 "mylexer.cpp"
		}
		break;
	case 37:
		{
#line 114 ".\\mylexer.l"
return RETURN;
#line 426 "mylexer.cpp"
		}
		break;
	case 38:
		{
#line 117 ".\\mylexer.l"
return MAIN;
#line 433 "mylexer.cpp"
		}
		break;
	case 39:
		{
#line 118 ".\\mylexer.l"
return ASSIGN;
#line 440 "mylexer.cpp"
		}
		break;
	case 40:
		{
#line 119 ".\\mylexer.l"
return LBRACE;
#line 447 "mylexer.cpp"
		}
		break;
	case 41:
		{
#line 120 ".\\mylexer.l"
return RBRACE;
#line 454 "mylexer.cpp"
		}
		break;
	case 42:
		{
#line 121 ".\\mylexer.l"
return LPRACE;
#line 461 "mylexer.cpp"
		}
		break;
	case 43:
		{
#line 122 ".\\mylexer.l"
return RPRACE;
#line 468 "mylexer.cpp"
		}
		break;
	case 44:
		{
#line 123 ".\\mylexer.l"
return LSBRACE;
#line 475 "mylexer.cpp"
		}
		break;
	case 45:
		{
#line 124 ".\\mylexer.l"
return RSBRACE;
#line 482 "mylexer.cpp"
		}
		break;
	case 46:
		{
#line 125 ".\\mylexer.l"
return COMMA;
#line 489 "mylexer.cpp"
		}
		break;
	case 47:
		{
#line 126 ".\\mylexer.l"
return SIMICOLON;
#line 496 "mylexer.cpp"
		}
		break;
	case 48:
		{
#line 127 ".\\mylexer.l"
return COLON;
#line 503 "mylexer.cpp"
		}
		break;
	case 49:
		{
#line 130 ".\\mylexer.l"

               //通过yylval将id在符号表中的地址传给.y
               //yylval = table.search_table(yytext);//不在符号表中就填入
               //yylval = &node;
			   yylval->address = table.search_table(yytext);
			   yylval->attr.name = (yytext);
            yylval->type.exp_type = id;
            return ID;
            
#line 518 "mylexer.cpp"
		}
		break;
#line 139 ".\\mylexer.l"
            
            //yyleng=strlen(yytext)
#line 524 "mylexer.cpp"
	case 50:
		{
#line 141 ".\\mylexer.l"
 
               yylval->attr.value = atof(yytext);
               yylval->type.exp_type = number;
               return NUMBER;
            
#line 533 "mylexer.cpp"
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
#line 149 ".\\mylexer.l"


/////////////////////////////////////////////////////////////////////////////
// programs section


