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
* myparser.cpp
* C++ source file generated from myparser.y.
* 
* Date: 11/28/18
* Time: 00:32:10
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
myparser->y
ParserWizard generated YACC file->

Date:2018年11月15日
****************************************************************************/
#include <iostream>
#include<fstream>
#include "mylexer.h"
#include "Tree.h"

using namespace std;

TreeNode *node = new TreeNode;
extern ParseTree tree;

#line 56 "myparser.cpp"
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
#line 31 ".\\myparser.y"

	// place any extra initialisation code here

#line 80 "myparser.cpp"
}

/////////////////////////////////////////////////////////////////////////////
// destructor

YYPARSERNAME::~YYPARSERNAME()
{
	// allows virtual functions to be called properly for correct cleanup
	yydestroy();
#line 36 ".\\myparser.y"

	// place any extra cleanup code here

#line 94 "myparser.cpp"
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
#line 204 "myparser.cpp"
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
#line 217 "myparser.cpp"
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
#line 230 "myparser.cpp"
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
#line 243 "myparser.cpp"
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
#line 256 "myparser.cpp"
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
#line 269 "myparser.cpp"
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
(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);
#line 282 "myparser.cpp"
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
#line 94 ".\\myparser.y"

		// $$ = new TreeNode;
		// $$->child[0] = $1;
		// $$->child[1] = $2;

		(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(2 - 2);
		(*(YYSTYPE YYFAR*)yyvalptr)->brother = yyattribute(1 - 2);
		tree.root = (*(YYSTYPE YYFAR*)yyvalptr);
	
#line 303 "myparser.cpp"
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
#line 107 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 2);
#line 316 "myparser.cpp"
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
#line 108 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 2);
#line 329 "myparser.cpp"
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
#line 109 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 2);
#line 342 "myparser.cpp"
			}
		}
		break;
	case 11:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 110 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);
#line 355 "myparser.cpp"
			}
		}
		break;
	case 12:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 111 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);
#line 368 "myparser.cpp"
			}
		}
		break;
	case 13:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 112 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);
#line 381 "myparser.cpp"
			}
		}
		break;
	case 14:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 120 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->stmt_node(type_spe);
		(*(YYSTYPE YYFAR*)yyvalptr)->attr.data_type = INT;
	
#line 397 "myparser.cpp"
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
#line 125 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->stmt_node(type_spe);
		(*(YYSTYPE YYFAR*)yyvalptr)->attr.data_type = DOUBLE;
	
#line 413 "myparser.cpp"
			}
		}
		break;
	case 16:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 130 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->stmt_node(type_spe);
		(*(YYSTYPE YYFAR*)yyvalptr)->attr.data_type = FLOAT;
	
#line 429 "myparser.cpp"
			}
		}
		break;
	case 17:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 135 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->stmt_node(type_spe);
		(*(YYSTYPE YYFAR*)yyvalptr)->attr.data_type = CHAR;
	
#line 445 "myparser.cpp"
			}
		}
		break;
	case 18:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 140 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->stmt_node(type_spe);
		(*(YYSTYPE YYFAR*)yyvalptr)->attr.data_type = BOOL;
	
#line 461 "myparser.cpp"
			}
		}
		break;
	case 19:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 145 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->stmt_node(type_spe);
		(*(YYSTYPE YYFAR*)yyvalptr)->attr.data_type = VOID;
	
#line 477 "myparser.cpp"
			}
		}
		break;
	case 20:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 152 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);
#line 490 "myparser.cpp"
			}
		}
		break;
	case 21:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 153 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);
#line 503 "myparser.cpp"
			}
		}
		break;
	case 22:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 154 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);
#line 516 "myparser.cpp"
			}
		}
		break;
	case 23:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 156 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->exp_node(oper);
		(*(YYSTYPE YYFAR*)yyvalptr)->attr.op = ASSIGN;
	
#line 532 "myparser.cpp"
			}
		}
		break;
	case 24:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 165 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->exp_node(oper);
		(*(YYSTYPE YYFAR*)yyvalptr)->attr.op = PLUS;
	
#line 548 "myparser.cpp"
			}
		}
		break;
	case 25:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 170 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->exp_node(oper);
		(*(YYSTYPE YYFAR*)yyvalptr)->attr.op = MINUS;
	
#line 564 "myparser.cpp"
			}
		}
		break;
	case 26:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 175 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->exp_node(oper);
		(*(YYSTYPE YYFAR*)yyvalptr)->attr.op = MUL;
	
#line 580 "myparser.cpp"
			}
		}
		break;
	case 27:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 180 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->exp_node(oper);
		(*(YYSTYPE YYFAR*)yyvalptr)->attr.op = DIV;
	
#line 596 "myparser.cpp"
			}
		}
		break;
	case 28:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 185 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->exp_node(oper);
		(*(YYSTYPE YYFAR*)yyvalptr)->attr.op = MOD;
	
#line 612 "myparser.cpp"
			}
		}
		break;
	case 29:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 190 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->exp_node(oper);
		(*(YYSTYPE YYFAR*)yyvalptr)->attr.op = INC;
	
#line 628 "myparser.cpp"
			}
		}
		break;
	case 30:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 195 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->exp_node(oper);
		(*(YYSTYPE YYFAR*)yyvalptr)->attr.op = DEC;
	
#line 644 "myparser.cpp"
			}
		}
		break;
	case 31:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 200 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->exp_node(oper);
		(*(YYSTYPE YYFAR*)yyvalptr)->attr.op = INAD;
	
#line 660 "myparser.cpp"
			}
		}
		break;
	case 32:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 205 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->exp_node(oper);
		(*(YYSTYPE YYFAR*)yyvalptr)->attr.op = IOR;
	
#line 676 "myparser.cpp"
			}
		}
		break;
	case 33:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 210 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->exp_node(oper);
		(*(YYSTYPE YYFAR*)yyvalptr)->attr.op = XOR;
	
#line 692 "myparser.cpp"
			}
		}
		break;
	case 34:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 215 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->exp_node(oper);
		(*(YYSTYPE YYFAR*)yyvalptr)->attr.op = NOT;
	
#line 708 "myparser.cpp"
			}
		}
		break;
	case 35:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 220 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->exp_node(oper);
		(*(YYSTYPE YYFAR*)yyvalptr)->attr.op = SHL;
	
#line 724 "myparser.cpp"
			}
		}
		break;
	case 36:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 225 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->exp_node(oper);
		(*(YYSTYPE YYFAR*)yyvalptr)->attr.op = SHR;
	
#line 740 "myparser.cpp"
			}
		}
		break;
	case 37:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 234 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->exp_node(oper);
		(*(YYSTYPE YYFAR*)yyvalptr)->attr.op = 276;
	
#line 756 "myparser.cpp"
			}
		}
		break;
	case 38:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 239 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->exp_node(oper);
		(*(YYSTYPE YYFAR*)yyvalptr)->attr.op = GT;
	
#line 772 "myparser.cpp"
			}
		}
		break;
	case 39:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 244 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->exp_node(oper);
		(*(YYSTYPE YYFAR*)yyvalptr)->attr.op = LT;
	
#line 788 "myparser.cpp"
			}
		}
		break;
	case 40:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 249 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->exp_node(oper);
		(*(YYSTYPE YYFAR*)yyvalptr)->attr.op = GE;
	
#line 804 "myparser.cpp"
			}
		}
		break;
	case 41:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 254 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->exp_node(oper);
		(*(YYSTYPE YYFAR*)yyvalptr)->attr.op = LE;
	
#line 820 "myparser.cpp"
			}
		}
		break;
	case 42:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 259 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->exp_node(oper);
		(*(YYSTYPE YYFAR*)yyvalptr)->attr.op = NEQ;
	
#line 836 "myparser.cpp"
			}
		}
		break;
	case 43:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 268 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->exp_node(oper);
		(*(YYSTYPE YYFAR*)yyvalptr)->attr.op = AND;
	
#line 852 "myparser.cpp"
			}
		}
		break;
	case 44:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 273 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->exp_node(oper);
		(*(YYSTYPE YYFAR*)yyvalptr)->attr.op = OR;
	
#line 868 "myparser.cpp"
			}
		}
		break;
	case 45:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 278 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->exp_node(oper);
		(*(YYSTYPE YYFAR*)yyvalptr)->attr.op = OPPOSITE;
	
#line 884 "myparser.cpp"
			}
		}
		break;
	case 46:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 288 ".\\myparser.y"
	
		if(yyattribute(1 - 1)->address != -1)//不在符号表中
		{
			(*(YYSTYPE YYFAR*)yyvalptr) = node->exp_node(id);
			strcpy((*(YYSTYPE YYFAR*)yyvalptr)->attr.name , yyattribute(1 - 1)->attr.name);
			//$$->address = $1->address;
		}
		//若在，找到结点返回
	
#line 905 "myparser.cpp"
			}
		}
		break;
	case 47:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 298 ".\\myparser.y"
		
		(*(YYSTYPE YYFAR*)yyvalptr) = node->exp_node(id);
		strcpy((*(YYSTYPE YYFAR*)yyvalptr)->attr.name , yyattribute(3 - 3)->attr.name);
		(*(YYSTYPE YYFAR*)yyvalptr)->brother = yyattribute(1 - 3);
	
#line 922 "myparser.cpp"
			}
		}
		break;
	case 48:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 317 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(2 - 3);
		yyattribute(2 - 3)->child[0] = yyattribute(1 - 3);
		yyattribute(2 - 3)->child[1] = yyattribute(3 - 3);
	
#line 939 "myparser.cpp"
			}
		}
		break;
	case 49:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 322 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(2 - 3);
#line 952 "myparser.cpp"
			}
		}
		break;
	case 50:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 324 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->exp_node(number);
		(*(YYSTYPE YYFAR*)yyvalptr)->attr.value = yyattribute(1 - 1)->attr.value;
	
#line 968 "myparser.cpp"
			}
		}
		break;
	case 51:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 328 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);
#line 981 "myparser.cpp"
			}
		}
		break;
	case 52:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 334 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->stmt_node(asgn_stmt);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[0] = yyattribute(1 - 3);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[1] = yyattribute(3 - 3);
	
#line 998 "myparser.cpp"
			}
		}
		break;
	case 53:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 340 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->stmt_node(asgn_stmt);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[0] = yyattribute(1 - 3);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[1] = yyattribute(3 - 3);
	
#line 1015 "myparser.cpp"
			}
		}
		break;
	case 54:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 349 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->stmt_node(dec_stmt);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[0] = yyattribute(1 - 2);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[1] = yyattribute(2 - 2);
	
#line 1032 "myparser.cpp"
			}
		}
		break;
	case 55:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[6];
			yyinitdebug((void YYFAR**)yya, 6);
#endif
			{
#line 364 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->stmt_node(if_stmt);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[0] = yyattribute(3 - 5);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[1] = yyattribute(5 - 5);
	
#line 1049 "myparser.cpp"
			}
		}
		break;
	case 56:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[8];
			yyinitdebug((void YYFAR**)yya, 8);
#endif
			{
#line 401 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->stmt_node(while_stmt);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[0] = yyattribute(3 - 7);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[1] = yyattribute(6 - 7);		
	
#line 1066 "myparser.cpp"
			}
		}
		break;
	case 57:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[8];
			yyinitdebug((void YYFAR**)yya, 8);
#endif
			{
#line 407 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->stmt_node(while_stmt);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[0] = yyattribute(3 - 7);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[1] = yyattribute(6 - 7);		
	
#line 1083 "myparser.cpp"
			}
		}
		break;
	case 58:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[12];
			yyinitdebug((void YYFAR**)yya, 12);
#endif
			{
#line 420 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->stmt_node(for_stmt);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[0] = yyattribute(3 - 11);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[1] = yyattribute(5 - 11);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[2] = yyattribute(7 - 11);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[3]= yyattribute(10 - 11);
	
#line 1102 "myparser.cpp"
			}
		}
		break;
	case 59:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[12];
			yyinitdebug((void YYFAR**)yya, 12);
#endif
			{
#line 428 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->stmt_node(for_stmt);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[0] = yyattribute(3 - 11);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[1] = yyattribute(5 - 11);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[2] = yyattribute(7 - 11);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[3]= yyattribute(10 - 11);	
	
#line 1121 "myparser.cpp"
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
		"$accept: program",
		"program: MAIN LPRACE RPRACE LBRACE code RBRACE",
		"program: MAIN LPRACE VOID RPRACE LBRACE code RBRACE",
		"program: VOID MAIN LPRACE RPRACE LBRACE code RBRACE",
		"program: VOID MAIN LPRACE VOID RPRACE LBRACE code RBRACE",
		"program: INT MAIN LPRACE RPRACE LBRACE code RBRACE",
		"program: INT MAIN LPRACE VOID RPRACE LBRACE code RBRACE",
		"code: stmt",
		"code: code stmt",
		"stmt: exp SIMICOLON",
		"stmt: asgn_stmt SIMICOLON",
		"stmt: dec_stmt SIMICOLON",
		"stmt: if_stmt",
		"stmt: while_stmt",
		"stmt: for_stmt",
		"type: INT",
		"type: DOUBLE",
		"type: FLOAT",
		"type: CHAR",
		"type: BOOL",
		"type: VOID",
		"op: ari_op",
		"op: rel_op",
		"op: log_op",
		"op: ASSIGN",
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
		"id: id COMMA ID",
		"exp: exp op exp",
		"exp: LPRACE exp RPRACE",
		"exp: NUMBER",
		"exp: id",
		"asgn_stmt: id ASSIGN exp",
		"asgn_stmt: asgn_stmt COMMA id",
		"dec_stmt: type id",
		"if_stmt: IF LPRACE exp RPRACE stmt",
		"while_stmt: WHILE LPRACE exp RPRACE LBRACE stmt RBRACE",
		"while_stmt: WHILE LPRACE id RPRACE LBRACE stmt RBRACE",
		"for_stmt: FOR LPRACE asgn_stmt SIMICOLON exp SIMICOLON exp RPRACE LBRACE stmt RBRACE",
		"for_stmt: FOR LPRACE id SIMICOLON exp SIMICOLON exp RPRACE LBRACE stmt RBRACE"
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
		{ 3, 1, 11 },
		{ 3, 1, 12 },
		{ 3, 1, 13 },
		{ 4, 1, 14 },
		{ 4, 1, 15 },
		{ 4, 1, 16 },
		{ 4, 1, 17 },
		{ 4, 1, 18 },
		{ 4, 1, 19 },
		{ 5, 1, 20 },
		{ 5, 1, 21 },
		{ 5, 1, 22 },
		{ 5, 1, 23 },
		{ 6, 1, 24 },
		{ 6, 1, 25 },
		{ 6, 1, 26 },
		{ 6, 1, 27 },
		{ 6, 1, 28 },
		{ 6, 1, 29 },
		{ 6, 1, 30 },
		{ 6, 1, 31 },
		{ 6, 1, 32 },
		{ 6, 1, 33 },
		{ 6, 1, 34 },
		{ 6, 1, 35 },
		{ 6, 1, 36 },
		{ 7, 1, 37 },
		{ 7, 1, 38 },
		{ 7, 1, 39 },
		{ 7, 1, 40 },
		{ 7, 1, 41 },
		{ 7, 1, 42 },
		{ 8, 1, 43 },
		{ 8, 1, 44 },
		{ 8, 1, 45 },
		{ 9, 1, 46 },
		{ 9, 3, 47 },
		{ 10, 3, 48 },
		{ 10, 3, 49 },
		{ 10, 1, 50 },
		{ 10, 1, 51 },
		{ 11, 3, 52 },
		{ 11, 3, 53 },
		{ 12, 2, 54 },
		{ 13, 5, 55 },
		{ 14, 7, 56 },
		{ 14, 7, 57 },
		{ 15, 11, 58 },
		{ 15, 11, 59 }
	};
	yyreduction = reduction;

	yytokenaction_size = 145;

	static const yytokenaction_t YYNEARFAR YYBASED_CODE tokenaction[] = {
		{ 125, YYAT_SHIFT, 56 },
		{ 125, YYAT_SHIFT, 57 },
		{ 125, YYAT_SHIFT, 58 },
		{ 125, YYAT_SHIFT, 59 },
		{ 125, YYAT_SHIFT, 60 },
		{ 125, YYAT_SHIFT, 61 },
		{ 125, YYAT_SHIFT, 62 },
		{ 125, YYAT_SHIFT, 63 },
		{ 125, YYAT_SHIFT, 64 },
		{ 125, YYAT_SHIFT, 65 },
		{ 125, YYAT_SHIFT, 66 },
		{ 125, YYAT_SHIFT, 67 },
		{ 125, YYAT_SHIFT, 68 },
		{ 125, YYAT_SHIFT, 69 },
		{ 125, YYAT_SHIFT, 70 },
		{ 125, YYAT_SHIFT, 71 },
		{ 125, YYAT_SHIFT, 72 },
		{ 125, YYAT_SHIFT, 73 },
		{ 125, YYAT_SHIFT, 74 },
		{ 125, YYAT_SHIFT, 75 },
		{ 125, YYAT_SHIFT, 76 },
		{ 125, YYAT_SHIFT, 77 },
		{ 0, YYAT_SHIFT, 1 },
		{ 9, YYAT_SHIFT, 14 },
		{ 8, YYAT_SHIFT, 12 },
		{ 7, YYAT_SHIFT, 10 },
		{ 117, YYAT_ERROR, 0 },
		{ 0, YYAT_SHIFT, 2 },
		{ 98, YYAT_SHIFT, 110 },
		{ 125, YYAT_SHIFT, 78 },
		{ 117, YYAT_SHIFT, 121 },
		{ 98, YYAT_SHIFT, 90 },
		{ 131, YYAT_SHIFT, 133 },
		{ 125, YYAT_SHIFT, 127 },
		{ 104, YYAT_SHIFT, 56 },
		{ 104, YYAT_SHIFT, 57 },
		{ 104, YYAT_SHIFT, 58 },
		{ 104, YYAT_SHIFT, 59 },
		{ 104, YYAT_SHIFT, 60 },
		{ 104, YYAT_SHIFT, 61 },
		{ 104, YYAT_SHIFT, 62 },
		{ 104, YYAT_SHIFT, 63 },
		{ 104, YYAT_SHIFT, 64 },
		{ 104, YYAT_SHIFT, 65 },
		{ 104, YYAT_SHIFT, 66 },
		{ 104, YYAT_SHIFT, 67 },
		{ 104, YYAT_SHIFT, 68 },
		{ 104, YYAT_SHIFT, 69 },
		{ 104, YYAT_SHIFT, 70 },
		{ 104, YYAT_SHIFT, 71 },
		{ 104, YYAT_SHIFT, 72 },
		{ 104, YYAT_SHIFT, 73 },
		{ 104, YYAT_SHIFT, 74 },
		{ 104, YYAT_SHIFT, 75 },
		{ 104, YYAT_SHIFT, 76 },
		{ 104, YYAT_SHIFT, 77 },
		{ 0, YYAT_SHIFT, 3 },
		{ 9, YYAT_SHIFT, 15 },
		{ 8, YYAT_SHIFT, 13 },
		{ 7, YYAT_SHIFT, 11 },
		{ 99, YYAT_SHIFT, 84 },
		{ 99, YYAT_SHIFT, 111 },
		{ 130, YYAT_SHIFT, 132 },
		{ 104, YYAT_SHIFT, 78 },
		{ 102, YYAT_SHIFT, 56 },
		{ 102, YYAT_SHIFT, 57 },
		{ 102, YYAT_SHIFT, 58 },
		{ 102, YYAT_SHIFT, 59 },
		{ 102, YYAT_SHIFT, 60 },
		{ 102, YYAT_SHIFT, 61 },
		{ 102, YYAT_SHIFT, 62 },
		{ 102, YYAT_SHIFT, 63 },
		{ 102, YYAT_SHIFT, 64 },
		{ 102, YYAT_SHIFT, 65 },
		{ 102, YYAT_SHIFT, 66 },
		{ 102, YYAT_SHIFT, 67 },
		{ 102, YYAT_SHIFT, 68 },
		{ 102, YYAT_SHIFT, 69 },
		{ 102, YYAT_SHIFT, 70 },
		{ 102, YYAT_SHIFT, 71 },
		{ 102, YYAT_SHIFT, 72 },
		{ 102, YYAT_SHIFT, 73 },
		{ 102, YYAT_SHIFT, 74 },
		{ 102, YYAT_SHIFT, 75 },
		{ 102, YYAT_SHIFT, 76 },
		{ 102, YYAT_SHIFT, 77 },
		{ 129, YYAT_SHIFT, 23 },
		{ 129, YYAT_SHIFT, 24 },
		{ 129, YYAT_SHIFT, 25 },
		{ 129, YYAT_SHIFT, 26 },
		{ 129, YYAT_SHIFT, 27 },
		{ 129, YYAT_SHIFT, 28 },
		{ 100, YYAT_SHIFT, 89 },
		{ 102, YYAT_SHIFT, 78 },
		{ 121, YYAT_SHIFT, 32 },
		{ 127, YYAT_SHIFT, 129 },
		{ 44, YYAT_SHIFT, 89 },
		{ 126, YYAT_SHIFT, 128 },
		{ 124, YYAT_SHIFT, 126 },
		{ 100, YYAT_SHIFT, 90 },
		{ 100, YYAT_SHIFT, 112 },
		{ 119, YYAT_SHIFT, 123 },
		{ 121, YYAT_SHIFT, 34 },
		{ 44, YYAT_SHIFT, 90 },
		{ 118, YYAT_SHIFT, 122 },
		{ 116, YYAT_SHIFT, 120 },
		{ 110, YYAT_SHIFT, 115 },
		{ 109, YYAT_SHIFT, 114 },
		{ 97, YYAT_SHIFT, 109 },
		{ 96, YYAT_SHIFT, 108 },
		{ 93, YYAT_SHIFT, 107 },
		{ 91, YYAT_SHIFT, 106 },
		{ 90, YYAT_SHIFT, 105 },
		{ 84, YYAT_SHIFT, 33 },
		{ 129, YYAT_SHIFT, 29 },
		{ 55, YYAT_SHIFT, 90 },
		{ 129, YYAT_SHIFT, 30 },
		{ 129, YYAT_SHIFT, 31 },
		{ 54, YYAT_SHIFT, 90 },
		{ 53, YYAT_SHIFT, 101 },
		{ 49, YYAT_SHIFT, 95 },
		{ 48, YYAT_SHIFT, 94 },
		{ 46, YYAT_SHIFT, 92 },
		{ 43, YYAT_SHIFT, 88 },
		{ 42, YYAT_SHIFT, 86 },
		{ 39, YYAT_SHIFT, 85 },
		{ 38, YYAT_SHIFT, 79 },
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
		{ -235, 1, YYAT_ERROR, 0 },
		{ -147, 1, YYAT_ERROR, 0 },
		{ -148, 1, YYAT_ERROR, 0 },
		{ -153, 1, YYAT_ERROR, 0 },
		{ 141, 1, YYAT_ERROR, 0 },
		{ -155, 1, YYAT_ERROR, 0 },
		{ -156, 1, YYAT_ERROR, 0 },
		{ -237, 1, YYAT_ERROR, 0 },
		{ -238, 1, YYAT_ERROR, 0 },
		{ -239, 1, YYAT_ERROR, 0 },
		{ -158, 1, YYAT_ERROR, 0 },
		{ -156, 1, YYAT_ERROR, 0 },
		{ -160, 1, YYAT_ERROR, 0 },
		{ -158, 1, YYAT_ERROR, 0 },
		{ -162, 1, YYAT_ERROR, 0 },
		{ -160, 1, YYAT_ERROR, 0 },
		{ -161, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_DEFAULT, 129 },
		{ -162, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_DEFAULT, 129 },
		{ -163, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_DEFAULT, 129 },
		{ 0, 0, YYAT_DEFAULT, 129 },
		{ 0, 0, YYAT_REDUCE, 15 },
		{ 0, 0, YYAT_REDUCE, 16 },
		{ 0, 0, YYAT_REDUCE, 17 },
		{ 0, 0, YYAT_REDUCE, 18 },
		{ 0, 0, YYAT_REDUCE, 19 },
		{ 0, 0, YYAT_REDUCE, 20 },
		{ -166, 1, YYAT_ERROR, 0 },
		{ -167, 1, YYAT_ERROR, 0 },
		{ -168, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_DEFAULT, 121 },
		{ 0, 0, YYAT_REDUCE, 47 },
		{ 0, 0, YYAT_REDUCE, 51 },
		{ 0, 0, YYAT_REDUCE, 12 },
		{ 0, 0, YYAT_REDUCE, 14 },
		{ 0, 0, YYAT_DEFAULT, 84 },
		{ -174, 1, YYAT_DEFAULT, 117 },
		{ -175, 1, YYAT_DEFAULT, 99 },
		{ 0, 0, YYAT_REDUCE, 13 },
		{ 0, 0, YYAT_REDUCE, 7 },
		{ -170, 1, YYAT_DEFAULT, 129 },
		{ -177, 1, YYAT_ERROR, 0 },
		{ -196, 1, YYAT_REDUCE, 52 },
		{ 0, 0, YYAT_DEFAULT, 129 },
		{ -172, 1, YYAT_DEFAULT, 129 },
		{ 0, 0, YYAT_DEFAULT, 129 },
		{ -173, 1, YYAT_DEFAULT, 129 },
		{ -174, 1, YYAT_DEFAULT, 129 },
		{ 0, 0, YYAT_DEFAULT, 121 },
		{ 0, 0, YYAT_DEFAULT, 121 },
		{ 0, 0, YYAT_DEFAULT, 84 },
		{ -177, 1, YYAT_DEFAULT, 125 },
		{ -181, 1, YYAT_REDUCE, 52 },
		{ -184, 1, YYAT_REDUCE, 55 },
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
		{ 0, 0, YYAT_REDUCE, 43 },
		{ 0, 0, YYAT_REDUCE, 44 },
		{ 0, 0, YYAT_REDUCE, 45 },
		{ 0, 0, YYAT_REDUCE, 46 },
		{ 0, 0, YYAT_REDUCE, 24 },
		{ 0, 0, YYAT_REDUCE, 9 },
		{ 0, 0, YYAT_REDUCE, 23 },
		{ 0, 0, YYAT_REDUCE, 22 },
		{ 0, 0, YYAT_REDUCE, 21 },
		{ 0, 0, YYAT_DEFAULT, 121 },
		{ -189, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 10 },
		{ 0, 0, YYAT_REDUCE, 1 },
		{ 0, 0, YYAT_REDUCE, 8 },
		{ 0, 0, YYAT_REDUCE, 11 },
		{ 0, 0, YYAT_DEFAULT, 121 },
		{ -190, 1, YYAT_ERROR, 0 },
		{ -183, 1, YYAT_DEFAULT, 129 },
		{ 0, 0, YYAT_REDUCE, 5 },
		{ -184, 1, YYAT_DEFAULT, 129 },
		{ 0, 0, YYAT_REDUCE, 3 },
		{ 0, 0, YYAT_REDUCE, 2 },
		{ -187, 1, YYAT_DEFAULT, 125 },
		{ -188, 1, YYAT_DEFAULT, 125 },
		{ -268, 1, YYAT_REDUCE, 52 },
		{ -239, 1, YYAT_ERROR, 0 },
		{ -200, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 50 },
		{ -199, 1, YYAT_REDUCE, 49 },
		{ 0, 0, YYAT_REDUCE, 54 },
		{ -229, 1, YYAT_REDUCE, 53 },
		{ 0, 0, YYAT_REDUCE, 48 },
		{ 0, 0, YYAT_REDUCE, 6 },
		{ 0, 0, YYAT_REDUCE, 4 },
		{ 0, 0, YYAT_DEFAULT, 129 },
		{ -186, 1, YYAT_ERROR, 0 },
		{ -187, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_DEFAULT, 121 },
		{ 0, 0, YYAT_DEFAULT, 121 },
		{ 0, 0, YYAT_REDUCE, 56 },
		{ 0, 0, YYAT_DEFAULT, 129 },
		{ 0, 0, YYAT_DEFAULT, 129 },
		{ -195, 1, YYAT_DEFAULT, 117 },
		{ -270, 1, YYAT_DEFAULT, 125 },
		{ -190, 1, YYAT_ERROR, 0 },
		{ -193, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_DEFAULT, 121 },
		{ -201, 1, YYAT_DEFAULT, 84 },
		{ 0, 0, YYAT_REDUCE, 57 },
		{ 0, 0, YYAT_REDUCE, 58 },
		{ -198, 1, YYAT_DEFAULT, 125 },
		{ -263, 1, YYAT_ERROR, 0 },
		{ -196, 1, YYAT_ERROR, 0 },
		{ -198, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_DEFAULT, 129 },
		{ -171, 1, YYAT_DEFAULT, 121 },
		{ -232, 1, YYAT_ERROR, 0 },
		{ -262, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 59 },
		{ 0, 0, YYAT_REDUCE, 60 }
	};
	yystateaction = stateaction;

	yynontermgoto_size = 41;

	static const yynontermgoto_t YYNEARFAR YYBASED_CODE nontermgoto[] = {
		{ 129, 131 },
		{ 129, 37 },
		{ 125, 83 },
		{ 125, 82 },
		{ 125, 81 },
		{ 125, 80 },
		{ 129, 44 },
		{ 129, 38 },
		{ 129, 39 },
		{ 129, 43 },
		{ 129, 35 },
		{ 129, 40 },
		{ 129, 36 },
		{ 52, 100 },
		{ 128, 130 },
		{ 52, 99 },
		{ 121, 54 },
		{ 121, 125 },
		{ 51, 98 },
		{ 51, 97 },
		{ 47, 93 },
		{ 47, 41 },
		{ 120, 124 },
		{ 115, 119 },
		{ 114, 118 },
		{ 112, 117 },
		{ 111, 116 },
		{ 108, 113 },
		{ 93, 87 },
		{ 89, 104 },
		{ 84, 103 },
		{ 83, 102 },
		{ 50, 96 },
		{ 45, 91 },
		{ 37, 55 },
		{ 32, 53 },
		{ 22, 49 },
		{ 21, 48 },
		{ 19, 46 },
		{ 17, 42 },
		{ 0, 4 }
	};
	yynontermgoto = nontermgoto;

	static const yystategoto_t YYNEARFAR YYBASED_CODE stategoto[] = {
		{ 39, -1 },
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
		{ 37, 47 },
		{ 0, -1 },
		{ 36, 47 },
		{ 0, -1 },
		{ 35, 47 },
		{ 34, 47 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 25, 121 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 25, -1 },
		{ 0, 125 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, 93 },
		{ 0, -1 },
		{ 0, -1 },
		{ 31, 47 },
		{ 0, 93 },
		{ 18, 129 },
		{ 0, 93 },
		{ 0, 93 },
		{ 22, 121 },
		{ 9, -1 },
		{ 4, -1 },
		{ 0, 125 },
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
		{ 21, 121 },
		{ 21, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 19, 121 },
		{ 0, -1 },
		{ 0, 93 },
		{ 0, -1 },
		{ 25, 129 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, 125 },
		{ 0, 125 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, 125 },
		{ 0, -1 },
		{ 0, 125 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 24, 129 },
		{ 0, -1 },
		{ 0, -1 },
		{ 16, 121 },
		{ 15, 121 },
		{ 0, -1 },
		{ 21, 129 },
		{ 20, 129 },
		{ 0, 125 },
		{ 0, 125 },
		{ 0, -1 },
		{ 0, -1 },
		{ 12, 121 },
		{ 7, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, 125 },
		{ -3, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 11, 129 },
		{ -3, -1 },
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
#line 448 ".\\myparser.y"


/////////////////////////////////////////////////////////////////////////////
// programs section

int main(void)
{
	int n = 1;
	mylexer lexer;
	myparser parser;
	if (parser.yycreate(&lexer)) {
		if (lexer.yycreate(&parser)) {
			// freopen("./example.txt", "r",stdin);
			 freopen("D:/input.txt", "r",stdin);

			n = parser.yyparse();
			//tree.print_tree(tree.root);不执行

			freopen("CON", "r", stdin);
			tree.print_tree(tree.root);
		}
	}
	system("pause");
	return n;
}


