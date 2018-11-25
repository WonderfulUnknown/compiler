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
* myparser.cpp
* C++ source file generated from myparser.y.
* 
* Date: 11/25/18
* Time: 21:41:51
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
#include "mylexer.h"
#include "Tree.h"

using namespace std;
ParseTree *tree;
TreeNode *node;

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
#line 79 ".\\myparser.y"
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
#line 80 ".\\myparser.y"
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
#line 81 ".\\myparser.y"
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
#line 82 ".\\myparser.y"
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
#line 83 ".\\myparser.y"
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
#line 84 ".\\myparser.y"
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
#line 89 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);
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
#line 91 ".\\myparser.y"

		tree->root->child[0] = yyattribute(1 - 2);
		tree->root->child[1] = yyattribute(2 - 2);
		(*(YYSTYPE YYFAR*)yyvalptr) = tree->root;
	
#line 297 "myparser.cpp"
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
#line 100 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 2);
#line 310 "myparser.cpp"
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
#line 101 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 2);
#line 323 "myparser.cpp"
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
#line 102 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 2);
#line 336 "myparser.cpp"
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
#line 103 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 2);
#line 349 "myparser.cpp"
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
#line 104 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 2);
#line 362 "myparser.cpp"
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
#line 105 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 2);
#line 375 "myparser.cpp"
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
#line 113 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->stmt_node(type_spe);
		(*(YYSTYPE YYFAR*)yyvalptr)->attr.data_type = INT;
	
#line 391 "myparser.cpp"
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
#line 118 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->stmt_node(type_spe);
		(*(YYSTYPE YYFAR*)yyvalptr)->attr.data_type = DOUBLE;
	
#line 407 "myparser.cpp"
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
#line 123 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->stmt_node(type_spe);
		(*(YYSTYPE YYFAR*)yyvalptr)->attr.data_type = FLOAT;
	
#line 423 "myparser.cpp"
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
#line 128 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->stmt_node(type_spe);
		(*(YYSTYPE YYFAR*)yyvalptr)->attr.data_type = CHAR;
	
#line 439 "myparser.cpp"
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
#line 133 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->stmt_node(type_spe);
		(*(YYSTYPE YYFAR*)yyvalptr)->attr.data_type = BOOL;
	
#line 455 "myparser.cpp"
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
#line 138 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->stmt_node(type_spe);
		(*(YYSTYPE YYFAR*)yyvalptr)->attr.data_type = VOID;
	
#line 471 "myparser.cpp"
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
#line 145 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);
#line 484 "myparser.cpp"
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
#line 146 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);
#line 497 "myparser.cpp"
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
#line 147 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);
#line 510 "myparser.cpp"
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
#line 153 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->exp_node(op);
		(*(YYSTYPE YYFAR*)yyvalptr)->attr.op = PLUS;
	
#line 526 "myparser.cpp"
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
#line 158 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->exp_node(op);
		(*(YYSTYPE YYFAR*)yyvalptr)->attr.op = MINUS;
	
#line 542 "myparser.cpp"
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
#line 163 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->exp_node(op);
		(*(YYSTYPE YYFAR*)yyvalptr)->attr.op = MUL;
	
#line 558 "myparser.cpp"
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
#line 168 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->exp_node(op);
		(*(YYSTYPE YYFAR*)yyvalptr)->attr.op = DIV;
	
#line 574 "myparser.cpp"
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
#line 173 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->exp_node(op);
		(*(YYSTYPE YYFAR*)yyvalptr)->attr.op = MOD;
	
#line 590 "myparser.cpp"
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
#line 178 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->exp_node(op);
		(*(YYSTYPE YYFAR*)yyvalptr)->attr.op = INC;
	
#line 606 "myparser.cpp"
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
#line 183 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->exp_node(op);
		(*(YYSTYPE YYFAR*)yyvalptr)->attr.op = DEC;
	
#line 622 "myparser.cpp"
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
#line 188 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->exp_node(op);
		(*(YYSTYPE YYFAR*)yyvalptr)->attr.op = INAD;
	
#line 638 "myparser.cpp"
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
#line 193 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->exp_node(op);
		(*(YYSTYPE YYFAR*)yyvalptr)->attr.op = IOR;
	
#line 654 "myparser.cpp"
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
#line 198 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->exp_node(op);
		(*(YYSTYPE YYFAR*)yyvalptr)->attr.op = XOR;
	
#line 670 "myparser.cpp"
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
#line 203 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->exp_node(op);
		(*(YYSTYPE YYFAR*)yyvalptr)->attr.op = NOT;
	
#line 686 "myparser.cpp"
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
#line 208 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->exp_node(op);
		(*(YYSTYPE YYFAR*)yyvalptr)->attr.op = SHL;
	
#line 702 "myparser.cpp"
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
#line 213 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->exp_node(op);
		(*(YYSTYPE YYFAR*)yyvalptr)->attr.op = SHR;
	
#line 718 "myparser.cpp"
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
#line 221 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->exp_node(op);
		(*(YYSTYPE YYFAR*)yyvalptr)->attr.op = EQ;
	
#line 734 "myparser.cpp"
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
#line 226 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->exp_node(op);
		(*(YYSTYPE YYFAR*)yyvalptr)->attr.op = GT;
	
#line 750 "myparser.cpp"
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
#line 231 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->exp_node(op);
		(*(YYSTYPE YYFAR*)yyvalptr)->attr.op = LT;
	
#line 766 "myparser.cpp"
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
#line 236 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->exp_node(op);
		(*(YYSTYPE YYFAR*)yyvalptr)->attr.op = GE;
	
#line 782 "myparser.cpp"
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
#line 241 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->exp_node(op);
		(*(YYSTYPE YYFAR*)yyvalptr)->attr.op = LE;
	
#line 798 "myparser.cpp"
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
#line 246 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->exp_node(op);
		(*(YYSTYPE YYFAR*)yyvalptr)->attr.op = NEQ;
	
#line 814 "myparser.cpp"
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
#line 254 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->exp_node(op);
		(*(YYSTYPE YYFAR*)yyvalptr)->attr.op = AND;
	
#line 830 "myparser.cpp"
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
#line 259 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->exp_node(op);
		(*(YYSTYPE YYFAR*)yyvalptr)->attr.op = OR;
	
#line 846 "myparser.cpp"
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
#line 264 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->exp_node(op);
		(*(YYSTYPE YYFAR*)yyvalptr)->attr.op = OPPOSITE;
	
#line 862 "myparser.cpp"
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
#line 273 ".\\myparser.y"
	
		(*(YYSTYPE YYFAR*)yyvalptr) = node->node->exp_node(id);
		(*(YYSTYPE YYFAR*)yyvalptr)->attr.name = yyattribute(1 - 1)->attr.name;
		(*(YYSTYPE YYFAR*)yyvalptr)->address = yyattribute(1 - 1)->address;
	
#line 879 "myparser.cpp"
			}
		}
		break;
	case 46:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 281 ".\\myparser.y"
		
		//可能需要考虑是否可以使用id赋值
		YYSTYPE temp = yyattribute(3 - 3);
		while(temp->brother != NULL)
			temp = temp->brother;
		temp->brother = yyattribute(1 - 3);
	
#line 898 "myparser.cpp"
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
#line 296 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->node->exp_node(op);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[0] = yyattribute(1 - 3);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[1] = yyattribute(3 - 3);
	
#line 915 "myparser.cpp"
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
#line 301 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(2 - 3);
#line 928 "myparser.cpp"
			}
		}
		break;
	case 49:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 303 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->node->exp_node(number);
		(*(YYSTYPE YYFAR*)yyvalptr)->attr.value = yyattribute(2 - 1)->attr.value;
	
#line 944 "myparser.cpp"
			}
		}
		break;
	case 50:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 312 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->node->exp_node(yyattribute(2 - 3)->type.exp_type);
	
#line 959 "myparser.cpp"
			}
		}
		break;
	case 51:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 316 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->node->stmt_node(asgn_stmt);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[0] = yyattribute(1 - 3);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[1] = yyattribute(3 - 3);
	
#line 976 "myparser.cpp"
			}
		}
		break;
	case 52:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 325 ".\\myparser.y"

		//type中的值都是mylexer->h中define的值,注意
		(*(YYSTYPE YYFAR*)yyvalptr) = node->node->stmt_node(dec_stmt);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[0] = yyattribute(1 - 2);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[1] = yyattribute(2 - 2);
	
#line 994 "myparser.cpp"
			}
		}
		break;
	case 53:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[12];
			yyinitdebug((void YYFAR**)yya, 12);
#endif
			{
#line 341 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->node->stmt_node(if_stmt);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[0] = yyattribute(3 - 11);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[1] = yyattribute(6 - 11);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[2] = yyattribute(10 - 11);
	
#line 1012 "myparser.cpp"
			}
		}
		break;
	case 54:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[8];
			yyinitdebug((void YYFAR**)yya, 8);
#endif
			{
#line 348 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->node->stmt_node(if_stmt);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[0] = yyattribute(3 - 7);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[1] = yyattribute(6 - 7);
	
#line 1029 "myparser.cpp"
			}
		}
		break;
	case 55:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[12];
			yyinitdebug((void YYFAR**)yya, 12);
#endif
			{
#line 354 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->node->stmt_node(if_stmt);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[0] = yyattribute(3 - 11);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[1] = yyattribute(6 - 11);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[2] = yyattribute(10 - 11);
	
#line 1047 "myparser.cpp"
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
#line 361 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->node->stmt_node(if_stmt);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[0] = yyattribute(3 - 7);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[1] = yyattribute(6 - 7);
	
#line 1064 "myparser.cpp"
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
#line 371 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->node->stmt_node(while_stmt);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[0] = yyattribute(3 - 7);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[1] = yyattribute(6 - 7);		
	
#line 1081 "myparser.cpp"
			}
		}
		break;
	case 58:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[8];
			yyinitdebug((void YYFAR**)yya, 8);
#endif
			{
#line 377 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->node->stmt_node(while_stmt);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[0] = yyattribute(3 - 7);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[1] = yyattribute(6 - 7);		
	
#line 1098 "myparser.cpp"
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
#line 390 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->node->stmt_node(for_stmt);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[0] = yyattribute(3 - 11);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[1] = yyattribute(5 - 11);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[2] = yyattribute(7 - 11);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[3]= yyattribute(10 - 11);
	
#line 1117 "myparser.cpp"
			}
		}
		break;
	case 60:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[12];
			yyinitdebug((void YYFAR**)yya, 12);
#endif
			{
#line 398 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->node->stmt_node(for_stmt);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[0] = yyattribute(3 - 11);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[1] = yyattribute(5 - 11);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[2] = yyattribute(7 - 11);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[3]= yyattribute(10 - 11);	
	
#line 1136 "myparser.cpp"
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
		"stmt: exp SIMICOLON",
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
		"op: ari_op",
		"op: rel_op",
		"op: log_op",
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
		"asgn_stmt: id ASSIGN exp",
		"asgn_stmt: asgn_stmt COMMA id",
		"dec_stmt: type id",
		"if_stmt: IF LPRACE exp RPRACE LBRACE stmt RBRACE ELSE LBRACE stmt RBRACE",
		"if_stmt: IF LPRACE exp RPRACE LBRACE stmt RBRACE",
		"if_stmt: IF LPRACE id RPRACE LBRACE stmt RBRACE ELSE LBRACE stmt RBRACE",
		"if_stmt: IF LPRACE id RPRACE LBRACE stmt RBRACE",
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
		{ 3, 2, 11 },
		{ 3, 2, 12 },
		{ 3, 2, 13 },
		{ 4, 1, 14 },
		{ 4, 1, 15 },
		{ 4, 1, 16 },
		{ 4, 1, 17 },
		{ 4, 1, 18 },
		{ 4, 1, 19 },
		{ 5, 1, 20 },
		{ 5, 1, 21 },
		{ 5, 1, 22 },
		{ 6, 1, 23 },
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
		{ 7, 1, 36 },
		{ 7, 1, 37 },
		{ 7, 1, 38 },
		{ 7, 1, 39 },
		{ 7, 1, 40 },
		{ 7, 1, 41 },
		{ 8, 1, 42 },
		{ 8, 1, 43 },
		{ 8, 1, 44 },
		{ 9, 1, 45 },
		{ 9, 3, 46 },
		{ 10, 3, 47 },
		{ 10, 3, 48 },
		{ 10, 1, 49 },
		{ 11, 3, 50 },
		{ 11, 3, 51 },
		{ 12, 2, 52 },
		{ 13, 11, 53 },
		{ 13, 7, 54 },
		{ 13, 11, 55 },
		{ 13, 7, 56 },
		{ 14, 7, 57 },
		{ 14, 7, 58 },
		{ 15, 11, 59 },
		{ 15, 11, 60 }
	};
	yyreduction = reduction;

	yytokenaction_size = 155;

	static const yytokenaction_t YYNEARFAR YYBASED_CODE tokenaction[] = {
		{ 133, YYAT_SHIFT, 54 },
		{ 133, YYAT_SHIFT, 55 },
		{ 133, YYAT_SHIFT, 56 },
		{ 133, YYAT_SHIFT, 57 },
		{ 133, YYAT_SHIFT, 58 },
		{ 133, YYAT_SHIFT, 59 },
		{ 133, YYAT_SHIFT, 60 },
		{ 133, YYAT_SHIFT, 61 },
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
		{ 102, YYAT_SHIFT, 90 },
		{ 127, YYAT_SHIFT, 32 },
		{ 121, YYAT_ERROR, 0 },
		{ 101, YYAT_SHIFT, 81 },
		{ 101, YYAT_SHIFT, 114 },
		{ 145, YYAT_SHIFT, 149 },
		{ 121, YYAT_SHIFT, 127 },
		{ 102, YYAT_SHIFT, 91 },
		{ 102, YYAT_SHIFT, 115 },
		{ 127, YYAT_SHIFT, 34 },
		{ 144, YYAT_SHIFT, 148 },
		{ 133, YYAT_SHIFT, 137 },
		{ 106, YYAT_SHIFT, 54 },
		{ 106, YYAT_SHIFT, 55 },
		{ 106, YYAT_SHIFT, 56 },
		{ 106, YYAT_SHIFT, 57 },
		{ 106, YYAT_SHIFT, 58 },
		{ 106, YYAT_SHIFT, 59 },
		{ 106, YYAT_SHIFT, 60 },
		{ 106, YYAT_SHIFT, 61 },
		{ 106, YYAT_SHIFT, 62 },
		{ 106, YYAT_SHIFT, 63 },
		{ 106, YYAT_SHIFT, 64 },
		{ 106, YYAT_SHIFT, 65 },
		{ 106, YYAT_SHIFT, 66 },
		{ 106, YYAT_SHIFT, 67 },
		{ 106, YYAT_SHIFT, 68 },
		{ 106, YYAT_SHIFT, 69 },
		{ 106, YYAT_SHIFT, 70 },
		{ 106, YYAT_SHIFT, 71 },
		{ 106, YYAT_SHIFT, 72 },
		{ 106, YYAT_SHIFT, 73 },
		{ 106, YYAT_SHIFT, 74 },
		{ 106, YYAT_SHIFT, 75 },
		{ 104, YYAT_SHIFT, 54 },
		{ 104, YYAT_SHIFT, 55 },
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
		{ 141, YYAT_SHIFT, 23 },
		{ 141, YYAT_SHIFT, 24 },
		{ 141, YYAT_SHIFT, 25 },
		{ 141, YYAT_SHIFT, 26 },
		{ 141, YYAT_SHIFT, 27 },
		{ 141, YYAT_SHIFT, 28 },
		{ 0, YYAT_SHIFT, 1 },
		{ 9, YYAT_SHIFT, 14 },
		{ 8, YYAT_SHIFT, 12 },
		{ 7, YYAT_SHIFT, 10 },
		{ 100, YYAT_SHIFT, 113 },
		{ 0, YYAT_SHIFT, 2 },
		{ 143, YYAT_SHIFT, 147 },
		{ 100, YYAT_SHIFT, 91 },
		{ 142, YYAT_SHIFT, 146 },
		{ 137, YYAT_SHIFT, 141 },
		{ 136, YYAT_SHIFT, 140 },
		{ 135, YYAT_SHIFT, 139 },
		{ 134, YYAT_SHIFT, 138 },
		{ 132, YYAT_SHIFT, 136 },
		{ 129, YYAT_SHIFT, 135 },
		{ 128, YYAT_SHIFT, 134 },
		{ 125, YYAT_SHIFT, 131 },
		{ 124, YYAT_SHIFT, 130 },
		{ 123, YYAT_SHIFT, 129 },
		{ 122, YYAT_SHIFT, 128 },
		{ 120, YYAT_SHIFT, 126 },
		{ 113, YYAT_SHIFT, 119 },
		{ 141, YYAT_SHIFT, 29 },
		{ 112, YYAT_SHIFT, 118 },
		{ 141, YYAT_SHIFT, 30 },
		{ 141, YYAT_SHIFT, 31 },
		{ 111, YYAT_SHIFT, 117 },
		{ 110, YYAT_SHIFT, 116 },
		{ 99, YYAT_SHIFT, 112 },
		{ 98, YYAT_SHIFT, 111 },
		{ 97, YYAT_SHIFT, 110 },
		{ 94, YYAT_SHIFT, 109 },
		{ 92, YYAT_SHIFT, 108 },
		{ 91, YYAT_SHIFT, 107 },
		{ 0, YYAT_SHIFT, 3 },
		{ 9, YYAT_SHIFT, 15 },
		{ 8, YYAT_SHIFT, 13 },
		{ 7, YYAT_SHIFT, 11 },
		{ 85, YYAT_SHIFT, 91 },
		{ 81, YYAT_SHIFT, 33 },
		{ 53, YYAT_SHIFT, 103 },
		{ 51, YYAT_SHIFT, 33 },
		{ 49, YYAT_SHIFT, 96 },
		{ 48, YYAT_SHIFT, 95 },
		{ 46, YYAT_SHIFT, 93 },
		{ 44, YYAT_ERROR, 0 },
		{ 43, YYAT_SHIFT, 89 },
		{ 42, YYAT_SHIFT, 88 },
		{ 41, YYAT_SHIFT, 86 },
		{ 38, YYAT_SHIFT, 84 },
		{ 37, YYAT_SHIFT, 83 },
		{ 36, YYAT_SHIFT, 82 },
		{ 35, YYAT_SHIFT, 76 },
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
		{ -173, 1, YYAT_ERROR, 0 },
		{ -137, 1, YYAT_ERROR, 0 },
		{ -138, 1, YYAT_ERROR, 0 },
		{ -143, 1, YYAT_ERROR, 0 },
		{ 151, 1, YYAT_ERROR, 0 },
		{ -145, 1, YYAT_ERROR, 0 },
		{ -146, 1, YYAT_ERROR, 0 },
		{ -175, 1, YYAT_ERROR, 0 },
		{ -176, 1, YYAT_ERROR, 0 },
		{ -177, 1, YYAT_ERROR, 0 },
		{ -148, 1, YYAT_ERROR, 0 },
		{ -146, 1, YYAT_ERROR, 0 },
		{ -150, 1, YYAT_ERROR, 0 },
		{ -148, 1, YYAT_ERROR, 0 },
		{ -152, 1, YYAT_ERROR, 0 },
		{ -150, 1, YYAT_ERROR, 0 },
		{ -151, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_DEFAULT, 141 },
		{ -152, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_DEFAULT, 141 },
		{ -153, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_DEFAULT, 141 },
		{ 0, 0, YYAT_DEFAULT, 141 },
		{ 0, 0, YYAT_REDUCE, 15 },
		{ 0, 0, YYAT_REDUCE, 16 },
		{ 0, 0, YYAT_REDUCE, 17 },
		{ 0, 0, YYAT_REDUCE, 18 },
		{ 0, 0, YYAT_REDUCE, 19 },
		{ 0, 0, YYAT_REDUCE, 20 },
		{ -156, 1, YYAT_ERROR, 0 },
		{ -157, 1, YYAT_ERROR, 0 },
		{ -158, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_DEFAULT, 127 },
		{ 0, 0, YYAT_REDUCE, 46 },
		{ 0, 0, YYAT_REDUCE, 50 },
		{ -164, 1, YYAT_DEFAULT, 121 },
		{ -165, 1, YYAT_DEFAULT, 101 },
		{ -166, 1, YYAT_ERROR, 0 },
		{ -167, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_DEFAULT, 81 },
		{ 0, 0, YYAT_REDUCE, 7 },
		{ -162, 1, YYAT_DEFAULT, 141 },
		{ -169, 1, YYAT_ERROR, 0 },
		{ -170, 1, YYAT_ERROR, 0 },
		{ -171, 1, YYAT_DEFAULT, 102 },
		{ 0, 0, YYAT_DEFAULT, 141 },
		{ -166, 1, YYAT_DEFAULT, 141 },
		{ 0, 0, YYAT_DEFAULT, 141 },
		{ -167, 1, YYAT_DEFAULT, 141 },
		{ -168, 1, YYAT_DEFAULT, 141 },
		{ 0, 0, YYAT_DEFAULT, 51 },
		{ -177, 1, YYAT_DEFAULT, 127 },
		{ 0, 0, YYAT_DEFAULT, 81 },
		{ -172, 1, YYAT_DEFAULT, 133 },
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
		{ 0, 0, YYAT_REDUCE, 43 },
		{ 0, 0, YYAT_REDUCE, 44 },
		{ 0, 0, YYAT_REDUCE, 45 },
		{ 0, 0, YYAT_REDUCE, 9 },
		{ 0, 0, YYAT_DEFAULT, 127 },
		{ 0, 0, YYAT_REDUCE, 22 },
		{ 0, 0, YYAT_REDUCE, 23 },
		{ 0, 0, YYAT_REDUCE, 21 },
		{ -179, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 10 },
		{ 0, 0, YYAT_REDUCE, 11 },
		{ 0, 0, YYAT_REDUCE, 13 },
		{ -177, 1, YYAT_REDUCE, 53 },
		{ 0, 0, YYAT_REDUCE, 1 },
		{ 0, 0, YYAT_REDUCE, 8 },
		{ 0, 0, YYAT_REDUCE, 12 },
		{ 0, 0, YYAT_REDUCE, 14 },
		{ 0, 0, YYAT_DEFAULT, 127 },
		{ -185, 1, YYAT_ERROR, 0 },
		{ -178, 1, YYAT_DEFAULT, 141 },
		{ 0, 0, YYAT_REDUCE, 5 },
		{ -179, 1, YYAT_DEFAULT, 141 },
		{ 0, 0, YYAT_REDUCE, 3 },
		{ 0, 0, YYAT_REDUCE, 2 },
		{ -182, 1, YYAT_DEFAULT, 133 },
		{ -183, 1, YYAT_DEFAULT, 100 },
		{ -184, 1, YYAT_DEFAULT, 133 },
		{ -208, 1, YYAT_ERROR, 0 },
		{ -274, 1, YYAT_ERROR, 0 },
		{ -270, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 49 },
		{ -207, 1, YYAT_REDUCE, 48 },
		{ 0, 0, YYAT_REDUCE, 52 },
		{ -229, 1, YYAT_REDUCE, 51 },
		{ 0, 0, YYAT_REDUCE, 47 },
		{ 0, 0, YYAT_REDUCE, 6 },
		{ 0, 0, YYAT_REDUCE, 4 },
		{ -182, 1, YYAT_ERROR, 0 },
		{ -183, 1, YYAT_ERROR, 0 },
		{ -186, 1, YYAT_ERROR, 0 },
		{ -188, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_DEFAULT, 127 },
		{ 0, 0, YYAT_DEFAULT, 127 },
		{ 0, 0, YYAT_DEFAULT, 141 },
		{ 0, 0, YYAT_DEFAULT, 141 },
		{ 0, 0, YYAT_DEFAULT, 141 },
		{ 0, 0, YYAT_DEFAULT, 141 },
		{ -196, 1, YYAT_DEFAULT, 121 },
		{ -272, 1, YYAT_DEFAULT, 133 },
		{ -191, 1, YYAT_ERROR, 0 },
		{ -192, 1, YYAT_ERROR, 0 },
		{ -193, 1, YYAT_ERROR, 0 },
		{ -194, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_DEFAULT, 127 },
		{ -272, 1, YYAT_ERROR, 0 },
		{ -187, 1, YYAT_REDUCE, 55 },
		{ -188, 1, YYAT_REDUCE, 57 },
		{ 0, 0, YYAT_REDUCE, 58 },
		{ 0, 0, YYAT_REDUCE, 59 },
		{ -199, 1, YYAT_DEFAULT, 133 },
		{ -263, 1, YYAT_ERROR, 0 },
		{ -197, 1, YYAT_ERROR, 0 },
		{ -198, 1, YYAT_ERROR, 0 },
		{ -199, 1, YYAT_ERROR, 0 },
		{ -200, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_DEFAULT, 141 },
		{ 0, 0, YYAT_DEFAULT, 141 },
		{ 0, 0, YYAT_DEFAULT, 141 },
		{ -179, 1, YYAT_DEFAULT, 51 },
		{ -202, 1, YYAT_ERROR, 0 },
		{ -204, 1, YYAT_ERROR, 0 },
		{ -262, 1, YYAT_ERROR, 0 },
		{ -267, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 54 },
		{ 0, 0, YYAT_REDUCE, 56 },
		{ 0, 0, YYAT_REDUCE, 60 },
		{ 0, 0, YYAT_REDUCE, 61 }
	};
	yystateaction = stateaction;

	yynontermgoto_size = 44;

	static const yynontermgoto_t YYNEARFAR YYBASED_CODE nontermgoto[] = {
		{ 141, 145 },
		{ 141, 39 },
		{ 133, 77 },
		{ 133, 80 },
		{ 133, 78 },
		{ 133, 79 },
		{ 141, 44 },
		{ 141, 35 },
		{ 141, 36 },
		{ 141, 37 },
		{ 141, 42 },
		{ 141, 38 },
		{ 141, 43 },
		{ 52, 102 },
		{ 140, 144 },
		{ 52, 101 },
		{ 51, 100 },
		{ 51, 99 },
		{ 50, 98 },
		{ 50, 97 },
		{ 47, 94 },
		{ 47, 40 },
		{ 139, 143 },
		{ 138, 142 },
		{ 127, 133 },
		{ 126, 132 },
		{ 119, 125 },
		{ 118, 124 },
		{ 117, 123 },
		{ 116, 122 },
		{ 115, 121 },
		{ 114, 120 },
		{ 94, 87 },
		{ 90, 106 },
		{ 81, 105 },
		{ 77, 104 },
		{ 45, 92 },
		{ 39, 85 },
		{ 32, 53 },
		{ 22, 49 },
		{ 21, 48 },
		{ 19, 46 },
		{ 17, 41 },
		{ 0, 4 }
	};
	yynontermgoto = nontermgoto;

	static const yystategoto_t YYNEARFAR YYBASED_CODE stategoto[] = {
		{ 42, -1 },
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
		{ 40, 47 },
		{ 0, -1 },
		{ 39, 47 },
		{ 0, -1 },
		{ 38, 47 },
		{ 37, 47 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 28, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, 133 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 28, -1 },
		{ 0, -1 },
		{ 0, 94 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 34, 47 },
		{ 0, 94 },
		{ 18, 141 },
		{ 0, 94 },
		{ 0, 94 },
		{ 9, -1 },
		{ 7, -1 },
		{ 4, -1 },
		{ 0, 133 },
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
		{ 25, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 25, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 23, -1 },
		{ 0, -1 },
		{ 0, 94 },
		{ 0, -1 },
		{ 29, 141 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, 133 },
		{ 0, -1 },
		{ 0, 133 },
		{ 0, -1 },
		{ 0, -1 },
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
		{ 21, -1 },
		{ 20, -1 },
		{ 26, 141 },
		{ 25, 141 },
		{ 24, 141 },
		{ 23, 141 },
		{ 0, 133 },
		{ 0, 133 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 15, -1 },
		{ 14, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, 133 },
		{ -3, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 20, 141 },
		{ 19, 141 },
		{ 11, 141 },
		{ -3, -1 },
		{ 0, -1 },
		{ 0, -1 },
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
#line 418 ".\\myparser.y"


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


