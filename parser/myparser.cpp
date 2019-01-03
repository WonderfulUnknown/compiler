/****************************************************************************
*                     U N R E G I S T E R E D   C O P Y
* 
* You are on day 104 of your 30 day trial period.
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
* Date: 01/03/19
* Time: 10:29:20
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
#include <fstream>
// #include <string>
#include "mylexer.h"
#include "Tree.h"

using namespace std;

TreeNode *node = node->stmt_node(com_stmt);
extern ParseTree tree;

#line 57 "myparser.cpp"
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
#line 32 ".\\myparser.y"

	// place any extra initialisation code here

#line 81 "myparser.cpp"
}

/////////////////////////////////////////////////////////////////////////////
// destructor

YYPARSERNAME::~YYPARSERNAME()
{
	// allows virtual functions to be called properly for correct cleanup
	yydestroy();
#line 37 ".\\myparser.y"

	// place any extra cleanup code here

#line 95 "myparser.cpp"
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
#line 82 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(5 - 6);
#line 205 "myparser.cpp"
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
#line 83 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(6 - 7);
#line 218 "myparser.cpp"
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
#line 84 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(6 - 7);
#line 231 "myparser.cpp"
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
#line 85 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(7 - 8);
#line 244 "myparser.cpp"
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
#line 86 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(6 - 7);
#line 257 "myparser.cpp"
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
#line 87 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(7 - 8);
#line 270 "myparser.cpp"
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
#line 93 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);
		tree.root = (*(YYSTYPE YYFAR*)yyvalptr);//只有一个语句时根结点
	
#line 286 "myparser.cpp"
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
#line 98 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(2 - 2);
		(*(YYSTYPE YYFAR*)yyvalptr)->brother = yyattribute(1 - 2);
		
		node->child[0] = (*(YYSTYPE YYFAR*)yyvalptr);
		tree.root = node;
	
#line 305 "myparser.cpp"
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
#line 109 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 2);
#line 318 "myparser.cpp"
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
#line 110 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 2);
#line 331 "myparser.cpp"
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
#line 111 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 2);
#line 344 "myparser.cpp"
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
#line 112 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);
#line 357 "myparser.cpp"
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
#line 113 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);
#line 370 "myparser.cpp"
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
#line 114 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);
#line 383 "myparser.cpp"
			}
		}
		break;
	case 14:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 115 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 2);
#line 396 "myparser.cpp"
			}
		}
		break;
	case 15:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 116 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 2);
#line 409 "myparser.cpp"
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
#line 122 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->stmt_node(type_spe);
		(*(YYSTYPE YYFAR*)yyvalptr)->data_type = INT;
	
#line 425 "myparser.cpp"
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
#line 127 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->stmt_node(type_spe);
		(*(YYSTYPE YYFAR*)yyvalptr)->data_type = DOUBLE;
	
#line 441 "myparser.cpp"
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
#line 132 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->stmt_node(type_spe);
		(*(YYSTYPE YYFAR*)yyvalptr)->data_type = FLOAT;
	
#line 457 "myparser.cpp"
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
#line 137 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->stmt_node(type_spe);
		(*(YYSTYPE YYFAR*)yyvalptr)->data_type = CHAR;
	
#line 473 "myparser.cpp"
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
#line 142 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->stmt_node(type_spe);
		(*(YYSTYPE YYFAR*)yyvalptr)->data_type = BOOL;
	
#line 489 "myparser.cpp"
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
#line 147 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->stmt_node(type_spe);
		(*(YYSTYPE YYFAR*)yyvalptr)->data_type = VOID;
	
#line 505 "myparser.cpp"
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
#line 518 "myparser.cpp"
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
#line 155 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);
#line 531 "myparser.cpp"
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
#line 156 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);
#line 544 "myparser.cpp"
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
#line 158 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->exp_node(oper);
		(*(YYSTYPE YYFAR*)yyvalptr)->attr.op = ASSIGN;
	
#line 560 "myparser.cpp"
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
#line 167 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->exp_node(oper);
		(*(YYSTYPE YYFAR*)yyvalptr)->attr.op = PLUS;
	
#line 576 "myparser.cpp"
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
#line 172 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->exp_node(oper);
		(*(YYSTYPE YYFAR*)yyvalptr)->attr.op = MINUS;
	
#line 592 "myparser.cpp"
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
#line 177 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->exp_node(oper);
		(*(YYSTYPE YYFAR*)yyvalptr)->attr.op = MUL;
	
#line 608 "myparser.cpp"
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
#line 182 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->exp_node(oper);
		(*(YYSTYPE YYFAR*)yyvalptr)->attr.op = DIV;
	
#line 624 "myparser.cpp"
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
#line 187 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->exp_node(oper);
		(*(YYSTYPE YYFAR*)yyvalptr)->attr.op = MOD;
	
#line 640 "myparser.cpp"
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
#line 192 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->exp_node(oper);
		(*(YYSTYPE YYFAR*)yyvalptr)->attr.op = INC;
	
#line 656 "myparser.cpp"
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
#line 197 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->exp_node(oper);
		(*(YYSTYPE YYFAR*)yyvalptr)->attr.op = DEC;
	
#line 672 "myparser.cpp"
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
#line 202 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->exp_node(oper);
		(*(YYSTYPE YYFAR*)yyvalptr)->attr.op = INAD;
	
#line 688 "myparser.cpp"
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
#line 207 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->exp_node(oper);
		(*(YYSTYPE YYFAR*)yyvalptr)->attr.op = IOR;
	
#line 704 "myparser.cpp"
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
#line 212 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->exp_node(oper);
		(*(YYSTYPE YYFAR*)yyvalptr)->attr.op = XOR;
	
#line 720 "myparser.cpp"
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
#line 217 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->exp_node(oper);
		(*(YYSTYPE YYFAR*)yyvalptr)->attr.op = NOT;
	
#line 736 "myparser.cpp"
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
#line 222 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->exp_node(oper);
		(*(YYSTYPE YYFAR*)yyvalptr)->attr.op = SHL;
	
#line 752 "myparser.cpp"
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
#line 227 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->exp_node(oper);
		(*(YYSTYPE YYFAR*)yyvalptr)->attr.op = SHR;
	
#line 768 "myparser.cpp"
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

		(*(YYSTYPE YYFAR*)yyvalptr) = node->exp_node(oper);
		(*(YYSTYPE YYFAR*)yyvalptr)->attr.op = 276;
	
#line 784 "myparser.cpp"
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

		(*(YYSTYPE YYFAR*)yyvalptr) = node->exp_node(oper);
		(*(YYSTYPE YYFAR*)yyvalptr)->attr.op = GT;
	
#line 800 "myparser.cpp"
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

		(*(YYSTYPE YYFAR*)yyvalptr) = node->exp_node(oper);
		(*(YYSTYPE YYFAR*)yyvalptr)->attr.op = LT;
	
#line 816 "myparser.cpp"
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
#line 251 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->exp_node(oper);
		(*(YYSTYPE YYFAR*)yyvalptr)->attr.op = GE;
	
#line 832 "myparser.cpp"
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
#line 256 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->exp_node(oper);
		(*(YYSTYPE YYFAR*)yyvalptr)->attr.op = LE;
	
#line 848 "myparser.cpp"
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
#line 261 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->exp_node(oper);
		(*(YYSTYPE YYFAR*)yyvalptr)->attr.op = NEQ;
	
#line 864 "myparser.cpp"
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
#line 270 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->exp_node(oper);
		(*(YYSTYPE YYFAR*)yyvalptr)->attr.op = AND;
	
#line 880 "myparser.cpp"
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
#line 275 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->exp_node(oper);
		(*(YYSTYPE YYFAR*)yyvalptr)->attr.op = OR;
	
#line 896 "myparser.cpp"
			}
		}
		break;
	case 47:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 280 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->exp_node(oper);
		(*(YYSTYPE YYFAR*)yyvalptr)->attr.op = OPPOSITE;
	
#line 912 "myparser.cpp"
			}
		}
		break;
	case 48:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 289 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->exp_node(id);
		strcpy((*(YYSTYPE YYFAR*)yyvalptr)->attr.name, yyattribute(1 - 1)->attr.name);
		(*(YYSTYPE YYFAR*)yyvalptr)->address = tree.search_table((*(YYSTYPE YYFAR*)yyvalptr)->attr.name);
		(*(YYSTYPE YYFAR*)yyvalptr)->data_type = INT;
		(*(YYSTYPE YYFAR*)yyvalptr)->data_type = tree.id_type[(*(YYSTYPE YYFAR*)yyvalptr)->address];
	
#line 931 "myparser.cpp"
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
#line 297 ".\\myparser.y"
		
		(*(YYSTYPE YYFAR*)yyvalptr) = node->exp_node(id);
		strcpy((*(YYSTYPE YYFAR*)yyvalptr)->attr.name , yyattribute(3 - 3)->attr.name);
		(*(YYSTYPE YYFAR*)yyvalptr)->address = tree.search_table((*(YYSTYPE YYFAR*)yyvalptr)->attr.name);
		(*(YYSTYPE YYFAR*)yyvalptr)->brother = yyattribute(1 - 3);
	
#line 949 "myparser.cpp"
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
#line 308 ".\\myparser.y"

		yyattribute(2 - 3)->child[0] = yyattribute(1 - 3);
		yyattribute(2 - 3)->child[1] = yyattribute(3 - 3);
		(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(2 - 3);
	
#line 966 "myparser.cpp"
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
#line 313 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(2 - 3);
#line 979 "myparser.cpp"
			}
		}
		break;
	case 52:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 315 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->exp_node(number);
		(*(YYSTYPE YYFAR*)yyvalptr)->attr.value = yyattribute(1 - 1)->attr.value;
	
#line 995 "myparser.cpp"
			}
		}
		break;
	case 53:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 319 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);
#line 1008 "myparser.cpp"
			}
		}
		break;
	case 54:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 325 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->stmt_node(asgn_stmt);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[0] = yyattribute(1 - 3);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[1] = yyattribute(3 - 3);
	
#line 1025 "myparser.cpp"
			}
		}
		break;
	case 55:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 331 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->stmt_node(asgn_stmt);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[0] = yyattribute(1 - 3);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[1] = yyattribute(3 - 3);
	
#line 1042 "myparser.cpp"
			}
		}
		break;
	case 56:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 337 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->stmt_node(asgn_stmt);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[0] = yyattribute(1 - 3);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[1] = yyattribute(3 - 3);
	
#line 1059 "myparser.cpp"
			}
		}
		break;
	case 57:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 347 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->stmt_node(dec_stmt);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[0] = yyattribute(1 - 2);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[1] = yyattribute(2 - 2);
		yyattribute(2 - 2)->data_type = yyattribute(1 - 2)->data_type;
		TreeNode *temp;
		temp = yyattribute(2 - 2);
		while(temp)
		{
			temp->data_type = yyattribute(1 - 2)->data_type;
			tree.id_type[temp->address] = yyattribute(1 - 2)->data_type;
			temp = temp->brother;
		}
	
#line 1085 "myparser.cpp"
			}
		}
		break;
	case 58:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[6];
			yyinitdebug((void YYFAR**)yya, 6);
#endif
			{
#line 366 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->stmt_node(if_stmt);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[0] = yyattribute(3 - 5);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[1] = yyattribute(5 - 5);
		sprintf_s(yyattribute(5 - 5)->label.curr_label,sizeof(yyattribute(5 - 5)->label.curr_label), "L%d", tree.label_sum++);//拼接函数
		(*(YYSTYPE YYFAR*)yyvalptr)->label.true_label = yyattribute(5 - 5)->label.curr_label;
	
#line 1104 "myparser.cpp"
			}
		}
		break;
	case 59:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[8];
			yyinitdebug((void YYFAR**)yya, 8);
#endif
			{
#line 391 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->stmt_node(while_stmt);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[0] = yyattribute(3 - 7);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[1] = yyattribute(6 - 7);
		sprintf_s(yyattribute(6 - 7)->label.curr_label,sizeof(yyattribute(6 - 7)->label.curr_label), "L%d", tree.label_sum++);//拼接函数
		(*(YYSTYPE YYFAR*)yyvalptr)->label.true_label = yyattribute(6 - 7)->label.curr_label;
	
#line 1123 "myparser.cpp"
			}
		}
		break;
	case 60:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[8];
			yyinitdebug((void YYFAR**)yya, 8);
#endif
			{
#line 399 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->stmt_node(while_stmt);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[0] = yyattribute(3 - 7);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[1] = yyattribute(6 - 7);
		sprintf_s(yyattribute(6 - 7)->label.curr_label,sizeof(yyattribute(6 - 7)->label.curr_label), "L%d", tree.label_sum++);//拼接函数
		(*(YYSTYPE YYFAR*)yyvalptr)->label.true_label = yyattribute(6 - 7)->label.curr_label;
	
#line 1142 "myparser.cpp"
			}
		}
		break;
	case 61:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[12];
			yyinitdebug((void YYFAR**)yya, 12);
#endif
			{
#line 411 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->stmt_node(for_stmt);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[0] = yyattribute(3 - 11);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[1] = yyattribute(5 - 11);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[2] = yyattribute(7 - 11);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[3]= yyattribute(10 - 11);
		sprintf_s(yyattribute(10 - 11)->label.curr_label,sizeof(yyattribute(10 - 11)->label.curr_label), "L%d", tree.label_sum++);//拼接函数
		(*(YYSTYPE YYFAR*)yyvalptr)->label.true_label = yyattribute(10 - 11)->label.curr_label;
	
#line 1163 "myparser.cpp"
			}
		}
		break;
	case 62:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[12];
			yyinitdebug((void YYFAR**)yya, 12);
#endif
			{
#line 421 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->stmt_node(for_stmt);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[0] = yyattribute(3 - 11);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[1] = yyattribute(5 - 11);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[2] = yyattribute(7 - 11);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[3]= yyattribute(10 - 11);
		sprintf_s(yyattribute(10 - 11)->label.curr_label,sizeof(yyattribute(10 - 11)->label.curr_label), "L%d", tree.label_sum++);//拼接函数
		(*(YYSTYPE YYFAR*)yyvalptr)->label.true_label = yyattribute(10 - 11)->label.curr_label;
	
#line 1184 "myparser.cpp"
			}
		}
		break;
	case 63:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[5];
			yyinitdebug((void YYFAR**)yya, 5);
#endif
			{
#line 435 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->stmt_node(input_stmt);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[0] = yyattribute(4 - 4);
	
#line 1200 "myparser.cpp"
			}
		}
		break;
	case 64:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[5];
			yyinitdebug((void YYFAR**)yya, 5);
#endif
			{
#line 443 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->stmt_node(input_stmt);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[0] = yyattribute(4 - 4);
	
#line 1216 "myparser.cpp"
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
		{ "CIN", 291 },
		{ "COUT", 292 },
		{ "MAIN", 293 },
		{ "ASSIGN", 294 },
		{ "LBRACE", 295 },
		{ "RBRACE", 296 },
		{ "LPRACE", 297 },
		{ "RPRACE", 298 },
		{ "COMMA", 301 },
		{ "SIMICOLON", 302 },
		{ "ID", 304 },
		{ "NUMBER", 305 },
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
		"stmt: input_stmt SIMICOLON",
		"stmt: output_stmt SIMICOLON",
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
		"asgn_stmt: id ASSIGN asgn_stmt",
		"dec_stmt: type id",
		"if_stmt: IF LPRACE exp RPRACE stmt",
		"while_stmt: WHILE LPRACE exp RPRACE LBRACE stmt RBRACE",
		"while_stmt: WHILE LPRACE id RPRACE LBRACE stmt RBRACE",
		"for_stmt: FOR LPRACE asgn_stmt SIMICOLON exp SIMICOLON exp RPRACE LBRACE stmt RBRACE",
		"for_stmt: FOR LPRACE id SIMICOLON exp SIMICOLON exp RPRACE LBRACE stmt RBRACE",
		"input_stmt: CIN GT GT id",
		"output_stmt: COUT LT LT id"
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
		{ 3, 2, 14 },
		{ 3, 2, 15 },
		{ 4, 1, 16 },
		{ 4, 1, 17 },
		{ 4, 1, 18 },
		{ 4, 1, 19 },
		{ 4, 1, 20 },
		{ 4, 1, 21 },
		{ 5, 1, 22 },
		{ 5, 1, 23 },
		{ 5, 1, 24 },
		{ 5, 1, 25 },
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
		{ 6, 1, 37 },
		{ 6, 1, 38 },
		{ 7, 1, 39 },
		{ 7, 1, 40 },
		{ 7, 1, 41 },
		{ 7, 1, 42 },
		{ 7, 1, 43 },
		{ 7, 1, 44 },
		{ 8, 1, 45 },
		{ 8, 1, 46 },
		{ 8, 1, 47 },
		{ 9, 1, 48 },
		{ 9, 3, 49 },
		{ 10, 3, 50 },
		{ 10, 3, 51 },
		{ 10, 1, 52 },
		{ 10, 1, 53 },
		{ 11, 3, 54 },
		{ 11, 3, 55 },
		{ 11, 3, 56 },
		{ 12, 2, 57 },
		{ 13, 5, 58 },
		{ 14, 7, 59 },
		{ 14, 7, 60 },
		{ 15, 11, 61 },
		{ 15, 11, 62 },
		{ 16, 4, 63 },
		{ 17, 4, 64 }
	};
	yyreduction = reduction;

	yytokenaction_size = 155;

	static const yytokenaction_t YYNEARFAR YYBASED_CODE tokenaction[] = {
		{ 138, YYAT_SHIFT, 61 },
		{ 138, YYAT_SHIFT, 62 },
		{ 138, YYAT_SHIFT, 63 },
		{ 138, YYAT_SHIFT, 64 },
		{ 138, YYAT_SHIFT, 65 },
		{ 138, YYAT_SHIFT, 66 },
		{ 138, YYAT_SHIFT, 67 },
		{ 138, YYAT_SHIFT, 68 },
		{ 138, YYAT_SHIFT, 69 },
		{ 138, YYAT_SHIFT, 70 },
		{ 138, YYAT_SHIFT, 71 },
		{ 138, YYAT_SHIFT, 72 },
		{ 138, YYAT_SHIFT, 73 },
		{ 138, YYAT_SHIFT, 74 },
		{ 138, YYAT_SHIFT, 75 },
		{ 138, YYAT_SHIFT, 76 },
		{ 138, YYAT_SHIFT, 77 },
		{ 138, YYAT_SHIFT, 78 },
		{ 138, YYAT_SHIFT, 79 },
		{ 138, YYAT_SHIFT, 80 },
		{ 138, YYAT_SHIFT, 81 },
		{ 138, YYAT_SHIFT, 82 },
		{ 0, YYAT_SHIFT, 1 },
		{ 9, YYAT_SHIFT, 14 },
		{ 8, YYAT_SHIFT, 12 },
		{ 7, YYAT_SHIFT, 10 },
		{ 108, YYAT_SHIFT, 95 },
		{ 0, YYAT_SHIFT, 2 },
		{ 130, YYAT_ERROR, 0 },
		{ 107, YYAT_SHIFT, 89 },
		{ 107, YYAT_SHIFT, 122 },
		{ 138, YYAT_SHIFT, 83 },
		{ 130, YYAT_SHIFT, 134 },
		{ 108, YYAT_SHIFT, 96 },
		{ 108, YYAT_SHIFT, 123 },
		{ 138, YYAT_SHIFT, 140 },
		{ 114, YYAT_SHIFT, 61 },
		{ 114, YYAT_SHIFT, 62 },
		{ 114, YYAT_SHIFT, 63 },
		{ 114, YYAT_SHIFT, 64 },
		{ 114, YYAT_SHIFT, 65 },
		{ 114, YYAT_SHIFT, 66 },
		{ 114, YYAT_SHIFT, 67 },
		{ 114, YYAT_SHIFT, 68 },
		{ 114, YYAT_SHIFT, 69 },
		{ 114, YYAT_SHIFT, 70 },
		{ 114, YYAT_SHIFT, 71 },
		{ 114, YYAT_SHIFT, 72 },
		{ 114, YYAT_SHIFT, 73 },
		{ 114, YYAT_SHIFT, 74 },
		{ 114, YYAT_SHIFT, 75 },
		{ 114, YYAT_SHIFT, 76 },
		{ 114, YYAT_SHIFT, 77 },
		{ 114, YYAT_SHIFT, 78 },
		{ 114, YYAT_SHIFT, 79 },
		{ 114, YYAT_SHIFT, 80 },
		{ 114, YYAT_SHIFT, 81 },
		{ 114, YYAT_SHIFT, 82 },
		{ 0, YYAT_SHIFT, 3 },
		{ 9, YYAT_SHIFT, 15 },
		{ 8, YYAT_SHIFT, 13 },
		{ 7, YYAT_SHIFT, 11 },
		{ 106, YYAT_SHIFT, 121 },
		{ 144, YYAT_SHIFT, 146 },
		{ 143, YYAT_SHIFT, 145 },
		{ 106, YYAT_SHIFT, 96 },
		{ 140, YYAT_SHIFT, 142 },
		{ 114, YYAT_SHIFT, 83 },
		{ 112, YYAT_SHIFT, 61 },
		{ 112, YYAT_SHIFT, 62 },
		{ 112, YYAT_SHIFT, 63 },
		{ 112, YYAT_SHIFT, 64 },
		{ 112, YYAT_SHIFT, 65 },
		{ 112, YYAT_SHIFT, 66 },
		{ 112, YYAT_SHIFT, 67 },
		{ 112, YYAT_SHIFT, 68 },
		{ 112, YYAT_SHIFT, 69 },
		{ 112, YYAT_SHIFT, 70 },
		{ 112, YYAT_SHIFT, 71 },
		{ 112, YYAT_SHIFT, 72 },
		{ 112, YYAT_SHIFT, 73 },
		{ 112, YYAT_SHIFT, 74 },
		{ 112, YYAT_SHIFT, 75 },
		{ 112, YYAT_SHIFT, 76 },
		{ 112, YYAT_SHIFT, 77 },
		{ 112, YYAT_SHIFT, 78 },
		{ 112, YYAT_SHIFT, 79 },
		{ 112, YYAT_SHIFT, 80 },
		{ 112, YYAT_SHIFT, 81 },
		{ 112, YYAT_SHIFT, 82 },
		{ 142, YYAT_SHIFT, 23 },
		{ 142, YYAT_SHIFT, 24 },
		{ 142, YYAT_SHIFT, 25 },
		{ 142, YYAT_SHIFT, 26 },
		{ 142, YYAT_SHIFT, 27 },
		{ 142, YYAT_SHIFT, 28 },
		{ 134, YYAT_SHIFT, 34 },
		{ 139, YYAT_SHIFT, 141 },
		{ 45, YYAT_SHIFT, 95 },
		{ 112, YYAT_SHIFT, 83 },
		{ 137, YYAT_SHIFT, 139 },
		{ 132, YYAT_SHIFT, 136 },
		{ 131, YYAT_SHIFT, 135 },
		{ 129, YYAT_SHIFT, 133 },
		{ 134, YYAT_SHIFT, 36 },
		{ 45, YYAT_SHIFT, 96 },
		{ 125, YYAT_SHIFT, 96 },
		{ 124, YYAT_SHIFT, 96 },
		{ 121, YYAT_SHIFT, 128 },
		{ 120, YYAT_SHIFT, 127 },
		{ 110, YYAT_SHIFT, 35 },
		{ 105, YYAT_SHIFT, 120 },
		{ 104, YYAT_SHIFT, 119 },
		{ 101, YYAT_SHIFT, 118 },
		{ 99, YYAT_SHIFT, 117 },
		{ 97, YYAT_SHIFT, 96 },
		{ 96, YYAT_SHIFT, 116 },
		{ 60, YYAT_SHIFT, 96 },
		{ 142, YYAT_SHIFT, 29 },
		{ 59, YYAT_SHIFT, 111 },
		{ 142, YYAT_SHIFT, 30 },
		{ 142, YYAT_SHIFT, 31 },
		{ 58, YYAT_SHIFT, 110 },
		{ 57, YYAT_SHIFT, 109 },
		{ 142, YYAT_SHIFT, 32 },
		{ 142, YYAT_SHIFT, 33 },
		{ 53, YYAT_SHIFT, 103 },
		{ 52, YYAT_SHIFT, 102 },
		{ 50, YYAT_SHIFT, 100 },
		{ 47, YYAT_SHIFT, 98 },
		{ 44, YYAT_SHIFT, 94 },
		{ 42, YYAT_SHIFT, 92 },
		{ 41, YYAT_SHIFT, 91 },
		{ 40, YYAT_SHIFT, 90 },
		{ 38, YYAT_SHIFT, 84 },
		{ 33, YYAT_SHIFT, 58 },
		{ 32, YYAT_SHIFT, 57 },
		{ 31, YYAT_SHIFT, 56 },
		{ 30, YYAT_SHIFT, 55 },
		{ 29, YYAT_SHIFT, 54 },
		{ 20, YYAT_SHIFT, 51 },
		{ 18, YYAT_SHIFT, 49 },
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
		{ -139, 1, YYAT_ERROR, 0 },
		{ -140, 1, YYAT_ERROR, 0 },
		{ -145, 1, YYAT_ERROR, 0 },
		{ 151, 1, YYAT_ERROR, 0 },
		{ -147, 1, YYAT_ERROR, 0 },
		{ -148, 1, YYAT_ERROR, 0 },
		{ -237, 1, YYAT_ERROR, 0 },
		{ -238, 1, YYAT_ERROR, 0 },
		{ -239, 1, YYAT_ERROR, 0 },
		{ -150, 1, YYAT_ERROR, 0 },
		{ -148, 1, YYAT_ERROR, 0 },
		{ -152, 1, YYAT_ERROR, 0 },
		{ -150, 1, YYAT_ERROR, 0 },
		{ -154, 1, YYAT_ERROR, 0 },
		{ -152, 1, YYAT_ERROR, 0 },
		{ -153, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_DEFAULT, 142 },
		{ -154, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_DEFAULT, 142 },
		{ -155, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_DEFAULT, 142 },
		{ 0, 0, YYAT_DEFAULT, 142 },
		{ 0, 0, YYAT_REDUCE, 17 },
		{ 0, 0, YYAT_REDUCE, 18 },
		{ 0, 0, YYAT_REDUCE, 19 },
		{ 0, 0, YYAT_REDUCE, 20 },
		{ 0, 0, YYAT_REDUCE, 21 },
		{ 0, 0, YYAT_REDUCE, 22 },
		{ -158, 1, YYAT_ERROR, 0 },
		{ -159, 1, YYAT_ERROR, 0 },
		{ -160, 1, YYAT_ERROR, 0 },
		{ -141, 1, YYAT_ERROR, 0 },
		{ -143, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_DEFAULT, 134 },
		{ 0, 0, YYAT_REDUCE, 49 },
		{ 0, 0, YYAT_REDUCE, 53 },
		{ 0, 0, YYAT_REDUCE, 13 },
		{ -168, 1, YYAT_DEFAULT, 130 },
		{ 0, 0, YYAT_REDUCE, 7 },
		{ -169, 1, YYAT_DEFAULT, 107 },
		{ -170, 1, YYAT_ERROR, 0 },
		{ -165, 1, YYAT_DEFAULT, 142 },
		{ 0, 0, YYAT_REDUCE, 12 },
		{ -172, 1, YYAT_ERROR, 0 },
		{ -196, 1, YYAT_REDUCE, 54 },
		{ 0, 0, YYAT_DEFAULT, 110 },
		{ -173, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 14 },
		{ 0, 0, YYAT_DEFAULT, 142 },
		{ -168, 1, YYAT_DEFAULT, 142 },
		{ 0, 0, YYAT_DEFAULT, 142 },
		{ -169, 1, YYAT_DEFAULT, 142 },
		{ -170, 1, YYAT_DEFAULT, 142 },
		{ 0, 0, YYAT_DEFAULT, 134 },
		{ 0, 0, YYAT_DEFAULT, 134 },
		{ 0, 0, YYAT_DEFAULT, 110 },
		{ -154, 1, YYAT_ERROR, 0 },
		{ -156, 1, YYAT_ERROR, 0 },
		{ -179, 1, YYAT_DEFAULT, 138 },
		{ -184, 1, YYAT_REDUCE, 54 },
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
		{ 0, 0, YYAT_REDUCE, 47 },
		{ 0, 0, YYAT_REDUCE, 48 },
		{ 0, 0, YYAT_REDUCE, 26 },
		{ 0, 0, YYAT_REDUCE, 9 },
		{ 0, 0, YYAT_REDUCE, 25 },
		{ 0, 0, YYAT_REDUCE, 24 },
		{ 0, 0, YYAT_DEFAULT, 134 },
		{ 0, 0, YYAT_REDUCE, 23 },
		{ 0, 0, YYAT_DEFAULT, 110 },
		{ 0, 0, YYAT_REDUCE, 10 },
		{ 0, 0, YYAT_REDUCE, 11 },
		{ 0, 0, YYAT_REDUCE, 1 },
		{ 0, 0, YYAT_REDUCE, 8 },
		{ 0, 0, YYAT_REDUCE, 16 },
		{ 0, 0, YYAT_DEFAULT, 134 },
		{ -188, 1, YYAT_ERROR, 0 },
		{ -186, 1, YYAT_REDUCE, 58 },
		{ 0, 0, YYAT_REDUCE, 15 },
		{ -182, 1, YYAT_DEFAULT, 142 },
		{ 0, 0, YYAT_REDUCE, 5 },
		{ -183, 1, YYAT_DEFAULT, 142 },
		{ 0, 0, YYAT_REDUCE, 3 },
		{ 0, 0, YYAT_REDUCE, 2 },
		{ -186, 1, YYAT_DEFAULT, 138 },
		{ -187, 1, YYAT_DEFAULT, 138 },
		{ -236, 1, YYAT_REDUCE, 54 },
		{ -272, 1, YYAT_ERROR, 0 },
		{ -268, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_DEFAULT, 110 },
		{ -194, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 52 },
		{ -195, 1, YYAT_REDUCE, 51 },
		{ 0, 0, YYAT_REDUCE, 56 },
		{ -227, 1, YYAT_REDUCE, 55 },
		{ 0, 0, YYAT_REDUCE, 57 },
		{ 0, 0, YYAT_REDUCE, 50 },
		{ 0, 0, YYAT_REDUCE, 6 },
		{ 0, 0, YYAT_REDUCE, 4 },
		{ 0, 0, YYAT_DEFAULT, 142 },
		{ -186, 1, YYAT_ERROR, 0 },
		{ -187, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_DEFAULT, 134 },
		{ 0, 0, YYAT_DEFAULT, 134 },
		{ -194, 1, YYAT_REDUCE, 64 },
		{ -195, 1, YYAT_REDUCE, 65 },
		{ 0, 0, YYAT_REDUCE, 59 },
		{ 0, 0, YYAT_DEFAULT, 142 },
		{ 0, 0, YYAT_DEFAULT, 142 },
		{ -199, 1, YYAT_DEFAULT, 130 },
		{ -270, 1, YYAT_DEFAULT, 138 },
		{ -194, 1, YYAT_ERROR, 0 },
		{ -195, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_DEFAULT, 134 },
		{ -201, 1, YYAT_DEFAULT, 110 },
		{ 0, 0, YYAT_REDUCE, 60 },
		{ 0, 0, YYAT_REDUCE, 61 },
		{ -198, 1, YYAT_DEFAULT, 138 },
		{ -263, 1, YYAT_ERROR, 0 },
		{ -198, 1, YYAT_ERROR, 0 },
		{ -229, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_DEFAULT, 142 },
		{ -167, 1, YYAT_DEFAULT, 134 },
		{ -232, 1, YYAT_ERROR, 0 },
		{ -233, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 62 },
		{ 0, 0, YYAT_REDUCE, 63 }
	};
	yystateaction = stateaction;

	yynontermgoto_size = 46;

	static const yynontermgoto_t YYNEARFAR YYBASED_CODE nontermgoto[] = {
		{ 142, 144 },
		{ 142, 46 },
		{ 138, 87 },
		{ 138, 88 },
		{ 138, 86 },
		{ 138, 85 },
		{ 141, 143 },
		{ 142, 38 },
		{ 142, 40 },
		{ 142, 41 },
		{ 142, 43 },
		{ 142, 37 },
		{ 142, 48 },
		{ 142, 47 },
		{ 142, 44 },
		{ 95, 45 },
		{ 95, 114 },
		{ 95, 115 },
		{ 56, 108 },
		{ 133, 137 },
		{ 56, 107 },
		{ 134, 60 },
		{ 134, 138 },
		{ 55, 106 },
		{ 55, 105 },
		{ 51, 101 },
		{ 51, 39 },
		{ 128, 132 },
		{ 127, 131 },
		{ 123, 130 },
		{ 122, 129 },
		{ 119, 126 },
		{ 110, 125 },
		{ 109, 124 },
		{ 101, 93 },
		{ 89, 113 },
		{ 87, 112 },
		{ 54, 104 },
		{ 49, 99 },
		{ 46, 97 },
		{ 34, 59 },
		{ 22, 53 },
		{ 21, 52 },
		{ 19, 50 },
		{ 17, 42 },
		{ 0, 4 }
	};
	yynontermgoto = nontermgoto;

	static const yystategoto_t YYNEARFAR YYBASED_CODE stategoto[] = {
		{ 44, -1 },
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
		{ 42, 51 },
		{ 0, -1 },
		{ 41, 51 },
		{ 0, -1 },
		{ 40, 51 },
		{ 39, 51 },
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
		{ 30, 134 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, 138 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, 101 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 30, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 36, 51 },
		{ 0, 101 },
		{ 23, 142 },
		{ 0, 101 },
		{ 0, 101 },
		{ 27, 134 },
		{ 14, -1 },
		{ 9, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, 138 },
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
		{ 26, 134 },
		{ 0, -1 },
		{ 26, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 6, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, 101 },
		{ 0, -1 },
		{ 31, 142 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, 138 },
		{ 0, 138 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 24, -1 },
		{ 23, -1 },
		{ 0, -1 },
		{ 0, 138 },
		{ 0, -1 },
		{ 0, 138 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 28, 142 },
		{ 0, -1 },
		{ 0, -1 },
		{ 20, 134 },
		{ 19, 134 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 25, 142 },
		{ 24, 142 },
		{ 0, 138 },
		{ 0, 138 },
		{ 0, -1 },
		{ 0, -1 },
		{ 9, 134 },
		{ 12, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, 138 },
		{ -3, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 3, 142 },
		{ -3, 95 },
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
			ofstream fout1("error.txt");	
			fout1.close();//清空error文件
			ofstream fout2("code.txt");	
			fout2.close();//清空code文件

			tree.gen_header(); //输出汇编代码头
			freopen("input.txt", "r",stdin);
			n = parser.yyparse();
			freopen("CON", "r", stdin);
			
			tree.gen_dec(tree.root);
			tree.print_tree(tree.root);
		}
	}

	system("pause");
	return n;
}


