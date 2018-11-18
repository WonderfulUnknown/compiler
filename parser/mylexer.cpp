/****************************************************************************
*                     U N R E G I S T E R E D   C O P Y
* 
* You are on day 59 of your 30 day trial period.
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
* Date: 11/18/18
* Time: 20:57:13
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
#include<iostream>
#include<string.h>

#include "myparser.h"
#include"ParseTree.h"

using namespace std;

//int number=0; //记录符号表中储存的个数
//char symbol_table[30][1000];//符号表
//double yyvalue=0;

#line 58 "mylexer.cpp"
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

#line 82 "mylexer.cpp"
}

/////////////////////////////////////////////////////////////////////////////
// destructor

YYLEXERNAME::~YYLEXERNAME()
{
#line 39 ".\\mylexer.l"

	// place any extra cleanup code here

#line 94 "mylexer.cpp"
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
#line 57 ".\\mylexer.l"

	// extract yylval for use later on in actions
	YYSTYPE YYFAR& yylval = *(YYSTYPE YYFAR*)yyparserptr->yylvalptr;

#line 165 "mylexer.cpp"
	yyreturnflg = yytrue;
	switch (action) {
	case 1:
		{
#line 64 ".\\mylexer.l"
/*do nothing*/
#line 172 "mylexer.cpp"
		}
		break;
	case 2:
		{
#line 66 ".\\mylexer.l"
return INT;
#line 179 "mylexer.cpp"
		}
		break;
	case 3:
		{
#line 68 ".\\mylexer.l"
return DOUBLE;
#line 186 "mylexer.cpp"
		}
		break;
	case 4:
		{
#line 69 ".\\mylexer.l"
return FLOAT;
#line 193 "mylexer.cpp"
		}
		break;
	case 5:
		{
#line 70 ".\\mylexer.l"
return CHAR;
#line 200 "mylexer.cpp"
		}
		break;
	case 6:
		{
#line 71 ".\\mylexer.l"
return BOOL;
#line 207 "mylexer.cpp"
		}
		break;
	case 7:
		{
#line 72 ".\\mylexer.l"
return VOID;
#line 214 "mylexer.cpp"
		}
		break;
	case 8:
		{
#line 75 ".\\mylexer.l"
return PLUS;
#line 221 "mylexer.cpp"
		}
		break;
	case 9:
		{
#line 76 ".\\mylexer.l"
return MINUS;
#line 228 "mylexer.cpp"
		}
		break;
	case 10:
		{
#line 77 ".\\mylexer.l"
return MUL;
#line 235 "mylexer.cpp"
		}
		break;
	case 11:
		{
#line 78 ".\\mylexer.l"
return DIV;
#line 242 "mylexer.cpp"
		}
		break;
	case 12:
		{
#line 79 ".\\mylexer.l"
return MOD;
#line 249 "mylexer.cpp"
		}
		break;
	case 13:
		{
#line 80 ".\\mylexer.l"
return INC;
#line 256 "mylexer.cpp"
		}
		break;
	case 14:
		{
#line 81 ".\\mylexer.l"
return DEC;
#line 263 "mylexer.cpp"
		}
		break;
	case 15:
		{
#line 82 ".\\mylexer.l"
return INAD;
#line 270 "mylexer.cpp"
		}
		break;
	case 16:
		{
#line 83 ".\\mylexer.l"
return IOR;
#line 277 "mylexer.cpp"
		}
		break;
	case 17:
		{
#line 84 ".\\mylexer.l"
return XOR;
#line 284 "mylexer.cpp"
		}
		break;
	case 18:
		{
#line 85 ".\\mylexer.l"
return NOT;
#line 291 "mylexer.cpp"
		}
		break;
	case 19:
		{
#line 86 ".\\mylexer.l"
return SHL;
#line 298 "mylexer.cpp"
		}
		break;
	case 20:
		{
#line 87 ".\\mylexer.l"
return SHR;
#line 305 "mylexer.cpp"
		}
		break;
	case 21:
		{
#line 90 ".\\mylexer.l"
return EQ;
#line 312 "mylexer.cpp"
		}
		break;
	case 22:
		{
#line 91 ".\\mylexer.l"
return GT;
#line 319 "mylexer.cpp"
		}
		break;
	case 23:
		{
#line 92 ".\\mylexer.l"
return LT;
#line 326 "mylexer.cpp"
		}
		break;
	case 24:
		{
#line 93 ".\\mylexer.l"
return GE;
#line 333 "mylexer.cpp"
		}
		break;
	case 25:
		{
#line 94 ".\\mylexer.l"
return LE;
#line 340 "mylexer.cpp"
		}
		break;
	case 26:
		{
#line 95 ".\\mylexer.l"
return NEQ;
#line 347 "mylexer.cpp"
		}
		break;
	case 27:
		{
#line 98 ".\\mylexer.l"
return AND;
#line 354 "mylexer.cpp"
		}
		break;
	case 28:
		{
#line 99 ".\\mylexer.l"
return OR;
#line 361 "mylexer.cpp"
		}
		break;
	case 29:
		{
#line 100 ".\\mylexer.l"
return OPPOSITE;
#line 368 "mylexer.cpp"
		}
		break;
	case 30:
		{
#line 103 ".\\mylexer.l"
return IF;
#line 375 "mylexer.cpp"
		}
		break;
	case 31:
		{
#line 104 ".\\mylexer.l"
return ELSE;
#line 382 "mylexer.cpp"
		}
		break;
	case 32:
		{
#line 105 ".\\mylexer.l"
return WHILE;
#line 389 "mylexer.cpp"
		}
		break;
	case 33:
		{
#line 106 ".\\mylexer.l"
return FOR;
#line 396 "mylexer.cpp"
		}
		break;
	case 34:
		{
#line 107 ".\\mylexer.l"
return BREAK;
#line 403 "mylexer.cpp"
		}
		break;
	case 35:
		{
#line 108 ".\\mylexer.l"
return RETURN;
#line 410 "mylexer.cpp"
		}
		break;
	case 36:
		{
#line 111 ".\\mylexer.l"
return MAIN;
#line 417 "mylexer.cpp"
		}
		break;
	case 37:
		{
#line 112 ".\\mylexer.l"
return ASSIGN;
#line 424 "mylexer.cpp"
		}
		break;
	case 38:
		{
#line 113 ".\\mylexer.l"
return LBRACE;
#line 431 "mylexer.cpp"
		}
		break;
	case 39:
		{
#line 114 ".\\mylexer.l"
return RBRACE;
#line 438 "mylexer.cpp"
		}
		break;
	case 40:
		{
#line 115 ".\\mylexer.l"
return LPRACE;
#line 445 "mylexer.cpp"
		}
		break;
	case 41:
		{
#line 116 ".\\mylexer.l"
return RPRACE;
#line 452 "mylexer.cpp"
		}
		break;
	case 42:
		{
#line 117 ".\\mylexer.l"
return LSBRACE;
#line 459 "mylexer.cpp"
		}
		break;
	case 43:
		{
#line 118 ".\\mylexer.l"
return RSBRACE;
#line 466 "mylexer.cpp"
		}
		break;
	case 44:
		{
#line 119 ".\\mylexer.l"
return COMMA;
#line 473 "mylexer.cpp"
		}
		break;
	case 45:
		{
#line 120 ".\\mylexer.l"
return SIMICOLON;
#line 480 "mylexer.cpp"
		}
		break;
	case 46:
		{
#line 121 ".\\mylexer.l"
return COLON;
#line 487 "mylexer.cpp"
		}
		break;
	case 47:
		{
#line 124 ".\\mylexer.l"
//yyvalue=set_table();
            //return ID;
            
#line 496 "mylexer.cpp"
		}
		break;
#line 127 ".\\mylexer.l"
            //yyleng=strlen(yytext)
#line 501 "mylexer.cpp"
	case 48:
		{
#line 128 ".\\mylexer.l"
yyvalue=atof(yytext);
            return NUMBER;
#line 507 "mylexer.cpp"
		}
		break;
	case 49:
		{
#line 131 ".\\mylexer.l"
return UNKNOWN;
#line 514 "mylexer.cpp"
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

	yytransitionmax = 251;
	static const yytransition_t YYNEARFAR YYBASED_CODE transition[] = {
		{ 0, 0 },
		{ 4, 1 },
		{ 4, 1 },
		{ 4, 4 },
		{ 4, 4 },
		{ 43, 15 },
		{ 0, 43 },
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
		{ 55, 29 },
		{ 50, 25 },
		{ 57, 30 },
		{ 56, 29 },
		{ 51, 25 },
		{ 45, 18 },
		{ 46, 18 },
		{ 4, 1 },
		{ 5, 1 },
		{ 4, 4 },
		{ 58, 30 },
		{ 41, 11 },
		{ 6, 1 },
		{ 7, 1 },
		{ 47, 19 },
		{ 8, 1 },
		{ 9, 1 },
		{ 10, 1 },
		{ 11, 1 },
		{ 12, 1 },
		{ 13, 1 },
		{ 0, 43 },
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
		{ 48, 20 },
		{ 49, 20 },
		{ 21, 1 },
		{ 21, 1 },
		{ 21, 1 },
		{ 21, 1 },
		{ 21, 1 },
		{ 21, 1 },
		{ 21, 1 },
		{ 21, 1 },
		{ 21, 1 },
		{ 21, 1 },
		{ 21, 1 },
		{ 21, 1 },
		{ 21, 1 },
		{ 21, 1 },
		{ 21, 1 },
		{ 21, 1 },
		{ 21, 1 },
		{ 21, 1 },
		{ 21, 1 },
		{ 21, 1 },
		{ 21, 1 },
		{ 21, 1 },
		{ 21, 1 },
		{ 21, 1 },
		{ 21, 1 },
		{ 21, 1 },
		{ 22, 1 },
		{ 59, 31 },
		{ 23, 1 },
		{ 24, 1 },
		{ 21, 1 },
		{ 60, 32 },
		{ 21, 1 },
		{ 25, 1 },
		{ 26, 1 },
		{ 27, 1 },
		{ 28, 1 },
		{ 29, 1 },
		{ 21, 1 },
		{ 21, 1 },
		{ 30, 1 },
		{ 21, 1 },
		{ 21, 1 },
		{ 21, 1 },
		{ 31, 1 },
		{ 21, 1 },
		{ 21, 1 },
		{ 21, 1 },
		{ 21, 1 },
		{ 32, 1 },
		{ 21, 1 },
		{ 21, 1 },
		{ 21, 1 },
		{ 33, 1 },
		{ 34, 1 },
		{ 21, 1 },
		{ 21, 1 },
		{ 21, 1 },
		{ 35, 1 },
		{ 36, 1 },
		{ 37, 1 },
		{ 38, 1 },
		{ 21, 95 },
		{ 21, 95 },
		{ 21, 95 },
		{ 21, 95 },
		{ 21, 95 },
		{ 21, 95 },
		{ 21, 95 },
		{ 21, 95 },
		{ 21, 95 },
		{ 21, 95 },
		{ 65, 44 },
		{ 61, 33 },
		{ 65, 44 },
		{ 62, 34 },
		{ 63, 36 },
		{ 39, 5 },
		{ 40, 7 },
		{ 21, 95 },
		{ 21, 95 },
		{ 21, 95 },
		{ 21, 95 },
		{ 21, 95 },
		{ 21, 95 },
		{ 21, 95 },
		{ 21, 95 },
		{ 21, 95 },
		{ 21, 95 },
		{ 21, 95 },
		{ 21, 95 },
		{ 21, 95 },
		{ 21, 95 },
		{ 21, 95 },
		{ 21, 95 },
		{ 21, 95 },
		{ 21, 95 },
		{ 21, 95 },
		{ 21, 95 },
		{ 21, 95 },
		{ 21, 95 },
		{ 21, 95 },
		{ 21, 95 },
		{ 21, 95 },
		{ 21, 95 },
		{ 67, 50 },
		{ 68, 51 },
		{ 69, 52 },
		{ 70, 53 },
		{ 21, 95 },
		{ 71, 54 },
		{ 21, 95 },
		{ 21, 95 },
		{ 21, 95 },
		{ 21, 95 },
		{ 21, 95 },
		{ 21, 95 },
		{ 21, 95 },
		{ 21, 95 },
		{ 21, 95 },
		{ 21, 95 },
		{ 21, 95 },
		{ 21, 95 },
		{ 21, 95 },
		{ 21, 95 },
		{ 21, 95 },
		{ 21, 95 },
		{ 21, 95 },
		{ 21, 95 },
		{ 21, 95 },
		{ 21, 95 },
		{ 21, 95 },
		{ 21, 95 },
		{ 21, 95 },
		{ 21, 95 },
		{ 21, 95 },
		{ 21, 95 },
		{ 42, 13 },
		{ 0, 13 },
		{ 64, 64 },
		{ 64, 64 },
		{ 64, 64 },
		{ 64, 64 },
		{ 64, 64 },
		{ 64, 64 },
		{ 64, 64 },
		{ 64, 64 },
		{ 64, 64 },
		{ 64, 64 },
		{ 66, 66 },
		{ 66, 66 },
		{ 66, 66 },
		{ 66, 66 },
		{ 66, 66 },
		{ 66, 66 },
		{ 66, 66 },
		{ 66, 66 },
		{ 66, 66 },
		{ 66, 66 },
		{ 72, 55 },
		{ 44, 64 },
		{ 0, 13 },
		{ 73, 56 },
		{ 74, 58 },
		{ 75, 59 },
		{ 76, 60 },
		{ 77, 61 },
		{ 78, 62 },
		{ 52, 26 },
		{ 53, 27 },
		{ 79, 67 },
		{ 80, 68 },
		{ 81, 69 },
		{ 82, 70 },
		{ 83, 71 },
		{ 84, 72 },
		{ 85, 75 },
		{ 86, 76 },
		{ 87, 77 },
		{ 88, 78 },
		{ 89, 80 },
		{ 90, 82 },
		{ 91, 84 },
		{ 92, 86 },
		{ 93, 88 },
		{ 94, 90 },
		{ 95, 92 },
		{ 54, 28 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 44, 64 },
		{ 0, 13 }
	};
	yytransition = transition;

	static const yystate_t YYNEARFAR YYBASED_CODE state[] = {
		{ 0, 0, 0 },
		{ -3, -8, 0 },
		{ 1, 0, 0 },
		{ 0, 0, 49 },
		{ 0, -6, 1 },
		{ 0, 73, 29 },
		{ 0, 0, 12 },
		{ 0, 97, 15 },
		{ 0, 0, 40 },
		{ 0, 0, 41 },
		{ 0, 0, 10 },
		{ 0, -15, 8 },
		{ 0, 0, 44 },
		{ 15, 149, 9 },
		{ 0, 0, 11 },
		{ 64, -41, 48 },
		{ 0, 0, 46 },
		{ 0, 0, 45 },
		{ 0, -38, 23 },
		{ 0, -30, 37 },
		{ 0, -6, 22 },
		{ 95, 0, 47 },
		{ 0, 0, 42 },
		{ 0, 0, 43 },
		{ 0, 0, 17 },
		{ 95, -93, 47 },
		{ 95, 121, 47 },
		{ 95, 115, 47 },
		{ 95, 136, 47 },
		{ 95, -91, 47 },
		{ 95, -83, 47 },
		{ 95, -13, 47 },
		{ 95, -13, 47 },
		{ 95, 19, 47 },
		{ 95, 28, 47 },
		{ 0, 0, 38 },
		{ 0, 9, 16 },
		{ 0, 0, 39 },
		{ 0, 0, 18 },
		{ 0, 0, 26 },
		{ 0, 0, 27 },
		{ 0, 0, 13 },
		{ 0, 0, 14 },
		{ 64, -63, 0 },
		{ 66, 86, 0 },
		{ 0, 0, 19 },
		{ 0, 0, 25 },
		{ 0, 0, 21 },
		{ 0, 0, 24 },
		{ 0, 0, 20 },
		{ 95, 51, 47 },
		{ 95, 62, 47 },
		{ 95, 67, 47 },
		{ 95, 48, 47 },
		{ 95, 52, 47 },
		{ 95, 105, 47 },
		{ 95, 105, 47 },
		{ 95, 0, 30 },
		{ 95, 104, 47 },
		{ 95, 116, 47 },
		{ 95, 106, 47 },
		{ 95, 118, 47 },
		{ 95, 119, 47 },
		{ 0, 0, 28 },
		{ 0, 148, 48 },
		{ 66, 0, 0 },
		{ 0, 158, 48 },
		{ 95, 119, 47 },
		{ 95, 131, 47 },
		{ 95, 115, 47 },
		{ 95, 132, 47 },
		{ 95, 130, 47 },
		{ 95, 135, 47 },
		{ 95, 0, 33 },
		{ 95, 0, 2 },
		{ 95, 123, 47 },
		{ 95, 117, 47 },
		{ 95, 135, 47 },
		{ 95, 128, 47 },
		{ 95, 0, 6 },
		{ 95, 130, 47 },
		{ 95, 0, 5 },
		{ 95, 130, 47 },
		{ 95, 0, 31 },
		{ 95, 123, 47 },
		{ 95, 0, 36 },
		{ 95, 126, 47 },
		{ 95, 0, 7 },
		{ 95, 140, 47 },
		{ 95, 0, 34 },
		{ 95, 141, 47 },
		{ 95, 0, 4 },
		{ 95, 133, 47 },
		{ 95, 0, 32 },
		{ 95, 0, 3 },
		{ 0, 71, 35 }
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
		0
	};
	yybackup = backup;
}
#line 133 ".\\mylexer.l"


/////////////////////////////////////////////////////////////////////////////
// programs section


