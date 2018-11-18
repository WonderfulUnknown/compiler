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
* myparser.cpp
* C++ source file generated from myparser.y.
* 
* Date: 11/18/18
* Time: 21:02:07
* 
* AYACC Version: 2.07
****************************************************************************/

#include <yycpars.h>

// namespaces
#ifdef YYSTDCPPLIB
using namespace std;
#endif
#ifdef YYNAMESPACE
using namespace yl;
#endif

#line 1 ".\\myparser.y"

/****************************************************************************
myparser.y
ParserWizard generated YACC file.

Date: 2018Äê11ÔÂ15ÈÕ
****************************************************************************/
#include <iostream>
#include <string.h>

#include "mylexer.h"
#include"ParseTree.h"

using namespace std;

#line 54 "myparser.cpp"
// repeated because of possible precompiled header
#include <yycpars.h>

// namespaces
#ifdef YYSTDCPPLIB
using namespace std;
#endif
#ifdef YYNAMESPACE
using namespace yl;
#endif

#include ".\myparser.h"

/////////////////////////////////////////////////////////////////////////////
// constructor

YYPARSERNAME::YYPARSERNAME()
{
	yytables();
#line 29 ".\\myparser.y"

	// place any extra initialisation code here

#line 78 "myparser.cpp"
}

/////////////////////////////////////////////////////////////////////////////
// destructor

YYPARSERNAME::~YYPARSERNAME()
{
	// allows virtual functions to be called properly for correct cleanup
	yydestroy();
#line 34 ".\\myparser.y"

	// place any extra cleanup code here

#line 92 "myparser.cpp"
}

#ifndef YYSTYPE
#define YYSTYPE int
#endif
#ifndef YYSTACK_SIZE
#define YYSTACK_SIZE 100
#endif
#ifndef YYSTACK_MAX
#define YYSTACK_MAX 0
#endif

/****************************************************************************
* N O T E
* 
* If the compiler generates a YYPARSERNAME error then you have not declared
* the name of the parser. The easiest way to do this is to use a name
* declaration. This is placed in the declarations section of your YACC
* source file and is introduced with the %name keyword. For instance, the
* following name declaration declares the parser myparser:
* 
* %name myparser
* 
* For more information see help.
****************************************************************************/

// yyattribute
#ifdef YYDEBUG
void YYFAR* YYPARSERNAME::yyattribute1(int index) const
{
	YYSTYPE YYFAR* p = &((YYSTYPE YYFAR*)yyattributestackptr)[yytop + index];
	return p;
}
#define yyattribute(index) (*(YYSTYPE YYFAR*)yyattribute1(index))
#else
#define yyattribute(index) (((YYSTYPE YYFAR*)yyattributestackptr)[yytop + (index)])
#endif

void YYPARSERNAME::yystacktoval(int index)
{
	yyassert(index >= 0);
	*(YYSTYPE YYFAR*)yyvalptr = ((YYSTYPE YYFAR*)yyattributestackptr)[index];
}

void YYPARSERNAME::yyvaltostack(int index)
{
	yyassert(index >= 0);
	((YYSTYPE YYFAR*)yyattributestackptr)[index] = *(YYSTYPE YYFAR*)yyvalptr;
}

void YYPARSERNAME::yylvaltoval()
{
	*(YYSTYPE YYFAR*)yyvalptr = *(YYSTYPE YYFAR*)yylvalptr;
}

void YYPARSERNAME::yyvaltolval()
{
	*(YYSTYPE YYFAR*)yylvalptr = *(YYSTYPE YYFAR*)yyvalptr;
}

void YYPARSERNAME::yylvaltostack(int index)
{
	yyassert(index >= 0);
	((YYSTYPE YYFAR*)yyattributestackptr)[index] = *(YYSTYPE YYFAR*)yylvalptr;
}

void YYFAR* YYPARSERNAME::yynewattribute(int count)
{
	yyassert(count >= 0);
	return new YYFAR YYSTYPE[count];
}

void YYPARSERNAME::yydeleteattribute(void YYFAR* attribute)
{
	delete[] (YYSTYPE YYFAR*)attribute;
}

void YYPARSERNAME::yycopyattribute(void YYFAR* dest, const void YYFAR* src, int count)
{
	for (int i = 0; i < count; i++) {
		((YYSTYPE YYFAR*)dest)[i] = ((YYSTYPE YYFAR*)src)[i];
	}
}

#ifdef YYDEBUG
void YYPARSERNAME::yyinitdebug(void YYFAR** p, int count) const
{
	yyassert(p != NULL);
	yyassert(count >= 1);

	YYSTYPE YYFAR** p1 = (YYSTYPE YYFAR**)p;
	for (int i = 0; i < count; i++) {
		p1[i] = &((YYSTYPE YYFAR*)yyattributestackptr)[yytop + i - (count - 1)];
	}
}
#endif

void YYPARSERNAME::yyaction(int action)
{
	switch (action) {
	case 0:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[7];
			yyinitdebug((void YYFAR**)yya, 7);
#endif
			{
#line 81 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(5 - 6);
#line 202 "myparser.cpp"
			}
		}
		break;
	case 1:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[8];
			yyinitdebug((void YYFAR**)yya, 8);
#endif
			{
#line 82 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(6 - 7);
#line 215 "myparser.cpp"
			}
		}
		break;
	case 2:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[8];
			yyinitdebug((void YYFAR**)yya, 8);
#endif
			{
#line 83 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(6 - 7);
#line 228 "myparser.cpp"
			}
		}
		break;
	case 3:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[9];
			yyinitdebug((void YYFAR**)yya, 9);
#endif
			{
#line 84 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(7 - 8);
#line 241 "myparser.cpp"
			}
		}
		break;
	case 4:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[8];
			yyinitdebug((void YYFAR**)yya, 8);
#endif
			{
#line 85 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(6 - 7);
#line 254 "myparser.cpp"
			}
		}
		break;
	case 5:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[9];
			yyinitdebug((void YYFAR**)yya, 9);
#endif
			{
#line 86 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(7 - 8);
#line 267 "myparser.cpp"
			}
		}
		break;
	case 6:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 91 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(1 - 1);
#line 280 "myparser.cpp"
			}
		}
		break;
	case 7:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 92 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(1 - 2);
#line 293 "myparser.cpp"
			}
		}
		break;
	case 8:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 97 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(1 - 2);
#line 306 "myparser.cpp"
			}
		}
		break;
	case 9:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 98 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(1 - 2);
#line 319 "myparser.cpp"
			}
		}
		break;
	case 10:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 99 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(1 - 2);
#line 332 "myparser.cpp"
			}
		}
		break;
	case 11:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 100 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(1 - 2);
#line 345 "myparser.cpp"
			}
		}
		break;
	case 12:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 101 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(1 - 2);
#line 358 "myparser.cpp"
			}
		}
		break;
	case 13:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 102 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(1 - 2);
#line 371 "myparser.cpp"
			}
		}
		break;
	case 14:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 142 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(2 - 3);
#line 384 "myparser.cpp"
			}
		}
		break;
	case 15:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 143 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(1 - 1);
#line 397 "myparser.cpp"
			}
		}
		break;
	default:
		yyassert(0);
		break;
	}
}

void YYPARSERNAME::yytables()
{
	yyattribute_size = sizeof(YYSTYPE);
	yysstack_size = YYSTACK_SIZE;
	yystack_max = YYSTACK_MAX;

#ifdef YYDEBUG
	static const yysymbol_t YYNEARFAR YYBASED_CODE symbol[] = {
		{ "$end", 0 },
		{ "error", 256 },
		{ "INT", 257 },
		{ "DOUBLE", 258 },
		{ "FLOAT", 259 },
		{ "CHAR", 260 },
		{ "BOOL", 261 },
		{ "VOID", 262 },
		{ "PLUS", 263 },
		{ "MINUS", 264 },
		{ "MUL", 265 },
		{ "DIV", 266 },
		{ "MOD", 267 },
		{ "INC", 268 },
		{ "DEC", 269 },
		{ "INAD", 270 },
		{ "IOR", 271 },
		{ "XOR", 272 },
		{ "NOT", 273 },
		{ "SHL", 274 },
		{ "SHR", 275 },
		{ "EQ", 276 },
		{ "GT", 277 },
		{ "LT", 278 },
		{ "GE", 279 },
		{ "LE", 280 },
		{ "NEQ", 281 },
		{ "AND", 282 },
		{ "OR", 283 },
		{ "OPPOSITE", 284 },
		{ "IF", 285 },
		{ "ELSE", 286 },
		{ "WHILE", 287 },
		{ "FOR", 288 },
		{ "MAIN", 291 },
		{ "ASSIGN", 292 },
		{ "LBRACE", 293 },
		{ "RBRACE", 294 },
		{ "LPRACE", 295 },
		{ "RPRACE", 296 },
		{ "COMMA", 299 },
		{ "SIMICOLON", 300 },
		{ "ID", 302 },
		{ "NUMBER", 303 },
		{ NULL, 0 }
	};
	yysymbol = symbol;

	static const char* const YYNEARFAR YYBASED_CODE rule[] = {
		"$accept: c_program",
		"c_program: MAIN LPRACE RPRACE LBRACE code RBRACE",
		"c_program: MAIN LPRACE VOID RPRACE LBRACE code RBRACE",
		"c_program: VOID MAIN LPRACE RPRACE LBRACE code RBRACE",
		"c_program: VOID MAIN LPRACE VOID RPRACE LBRACE code RBRACE",
		"c_program: INT MAIN LPRACE RPRACE LBRACE code RBRACE",
		"c_program: INT MAIN LPRACE VOID RPRACE LBRACE code RBRACE",
		"code: stmt",
		"code: code stmt",
		"stmt: expr SIMICOLON",
		"stmt: asgn_stmt SIMICOLON",
		"stmt: dec_stmt SIMICOLON",
		"stmt: if_stmt SIMICOLON",
		"stmt: while_stmt SIMICOLON",
		"stmt: for_stmt SIMICOLON",
		"type: INT",
		"type: DOUBLE",
		"type: FLOAT",
		"type: CHAR",
		"type: BOOL",
		"type: VOID",
		"ari_op: PLUS",
		"ari_op: MINUS",
		"ari_op: MUL",
		"ari_op: DIV",
		"ari_op: MOD",
		"ari_op: INC",
		"ari_op: DEC",
		"ari_op: INAD",
		"ari_op: IOR",
		"ari_op: XOR",
		"ari_op: NOT",
		"ari_op: SHL",
		"ari_op: SHR",
		"rel_op: EQ",
		"rel_op: GT",
		"rel_op: LT",
		"rel_op: GE",
		"rel_op: LE",
		"rel_op: NEQ",
		"log_op: AND",
		"log_op: OR",
		"log_op: OPPOSITE",
		"id: ID",
		"id: ID COMMA id",
		"id: asgn_stmt",
		"id: asgn_stmt COMMA id",
		"expr: expr ari_op expr",
		"expr: expr rel_op expr",
		"expr: expr log_op expr",
		"expr: LPRACE expr RPRACE",
		"expr: NUMBER",
		"asgn_stmt: id ASSIGN expr",
		"dec_stmt: type id SIMICOLON",
		"if_stmt: IF LPRACE expr RPRACE LBRACE stmt RBRACE ELSE LBRACE stmt RBRACE",
		"if_stmt: IF LPRACE expr RPRACE LBRACE stmt RBRACE",
		"if_stmt: IF LPRACE id RPRACE LBRACE stmt RBRACE ELSE LBRACE stmt RBRACE",
		"if_stmt: IF LPRACE id RPRACE LBRACE stmt RBRACE",
		"while_stmt: WHILE LPRACE expr RPRACE LBRACE stmt RBRACE",
		"while_stmt: WHILE LPRACE id RPRACE LBRACE stmt RBRACE",
		"for_stmt: FOR LPRACE for_1 SIMICOLON expr SIMICOLON expr RPRACE LBRACE stmt RBRACE",
		"for_1:",
		"for_1: asgn_stmt",
		"for_1: id"
	};
	yyrule = rule;
#endif

	static const yyreduction_t YYNEARFAR YYBASED_CODE reduction[] = {
		{ 0, 1, -1 },
		{ 1, 6, 0 },
		{ 1, 7, 1 },
		{ 1, 7, 2 },
		{ 1, 8, 3 },
		{ 1, 7, 4 },
		{ 1, 8, 5 },
		{ 2, 1, 6 },
		{ 2, 2, 7 },
		{ 3, 2, 8 },
		{ 3, 2, 9 },
		{ 3, 2, 10 },
		{ 3, 2, 11 },
		{ 3, 2, 12 },
		{ 3, 2, 13 },
		{ 4, 1, -1 },
		{ 4, 1, -1 },
		{ 4, 1, -1 },
		{ 4, 1, -1 },
		{ 4, 1, -1 },
		{ 4, 1, -1 },
		{ 5, 1, -1 },
		{ 5, 1, -1 },
		{ 5, 1, -1 },
		{ 5, 1, -1 },
		{ 5, 1, -1 },
		{ 5, 1, -1 },
		{ 5, 1, -1 },
		{ 5, 1, -1 },
		{ 5, 1, -1 },
		{ 5, 1, -1 },
		{ 5, 1, -1 },
		{ 5, 1, -1 },
		{ 5, 1, -1 },
		{ 6, 1, -1 },
		{ 6, 1, -1 },
		{ 6, 1, -1 },
		{ 6, 1, -1 },
		{ 6, 1, -1 },
		{ 6, 1, -1 },
		{ 7, 1, -1 },
		{ 7, 1, -1 },
		{ 7, 1, -1 },
		{ 8, 1, -1 },
		{ 8, 3, -1 },
		{ 8, 1, -1 },
		{ 8, 3, -1 },
		{ 9, 3, -1 },
		{ 9, 3, -1 },
		{ 9, 3, -1 },
		{ 9, 3, 14 },
		{ 9, 1, 15 },
		{ 10, 3, -1 },
		{ 11, 3, -1 },
		{ 12, 11, -1 },
		{ 12, 7, -1 },
		{ 12, 11, -1 },
		{ 12, 7, -1 },
		{ 13, 7, -1 },
		{ 13, 7, -1 },
		{ 14, 11, -1 },
		{ 15, 0, -1 },
		{ 15, 1, -1 },
		{ 15, 1, -1 }
	};
	yyreduction = reduction;

	yytokenaction_size = 197;

	static const yytokenaction_t YYNEARFAR YYBASED_CODE tokenaction[] = {
		{ 133, YYAT_SHIFT, 62 },
		{ 133, YYAT_SHIFT, 63 },
		{ 133, YYAT_SHIFT, 64 },
		{ 133, YYAT_SHIFT, 65 },
		{ 133, YYAT_SHIFT, 66 },
		{ 133, YYAT_SHIFT, 67 },
		{ 133, YYAT_SHIFT, 68 },
		{ 133, YYAT_SHIFT, 69 },
		{ 133, YYAT_SHIFT, 70 },
		{ 133, YYAT_SHIFT, 71 },
		{ 133, YYAT_SHIFT, 72 },
		{ 133, YYAT_SHIFT, 73 },
		{ 133, YYAT_SHIFT, 74 },
		{ 133, YYAT_SHIFT, 75 },
		{ 133, YYAT_SHIFT, 76 },
		{ 133, YYAT_SHIFT, 77 },
		{ 133, YYAT_SHIFT, 78 },
		{ 133, YYAT_SHIFT, 79 },
		{ 133, YYAT_SHIFT, 80 },
		{ 133, YYAT_SHIFT, 81 },
		{ 133, YYAT_SHIFT, 82 },
		{ 133, YYAT_SHIFT, 83 },
		{ 128, YYAT_SHIFT, 32 },
		{ 123, YYAT_ERROR, 0 },
		{ 42, YYAT_SHIFT, 88 },
		{ 42, YYAT_SHIFT, 89 },
		{ 142, YYAT_SHIFT, 145 },
		{ 123, YYAT_SHIFT, 128 },
		{ 141, YYAT_SHIFT, 144 },
		{ 140, YYAT_SHIFT, 143 },
		{ 128, YYAT_SHIFT, 34 },
		{ 136, YYAT_SHIFT, 139 },
		{ 135, YYAT_SHIFT, 138 },
		{ 133, YYAT_SHIFT, 136 },
		{ 111, YYAT_SHIFT, 62 },
		{ 111, YYAT_SHIFT, 63 },
		{ 111, YYAT_SHIFT, 64 },
		{ 111, YYAT_SHIFT, 65 },
		{ 111, YYAT_SHIFT, 66 },
		{ 111, YYAT_SHIFT, 67 },
		{ 111, YYAT_SHIFT, 68 },
		{ 111, YYAT_SHIFT, 69 },
		{ 111, YYAT_SHIFT, 70 },
		{ 111, YYAT_SHIFT, 71 },
		{ 111, YYAT_SHIFT, 72 },
		{ 111, YYAT_SHIFT, 73 },
		{ 111, YYAT_SHIFT, 74 },
		{ 111, YYAT_SHIFT, 75 },
		{ 111, YYAT_SHIFT, 76 },
		{ 111, YYAT_SHIFT, 77 },
		{ 111, YYAT_SHIFT, 78 },
		{ 111, YYAT_SHIFT, 79 },
		{ 111, YYAT_SHIFT, 80 },
		{ 111, YYAT_SHIFT, 81 },
		{ 111, YYAT_SHIFT, 82 },
		{ 111, YYAT_SHIFT, 83 },
		{ 109, YYAT_SHIFT, 62 },
		{ 109, YYAT_SHIFT, 63 },
		{ 109, YYAT_SHIFT, 64 },
		{ 109, YYAT_SHIFT, 65 },
		{ 109, YYAT_SHIFT, 66 },
		{ 109, YYAT_SHIFT, 67 },
		{ 109, YYAT_SHIFT, 68 },
		{ 109, YYAT_SHIFT, 69 },
		{ 109, YYAT_SHIFT, 70 },
		{ 109, YYAT_SHIFT, 71 },
		{ 109, YYAT_SHIFT, 72 },
		{ 109, YYAT_SHIFT, 73 },
		{ 109, YYAT_SHIFT, 74 },
		{ 109, YYAT_SHIFT, 75 },
		{ 109, YYAT_SHIFT, 76 },
		{ 109, YYAT_SHIFT, 77 },
		{ 109, YYAT_SHIFT, 78 },
		{ 109, YYAT_SHIFT, 79 },
		{ 109, YYAT_SHIFT, 80 },
		{ 109, YYAT_SHIFT, 81 },
		{ 109, YYAT_SHIFT, 82 },
		{ 109, YYAT_SHIFT, 83 },
		{ 108, YYAT_SHIFT, 62 },
		{ 108, YYAT_SHIFT, 63 },
		{ 108, YYAT_SHIFT, 64 },
		{ 108, YYAT_SHIFT, 65 },
		{ 108, YYAT_SHIFT, 66 },
		{ 108, YYAT_SHIFT, 67 },
		{ 108, YYAT_SHIFT, 68 },
		{ 108, YYAT_SHIFT, 69 },
		{ 108, YYAT_SHIFT, 70 },
		{ 108, YYAT_SHIFT, 71 },
		{ 108, YYAT_SHIFT, 72 },
		{ 108, YYAT_SHIFT, 73 },
		{ 108, YYAT_SHIFT, 74 },
		{ 108, YYAT_SHIFT, 75 },
		{ 108, YYAT_SHIFT, 76 },
		{ 108, YYAT_SHIFT, 77 },
		{ 108, YYAT_SHIFT, 78 },
		{ 108, YYAT_SHIFT, 79 },
		{ 108, YYAT_SHIFT, 80 },
		{ 108, YYAT_SHIFT, 81 },
		{ 108, YYAT_SHIFT, 82 },
		{ 108, YYAT_SHIFT, 83 },
		{ 107, YYAT_SHIFT, 62 },
		{ 107, YYAT_SHIFT, 63 },
		{ 107, YYAT_SHIFT, 64 },
		{ 107, YYAT_SHIFT, 65 },
		{ 107, YYAT_SHIFT, 66 },
		{ 107, YYAT_SHIFT, 67 },
		{ 107, YYAT_SHIFT, 68 },
		{ 107, YYAT_SHIFT, 69 },
		{ 107, YYAT_SHIFT, 70 },
		{ 107, YYAT_SHIFT, 71 },
		{ 107, YYAT_SHIFT, 72 },
		{ 107, YYAT_SHIFT, 73 },
		{ 107, YYAT_SHIFT, 74 },
		{ 107, YYAT_SHIFT, 75 },
		{ 107, YYAT_SHIFT, 76 },
		{ 107, YYAT_SHIFT, 77 },
		{ 107, YYAT_SHIFT, 78 },
		{ 107, YYAT_SHIFT, 79 },
		{ 107, YYAT_SHIFT, 80 },
		{ 107, YYAT_SHIFT, 81 },
		{ 107, YYAT_SHIFT, 82 },
		{ 107, YYAT_SHIFT, 83 },
		{ 139, YYAT_SHIFT, 23 },
		{ 139, YYAT_SHIFT, 24 },
		{ 139, YYAT_SHIFT, 25 },
		{ 139, YYAT_SHIFT, 26 },
		{ 139, YYAT_SHIFT, 27 },
		{ 139, YYAT_SHIFT, 28 },
		{ 0, YYAT_SHIFT, 1 },
		{ 9, YYAT_SHIFT, 14 },
		{ 8, YYAT_SHIFT, 12 },
		{ 7, YYAT_SHIFT, 10 },
		{ 134, YYAT_SHIFT, 137 },
		{ 0, YYAT_SHIFT, 2 },
		{ 130, YYAT_SHIFT, 135 },
		{ 129, YYAT_SHIFT, 134 },
		{ 127, YYAT_SHIFT, 132 },
		{ 126, YYAT_SHIFT, 131 },
		{ 125, YYAT_SHIFT, 130 },
		{ 124, YYAT_SHIFT, 129 },
		{ 117, YYAT_SHIFT, 122 },
		{ 116, YYAT_SHIFT, 121 },
		{ 115, YYAT_SHIFT, 120 },
		{ 114, YYAT_SHIFT, 119 },
		{ 110, YYAT_SHIFT, 91 },
		{ 105, YYAT_SHIFT, 91 },
		{ 103, YYAT_SHIFT, 118 },
		{ 102, YYAT_SHIFT, 91 },
		{ 101, YYAT_SHIFT, 88 },
		{ 100, YYAT_SHIFT, 117 },
		{ 139, YYAT_SHIFT, 29 },
		{ 99, YYAT_SHIFT, 116 },
		{ 139, YYAT_SHIFT, 30 },
		{ 139, YYAT_SHIFT, 31 },
		{ 98, YYAT_SHIFT, 115 },
		{ 97, YYAT_SHIFT, 114 },
		{ 94, YYAT_SHIFT, 113 },
		{ 92, YYAT_SHIFT, 112 },
		{ 88, YYAT_SHIFT, 33 },
		{ 61, YYAT_SHIFT, 106 },
		{ 60, YYAT_SHIFT, 88 },
		{ 53, YYAT_SHIFT, 104 },
		{ 0, YYAT_SHIFT, 3 },
		{ 9, YYAT_SHIFT, 15 },
		{ 8, YYAT_SHIFT, 13 },
		{ 7, YYAT_SHIFT, 11 },
		{ 52, YYAT_SHIFT, 33 },
		{ 51, YYAT_SHIFT, 33 },
		{ 49, YYAT_SHIFT, 96 },
		{ 48, YYAT_SHIFT, 95 },
		{ 46, YYAT_SHIFT, 93 },
		{ 44, YYAT_SHIFT, 91 },
		{ 43, YYAT_SHIFT, 90 },
		{ 41, YYAT_SHIFT, 84 },
		{ 38, YYAT_SHIFT, 59 },
		{ 37, YYAT_SHIFT, 58 },
		{ 36, YYAT_SHIFT, 56 },
		{ 35, YYAT_SHIFT, 55 },
		{ 33, YYAT_SHIFT, 54 },
		{ 31, YYAT_SHIFT, 52 },
		{ 30, YYAT_SHIFT, 51 },
		{ 29, YYAT_SHIFT, 50 },
		{ 20, YYAT_SHIFT, 47 },
		{ 18, YYAT_SHIFT, 45 },
		{ 16, YYAT_SHIFT, 22 },
		{ 15, YYAT_SHIFT, 21 },
		{ 14, YYAT_SHIFT, 20 },
		{ 13, YYAT_SHIFT, 19 },
		{ 12, YYAT_SHIFT, 18 },
		{ 11, YYAT_SHIFT, 17 },
		{ 10, YYAT_SHIFT, 16 },
		{ 6, YYAT_SHIFT, 9 },
		{ 5, YYAT_SHIFT, 8 },
		{ 4, YYAT_ACCEPT, 0 },
		{ 3, YYAT_SHIFT, 7 },
		{ 2, YYAT_SHIFT, 6 },
		{ 1, YYAT_SHIFT, 5 }
	};
	yytokenaction = tokenaction;

	static const yystateaction_t YYNEARFAR YYBASED_CODE stateaction[] = {
		{ -129, 1, YYAT_ERROR, 0 },
		{ -95, 1, YYAT_ERROR, 0 },
		{ -96, 1, YYAT_ERROR, 0 },
		{ -101, 1, YYAT_ERROR, 0 },
		{ 193, 1, YYAT_ERROR, 0 },
		{ -103, 1, YYAT_ERROR, 0 },
		{ -104, 1, YYAT_ERROR, 0 },
		{ -131, 1, YYAT_ERROR, 0 },
		{ -132, 1, YYAT_ERROR, 0 },
		{ -133, 1, YYAT_ERROR, 0 },
		{ -106, 1, YYAT_ERROR, 0 },
		{ -104, 1, YYAT_ERROR, 0 },
		{ -108, 1, YYAT_ERROR, 0 },
		{ -106, 1, YYAT_ERROR, 0 },
		{ -110, 1, YYAT_ERROR, 0 },
		{ -108, 1, YYAT_ERROR, 0 },
		{ -109, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_DEFAULT, 139 },
		{ -110, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_DEFAULT, 139 },
		{ -111, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_DEFAULT, 139 },
		{ 0, 0, YYAT_DEFAULT, 139 },
		{ 0, 0, YYAT_REDUCE, 15 },
		{ 0, 0, YYAT_REDUCE, 16 },
		{ 0, 0, YYAT_REDUCE, 17 },
		{ 0, 0, YYAT_REDUCE, 18 },
		{ 0, 0, YYAT_REDUCE, 19 },
		{ 0, 0, YYAT_REDUCE, 20 },
		{ -114, 1, YYAT_ERROR, 0 },
		{ -115, 1, YYAT_ERROR, 0 },
		{ -116, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_DEFAULT, 128 },
		{ -121, 1, YYAT_REDUCE, 43 },
		{ 0, 0, YYAT_REDUCE, 51 },
		{ -123, 1, YYAT_ERROR, 0 },
		{ -118, 1, YYAT_DEFAULT, 139 },
		{ -125, 1, YYAT_ERROR, 0 },
		{ -126, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_DEFAULT, 88 },
		{ 0, 0, YYAT_REDUCE, 7 },
		{ -127, 1, YYAT_DEFAULT, 123 },
		{ -275, 1, YYAT_REDUCE, 45 },
		{ -128, 1, YYAT_ERROR, 0 },
		{ -121, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_DEFAULT, 139 },
		{ -124, 1, YYAT_DEFAULT, 139 },
		{ 0, 0, YYAT_DEFAULT, 139 },
		{ -125, 1, YYAT_DEFAULT, 139 },
		{ -126, 1, YYAT_DEFAULT, 139 },
		{ 0, 0, YYAT_DEFAULT, 51 },
		{ -135, 1, YYAT_DEFAULT, 128 },
		{ -136, 1, YYAT_REDUCE, 61 },
		{ -135, 1, YYAT_DEFAULT, 133 },
		{ 0, 0, YYAT_DEFAULT, 88 },
		{ 0, 0, YYAT_REDUCE, 12 },
		{ 0, 0, YYAT_REDUCE, 1 },
		{ 0, 0, YYAT_REDUCE, 8 },
		{ 0, 0, YYAT_REDUCE, 13 },
		{ 0, 0, YYAT_REDUCE, 14 },
		{ -139, 1, YYAT_REDUCE, 45 },
		{ -141, 1, YYAT_DEFAULT, 44 },
		{ 0, 0, YYAT_REDUCE, 21 },
		{ 0, 0, YYAT_REDUCE, 22 },
		{ 0, 0, YYAT_REDUCE, 23 },
		{ 0, 0, YYAT_REDUCE, 24 },
		{ 0, 0, YYAT_REDUCE, 25 },
		{ 0, 0, YYAT_REDUCE, 26 },
		{ 0, 0, YYAT_REDUCE, 27 },
		{ 0, 0, YYAT_REDUCE, 28 },
		{ 0, 0, YYAT_REDUCE, 29 },
		{ 0, 0, YYAT_REDUCE, 30 },
		{ 0, 0, YYAT_REDUCE, 31 },
		{ 0, 0, YYAT_REDUCE, 32 },
		{ 0, 0, YYAT_REDUCE, 33 },
		{ 0, 0, YYAT_REDUCE, 34 },
		{ 0, 0, YYAT_REDUCE, 35 },
		{ 0, 0, YYAT_REDUCE, 36 },
		{ 0, 0, YYAT_REDUCE, 37 },
		{ 0, 0, YYAT_REDUCE, 38 },
		{ 0, 0, YYAT_REDUCE, 39 },
		{ 0, 0, YYAT_REDUCE, 40 },
		{ 0, 0, YYAT_REDUCE, 41 },
		{ 0, 0, YYAT_REDUCE, 42 },
		{ 0, 0, YYAT_REDUCE, 9 },
		{ 0, 0, YYAT_DEFAULT, 128 },
		{ 0, 0, YYAT_DEFAULT, 128 },
		{ 0, 0, YYAT_DEFAULT, 128 },
		{ -144, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 10 },
		{ 0, 0, YYAT_REDUCE, 11 },
		{ 0, 0, YYAT_DEFAULT, 128 },
		{ -137, 1, YYAT_DEFAULT, 139 },
		{ 0, 0, YYAT_REDUCE, 5 },
		{ -138, 1, YYAT_DEFAULT, 139 },
		{ 0, 0, YYAT_REDUCE, 3 },
		{ 0, 0, YYAT_REDUCE, 2 },
		{ -141, 1, YYAT_DEFAULT, 133 },
		{ -142, 1, YYAT_DEFAULT, 100 },
		{ -145, 1, YYAT_DEFAULT, 133 },
		{ -147, 1, YYAT_DEFAULT, 44 },
		{ -151, 1, YYAT_REDUCE, 45 },
		{ -145, 1, YYAT_REDUCE, 63 },
		{ -154, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 50 },
		{ -147, 1, YYAT_REDUCE, 44 },
		{ 0, 0, YYAT_REDUCE, 53 },
		{ -163, 1, YYAT_REDUCE, 48 },
		{ -185, 1, YYAT_REDUCE, 47 },
		{ -207, 1, YYAT_REDUCE, 49 },
		{ -148, 1, YYAT_REDUCE, 46 },
		{ -229, 1, YYAT_REDUCE, 52 },
		{ 0, 0, YYAT_REDUCE, 6 },
		{ 0, 0, YYAT_REDUCE, 4 },
		{ -150, 1, YYAT_ERROR, 0 },
		{ -151, 1, YYAT_ERROR, 0 },
		{ -152, 1, YYAT_ERROR, 0 },
		{ -153, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_DEFAULT, 128 },
		{ 0, 0, YYAT_DEFAULT, 139 },
		{ 0, 0, YYAT_DEFAULT, 139 },
		{ 0, 0, YYAT_DEFAULT, 139 },
		{ 0, 0, YYAT_DEFAULT, 139 },
		{ -273, 1, YYAT_DEFAULT, 133 },
		{ -155, 1, YYAT_ERROR, 0 },
		{ -156, 1, YYAT_ERROR, 0 },
		{ -157, 1, YYAT_ERROR, 0 },
		{ -158, 1, YYAT_ERROR, 0 },
		{ -273, 1, YYAT_ERROR, 0 },
		{ -151, 1, YYAT_REDUCE, 55 },
		{ -152, 1, YYAT_REDUCE, 57 },
		{ 0, 0, YYAT_REDUCE, 58 },
		{ 0, 0, YYAT_REDUCE, 59 },
		{ -263, 1, YYAT_ERROR, 0 },
		{ -161, 1, YYAT_ERROR, 0 },
		{ -261, 1, YYAT_ERROR, 0 },
		{ -262, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_DEFAULT, 139 },
		{ 0, 0, YYAT_DEFAULT, 139 },
		{ -135, 1, YYAT_DEFAULT, 51 },
		{ -265, 1, YYAT_ERROR, 0 },
		{ -266, 1, YYAT_ERROR, 0 },
		{ -268, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 54 },
		{ 0, 0, YYAT_REDUCE, 56 },
		{ 0, 0, YYAT_REDUCE, 60 }
	};
	yystateaction = stateaction;

	yynontermgoto_size = 45;

	static const yynontermgoto_t YYNEARFAR YYBASED_CODE nontermgoto[] = {
		{ 139, 142 },
		{ 139, 39 },
		{ 133, 86 },
		{ 133, 85 },
		{ 133, 87 },
		{ 139, 44 },
		{ 139, 41 },
		{ 139, 42 },
		{ 139, 43 },
		{ 139, 35 },
		{ 139, 37 },
		{ 139, 38 },
		{ 52, 102 },
		{ 88, 110 },
		{ 52, 101 },
		{ 88, 60 },
		{ 51, 100 },
		{ 51, 99 },
		{ 138, 141 },
		{ 52, 103 },
		{ 50, 98 },
		{ 50, 97 },
		{ 47, 94 },
		{ 47, 40 },
		{ 137, 140 },
		{ 128, 133 },
		{ 122, 127 },
		{ 121, 126 },
		{ 120, 125 },
		{ 119, 124 },
		{ 118, 123 },
		{ 94, 57 },
		{ 91, 111 },
		{ 87, 109 },
		{ 86, 108 },
		{ 85, 107 },
		{ 54, 105 },
		{ 45, 92 },
		{ 39, 61 },
		{ 32, 53 },
		{ 22, 49 },
		{ 21, 48 },
		{ 19, 46 },
		{ 17, 36 },
		{ 0, 4 }
	};
	yynontermgoto = nontermgoto;

	static const yystategoto_t YYNEARFAR YYBASED_CODE stategoto[] = {
		{ 43, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 41, 47 },
		{ 0, -1 },
		{ 40, 47 },
		{ 0, -1 },
		{ 39, 47 },
		{ 38, 47 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 30, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, 94 },
		{ 0, -1 },
		{ 0, -1 },
		{ 30, 88 },
		{ 0, -1 },
		{ 0, 133 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 35, 47 },
		{ 0, 94 },
		{ 20, 139 },
		{ 0, 94 },
		{ 0, 94 },
		{ 12, 88 },
		{ 8, 88 },
		{ 4, -1 },
		{ 0, 133 },
		{ 28, 88 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 26, -1 },
		{ 25, -1 },
		{ 24, -1 },
		{ 5, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 23, -1 },
		{ 0, 94 },
		{ 0, -1 },
		{ 28, 139 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, 133 },
		{ 0, -1 },
		{ 0, 133 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, 133 },
		{ 0, 133 },
		{ 0, 133 },
		{ 0, -1 },
		{ 0, 133 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 21, -1 },
		{ 26, 139 },
		{ 25, 139 },
		{ 24, 139 },
		{ 23, 139 },
		{ 0, 133 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 16, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ -3, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 21, 139 },
		{ 15, 139 },
		{ -3, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 }
	};
	yystategoto = stategoto;

	yydestructorptr = NULL;

	yytokendestptr = NULL;
	yytokendest_size = 0;

	yytokendestbaseptr = NULL;
	yytokendestbase_size = 0;
}
#line 199 ".\\myparser.y"


/////////////////////////////////////////////////////////////////////////////
// programs section

int main(void)
{
	int n = 1;
	mylexer lexer;
	myparser parser;
	if (parser.yycreate(&lexer)) {
		if (lexer.yycreate(&parser)) {
			n = parser.yyparse();
		}
	}
	return n;
}


