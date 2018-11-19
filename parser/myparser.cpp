/****************************************************************************
*                     U N R E G I S T E R E D   C O P Y
* 
* You are on day 60 of your 30 day trial period.
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
* Date: 11/20/18
* Time: 00:41:10
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

Date: 2018年11月15日
****************************************************************************/
// #include <iostream>
// #include <string.h>

#include "mylexer.h"


//using namespace std;
#include "ParseTree.h"
Parse_tree tree;


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
#line 84 ".\\myparser.y"
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
#line 85 ".\\myparser.y"
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
#line 86 ".\\myparser.y"
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
#line 87 ".\\myparser.y"
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
#line 88 ".\\myparser.y"
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
#line 89 ".\\myparser.y"
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
#line 94 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(1 - 1);
#line 283 "myparser.cpp"
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
#line 100 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(1 - 2);
#line 296 "myparser.cpp"
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
#line 101 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(1 - 2);
#line 309 "myparser.cpp"
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
#line 102 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(1 - 2);
#line 322 "myparser.cpp"
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
#line 103 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(1 - 2);
#line 335 "myparser.cpp"
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
#line 104 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(1 - 2);
#line 348 "myparser.cpp"
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
#line 105 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(1 - 2);
#line 361 "myparser.cpp"
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
(*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(1 - 1);
#line 374 "myparser.cpp"
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
(*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(1 - 1);
#line 387 "myparser.cpp"
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
#line 114 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(1 - 1);
#line 400 "myparser.cpp"
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
#line 115 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(1 - 1);
#line 413 "myparser.cpp"
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
#line 116 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(1 - 1);
#line 426 "myparser.cpp"
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
#line 117 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(1 - 1);
#line 439 "myparser.cpp"
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
#line 122 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(1 - 1);
#line 452 "myparser.cpp"
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
#line 123 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(1 - 1);
#line 465 "myparser.cpp"
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
#line 124 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(1 - 1);
#line 478 "myparser.cpp"
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
#line 125 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(1 - 1);
#line 491 "myparser.cpp"
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
#line 126 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(1 - 1);
#line 504 "myparser.cpp"
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
#line 127 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(1 - 1);
#line 517 "myparser.cpp"
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
#line 128 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(1 - 1);
#line 530 "myparser.cpp"
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
#line 129 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(1 - 1);
#line 543 "myparser.cpp"
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
#line 130 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(1 - 1);
#line 556 "myparser.cpp"
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
#line 131 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(1 - 1);
#line 569 "myparser.cpp"
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
#line 132 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(1 - 1);
#line 582 "myparser.cpp"
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
#line 133 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(1 - 1);
#line 595 "myparser.cpp"
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
#line 134 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(1 - 1);
#line 608 "myparser.cpp"
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
#line 139 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(1 - 1);
#line 621 "myparser.cpp"
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
#line 140 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(1 - 1);
#line 634 "myparser.cpp"
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
#line 141 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(1 - 1);
#line 647 "myparser.cpp"
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
#line 142 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(1 - 1);
#line 660 "myparser.cpp"
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
#line 143 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(1 - 1);
#line 673 "myparser.cpp"
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
#line 144 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(1 - 1);
#line 686 "myparser.cpp"
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
#line 149 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(1 - 1);
#line 699 "myparser.cpp"
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
#line 150 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(1 - 1);
#line 712 "myparser.cpp"
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
#line 151 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(1 - 1);
#line 725 "myparser.cpp"
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
#line 158 ".\\myparser.y"
	
		//可能需要考虑孩子的问题	
		(*(YYSTYPE YYFAR*)yyvalptr) = tree.set_node(dec_stmt,-1,-1,$s1,yylval);
	
#line 741 "myparser.cpp"
			}
		}
		break;
	case 42:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 163 ".\\myparser.y"
		
		//可能需要考虑是否可以使用id赋值
		YYSTYPE temp = yyattribute(3 - 3);
		while(temp->brother != NULL)
			temp = temp->brother;
		temp->brother = yyattribute(1 - 3);
	
#line 760 "myparser.cpp"
			}
		}
		break;
	case 43:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 177 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = tree.set_node(expr,yyattribute(2 - 3),-1,-1,-1);
		//可能需要考虑$$是否能.
		(*(YYSTYPE YYFAR*)yyvalptr).first_child = yyattribute(1 - 3);
		//可能需要考虑expr已有兄弟节点
		yyattribute(1 - 3).brother = yyattribute(3 - 3);
	
#line 779 "myparser.cpp"
			}
		}
		break;
	case 44:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 185 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = tree.set_node(expr,yyattribute(2 - 3),-1,-1,-1);
		(*(YYSTYPE YYFAR*)yyvalptr).first_child = yyattribute(1 - 3);
		yyattribute(1 - 3).brother = yyattribute(3 - 3);
	
#line 796 "myparser.cpp"
			}
		}
		break;
	case 45:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 191 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = tree.set_node(expr,yyattribute(2 - 3),-1,-1,-1);
		(*(YYSTYPE YYFAR*)yyvalptr).first_child = yyattribute(1 - 3);
		yyattribute(1 - 3).brother = yyattribute(3 - 3);
	
#line 813 "myparser.cpp"
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
#line 196 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(2 - 3);
#line 826 "myparser.cpp"
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
#line 199 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = tree.set_node(number,-1,$s1,-1,-1);
	
#line 841 "myparser.cpp"
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
#line 207 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = tree.set_node(asgn_stmt,-1,$s3,$s1,yylval);
	
#line 856 "myparser.cpp"
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
#line 211 ".\\myparser.y"

		///////////////!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
	
#line 871 "myparser.cpp"
			}
		}
		break;
	case 50:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 218 ".\\myparser.y"

		//type中的值都是mylexer.h中define的值,注意
		(*(YYSTYPE YYFAR*)yyvalptr) = tree.set_node(dec_stmt,yyattribute(1 - 2),-1,$s2,yylval);
	
#line 887 "myparser.cpp"
			}
		}
		break;
	case 51:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[12];
			yyinitdebug((void YYFAR**)yya, 12);
#endif
			{
#line 233 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = tree.set_node(if_stmt,-1,-1,-1,-1);
		(*(YYSTYPE YYFAR*)yyvalptr).first_child = $s3;
		$s3.brother = $s6;
		$s6.brother = $s10;
	
#line 905 "myparser.cpp"
			}
		}
		break;
	case 52:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[8];
			yyinitdebug((void YYFAR**)yya, 8);
#endif
			{
#line 240 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = tree.set_node(if_stmt,-1,-1,-1,-1);
		(*(YYSTYPE YYFAR*)yyvalptr).first_child = $s3;
		$s3.brother = $s6;
	
#line 922 "myparser.cpp"
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
#line 246 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = tree.set_node(if_stmt,-1,-1,-1,-1);
		(*(YYSTYPE YYFAR*)yyvalptr).first_child = $s3;
		$s3.brother = $s6;
		$s6.brother = $s10;
	
#line 940 "myparser.cpp"
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
#line 253 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = tree.set_node(if_stmt,-1,-1,-1,-1);
		(*(YYSTYPE YYFAR*)yyvalptr).first_child = $s3;
		$s3.brother = $s6;
	
#line 957 "myparser.cpp"
			}
		}
		break;
	case 55:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[8];
			yyinitdebug((void YYFAR**)yya, 8);
#endif
			{
#line 263 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = tree.set_node(while_stmt,-1,-1,-1,-1);
		(*(YYSTYPE YYFAR*)yyvalptr).first_child = $s3;
		$s3.brother = $s6;		
	
#line 974 "myparser.cpp"
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
#line 269 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = tree.set_node(while_stmt,-1,-1,-1,-1);
		(*(YYSTYPE YYFAR*)yyvalptr).first_child = $s3;
		$s3.brother = $s6;		
	
#line 991 "myparser.cpp"
			}
		}
		break;
	case 57:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[12];
			yyinitdebug((void YYFAR**)yya, 12);
#endif
			{
#line 282 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = tree.set_node(for_stmt,-1,-1,-1,-1);
		(*(YYSTYPE YYFAR*)yyvalptr).first_child = $s3;
		$s3.brother = $s5;
		$s5.brother = $s7;
		$s7.brother = $s10;
	
#line 1010 "myparser.cpp"
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
#line 290 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = tree.set_node(for_stmt,-1,-1,-1,-1);
		(*(YYSTYPE YYFAR*)yyvalptr).first_child = $s3;
		$s3.brother = $s5;
		$s5.brother = $s7;
		$s7.brother = $s10;		
	
#line 1029 "myparser.cpp"
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
		"expr: expr ari_op expr",
		"expr: expr rel_op expr",
		"expr: expr log_op expr",
		"expr: LPRACE expr RPRACE",
		"expr: NUMBER",
		"asgn_stmt: id ASSIGN expr",
		"asgn_stmt: asgn_stmt COMMA id",
		"dec_stmt: type id",
		"if_stmt: IF LPRACE expr RPRACE LBRACE stmt RBRACE ELSE LBRACE stmt RBRACE",
		"if_stmt: IF LPRACE expr RPRACE LBRACE stmt RBRACE",
		"if_stmt: IF LPRACE id RPRACE LBRACE stmt RBRACE ELSE LBRACE stmt RBRACE",
		"if_stmt: IF LPRACE id RPRACE LBRACE stmt RBRACE",
		"while_stmt: WHILE LPRACE expr RPRACE LBRACE stmt RBRACE",
		"while_stmt: WHILE LPRACE id RPRACE LBRACE stmt RBRACE",
		"for_stmt: FOR LPRACE asgn_stmt SIMICOLON expr SIMICOLON expr RPRACE LBRACE stmt RBRACE",
		"for_stmt: FOR LPRACE id SIMICOLON expr SIMICOLON expr RPRACE LBRACE stmt RBRACE"
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
		{ 2, 2, -1 },
		{ 3, 2, 7 },
		{ 3, 2, 8 },
		{ 3, 2, 9 },
		{ 3, 2, 10 },
		{ 3, 2, 11 },
		{ 3, 2, 12 },
		{ 4, 1, 13 },
		{ 4, 1, 14 },
		{ 4, 1, 15 },
		{ 4, 1, 16 },
		{ 4, 1, 17 },
		{ 4, 1, 18 },
		{ 5, 1, 19 },
		{ 5, 1, 20 },
		{ 5, 1, 21 },
		{ 5, 1, 22 },
		{ 5, 1, 23 },
		{ 5, 1, 24 },
		{ 5, 1, 25 },
		{ 5, 1, 26 },
		{ 5, 1, 27 },
		{ 5, 1, 28 },
		{ 5, 1, 29 },
		{ 5, 1, 30 },
		{ 5, 1, 31 },
		{ 6, 1, 32 },
		{ 6, 1, 33 },
		{ 6, 1, 34 },
		{ 6, 1, 35 },
		{ 6, 1, 36 },
		{ 6, 1, 37 },
		{ 7, 1, 38 },
		{ 7, 1, 39 },
		{ 7, 1, 40 },
		{ 8, 1, 41 },
		{ 8, 3, 42 },
		{ 9, 3, 43 },
		{ 9, 3, 44 },
		{ 9, 3, 45 },
		{ 9, 3, 46 },
		{ 9, 1, 47 },
		{ 10, 3, 48 },
		{ 10, 3, 49 },
		{ 11, 2, 50 },
		{ 12, 11, 51 },
		{ 12, 7, 52 },
		{ 12, 11, 53 },
		{ 12, 7, 54 },
		{ 13, 7, 55 },
		{ 13, 7, 56 },
		{ 14, 11, 57 },
		{ 14, 11, 58 }
	};
	yyreduction = reduction;

	yytokenaction_size = 195;

	static const yytokenaction_t YYNEARFAR YYBASED_CODE tokenaction[] = {
		{ 134, YYAT_SHIFT, 57 },
		{ 134, YYAT_SHIFT, 58 },
		{ 134, YYAT_SHIFT, 59 },
		{ 134, YYAT_SHIFT, 60 },
		{ 134, YYAT_SHIFT, 61 },
		{ 134, YYAT_SHIFT, 62 },
		{ 134, YYAT_SHIFT, 63 },
		{ 134, YYAT_SHIFT, 64 },
		{ 134, YYAT_SHIFT, 65 },
		{ 134, YYAT_SHIFT, 66 },
		{ 134, YYAT_SHIFT, 67 },
		{ 134, YYAT_SHIFT, 68 },
		{ 134, YYAT_SHIFT, 69 },
		{ 134, YYAT_SHIFT, 70 },
		{ 134, YYAT_SHIFT, 71 },
		{ 134, YYAT_SHIFT, 72 },
		{ 134, YYAT_SHIFT, 73 },
		{ 134, YYAT_SHIFT, 74 },
		{ 134, YYAT_SHIFT, 75 },
		{ 134, YYAT_SHIFT, 76 },
		{ 134, YYAT_SHIFT, 77 },
		{ 134, YYAT_SHIFT, 78 },
		{ 128, YYAT_SHIFT, 32 },
		{ 122, YYAT_ERROR, 0 },
		{ 100, YYAT_SHIFT, 83 },
		{ 100, YYAT_SHIFT, 115 },
		{ 146, YYAT_SHIFT, 150 },
		{ 122, YYAT_SHIFT, 128 },
		{ 145, YYAT_SHIFT, 149 },
		{ 144, YYAT_SHIFT, 148 },
		{ 128, YYAT_SHIFT, 34 },
		{ 143, YYAT_SHIFT, 147 },
		{ 138, YYAT_SHIFT, 142 },
		{ 134, YYAT_SHIFT, 138 },
		{ 108, YYAT_SHIFT, 57 },
		{ 108, YYAT_SHIFT, 58 },
		{ 108, YYAT_SHIFT, 59 },
		{ 108, YYAT_SHIFT, 60 },
		{ 108, YYAT_SHIFT, 61 },
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
		{ 106, YYAT_SHIFT, 76 },
		{ 106, YYAT_SHIFT, 77 },
		{ 106, YYAT_SHIFT, 78 },
		{ 105, YYAT_SHIFT, 57 },
		{ 105, YYAT_SHIFT, 58 },
		{ 105, YYAT_SHIFT, 59 },
		{ 105, YYAT_SHIFT, 60 },
		{ 105, YYAT_SHIFT, 61 },
		{ 105, YYAT_SHIFT, 62 },
		{ 105, YYAT_SHIFT, 63 },
		{ 105, YYAT_SHIFT, 64 },
		{ 105, YYAT_SHIFT, 65 },
		{ 105, YYAT_SHIFT, 66 },
		{ 105, YYAT_SHIFT, 67 },
		{ 105, YYAT_SHIFT, 68 },
		{ 105, YYAT_SHIFT, 69 },
		{ 105, YYAT_SHIFT, 70 },
		{ 105, YYAT_SHIFT, 71 },
		{ 105, YYAT_SHIFT, 72 },
		{ 105, YYAT_SHIFT, 73 },
		{ 105, YYAT_SHIFT, 74 },
		{ 105, YYAT_SHIFT, 75 },
		{ 105, YYAT_SHIFT, 76 },
		{ 105, YYAT_SHIFT, 77 },
		{ 105, YYAT_SHIFT, 78 },
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
		{ 104, YYAT_SHIFT, 78 },
		{ 142, YYAT_SHIFT, 23 },
		{ 142, YYAT_SHIFT, 24 },
		{ 142, YYAT_SHIFT, 25 },
		{ 142, YYAT_SHIFT, 26 },
		{ 142, YYAT_SHIFT, 27 },
		{ 142, YYAT_SHIFT, 28 },
		{ 0, YYAT_SHIFT, 1 },
		{ 9, YYAT_SHIFT, 14 },
		{ 8, YYAT_SHIFT, 12 },
		{ 7, YYAT_SHIFT, 10 },
		{ 137, YYAT_SHIFT, 141 },
		{ 0, YYAT_SHIFT, 2 },
		{ 136, YYAT_SHIFT, 140 },
		{ 135, YYAT_SHIFT, 139 },
		{ 133, YYAT_SHIFT, 137 },
		{ 130, YYAT_SHIFT, 136 },
		{ 129, YYAT_SHIFT, 135 },
		{ 126, YYAT_SHIFT, 132 },
		{ 125, YYAT_SHIFT, 131 },
		{ 124, YYAT_SHIFT, 130 },
		{ 123, YYAT_SHIFT, 129 },
		{ 121, YYAT_SHIFT, 127 },
		{ 114, YYAT_SHIFT, 120 },
		{ 113, YYAT_SHIFT, 119 },
		{ 112, YYAT_SHIFT, 118 },
		{ 111, YYAT_SHIFT, 117 },
		{ 101, YYAT_SHIFT, 116 },
		{ 99, YYAT_SHIFT, 114 },
		{ 142, YYAT_SHIFT, 29 },
		{ 98, YYAT_SHIFT, 113 },
		{ 142, YYAT_SHIFT, 30 },
		{ 142, YYAT_SHIFT, 31 },
		{ 97, YYAT_SHIFT, 112 },
		{ 96, YYAT_SHIFT, 111 },
		{ 93, YYAT_SHIFT, 110 },
		{ 91, YYAT_SHIFT, 109 },
		{ 83, YYAT_SHIFT, 33 },
		{ 53, YYAT_SHIFT, 102 },
		{ 51, YYAT_SHIFT, 33 },
		{ 49, YYAT_SHIFT, 95 },
		{ 0, YYAT_SHIFT, 3 },
		{ 9, YYAT_SHIFT, 15 },
		{ 8, YYAT_SHIFT, 13 },
		{ 7, YYAT_SHIFT, 11 },
		{ 48, YYAT_SHIFT, 94 },
		{ 46, YYAT_SHIFT, 92 },
		{ 44, YYAT_SHIFT, 90 },
		{ 43, YYAT_SHIFT, 89 },
		{ 42, YYAT_SHIFT, 88 },
		{ 41, YYAT_SHIFT, 86 },
		{ 39, YYAT_SHIFT, 85 },
		{ 38, YYAT_SHIFT, 84 },
		{ 37, YYAT_SHIFT, 79 },
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
		{ -97, 1, YYAT_ERROR, 0 },
		{ -98, 1, YYAT_ERROR, 0 },
		{ -103, 1, YYAT_ERROR, 0 },
		{ 191, 1, YYAT_ERROR, 0 },
		{ -105, 1, YYAT_ERROR, 0 },
		{ -106, 1, YYAT_ERROR, 0 },
		{ -131, 1, YYAT_ERROR, 0 },
		{ -132, 1, YYAT_ERROR, 0 },
		{ -133, 1, YYAT_ERROR, 0 },
		{ -108, 1, YYAT_ERROR, 0 },
		{ -106, 1, YYAT_ERROR, 0 },
		{ -110, 1, YYAT_ERROR, 0 },
		{ -108, 1, YYAT_ERROR, 0 },
		{ -112, 1, YYAT_ERROR, 0 },
		{ -110, 1, YYAT_ERROR, 0 },
		{ -111, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_DEFAULT, 142 },
		{ -112, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_DEFAULT, 142 },
		{ -113, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_DEFAULT, 142 },
		{ 0, 0, YYAT_DEFAULT, 142 },
		{ 0, 0, YYAT_REDUCE, 15 },
		{ 0, 0, YYAT_REDUCE, 16 },
		{ 0, 0, YYAT_REDUCE, 17 },
		{ 0, 0, YYAT_REDUCE, 18 },
		{ 0, 0, YYAT_REDUCE, 19 },
		{ 0, 0, YYAT_REDUCE, 20 },
		{ -116, 1, YYAT_ERROR, 0 },
		{ -117, 1, YYAT_ERROR, 0 },
		{ -118, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_DEFAULT, 128 },
		{ -123, 1, YYAT_REDUCE, 43 },
		{ 0, 0, YYAT_REDUCE, 49 },
		{ -125, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_DEFAULT, 83 },
		{ -126, 1, YYAT_DEFAULT, 122 },
		{ -127, 1, YYAT_DEFAULT, 100 },
		{ -128, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 7 },
		{ -123, 1, YYAT_DEFAULT, 142 },
		{ -130, 1, YYAT_ERROR, 0 },
		{ -131, 1, YYAT_ERROR, 0 },
		{ -124, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_DEFAULT, 142 },
		{ -127, 1, YYAT_DEFAULT, 142 },
		{ 0, 0, YYAT_DEFAULT, 142 },
		{ -128, 1, YYAT_DEFAULT, 142 },
		{ -133, 1, YYAT_DEFAULT, 142 },
		{ 0, 0, YYAT_DEFAULT, 51 },
		{ -142, 1, YYAT_DEFAULT, 128 },
		{ 0, 0, YYAT_DEFAULT, 83 },
		{ -137, 1, YYAT_DEFAULT, 134 },
		{ 0, 0, YYAT_DEFAULT, 83 },
		{ 0, 0, YYAT_REDUCE, 14 },
		{ 0, 0, YYAT_REDUCE, 52 },
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
		{ 0, 0, YYAT_REDUCE, 1 },
		{ 0, 0, YYAT_REDUCE, 8 },
		{ 0, 0, YYAT_REDUCE, 12 },
		{ 0, 0, YYAT_REDUCE, 13 },
		{ 0, 0, YYAT_DEFAULT, 128 },
		{ -137, 1, YYAT_DEFAULT, 142 },
		{ 0, 0, YYAT_REDUCE, 5 },
		{ -138, 1, YYAT_DEFAULT, 142 },
		{ 0, 0, YYAT_REDUCE, 3 },
		{ 0, 0, YYAT_REDUCE, 2 },
		{ -141, 1, YYAT_DEFAULT, 134 },
		{ -142, 1, YYAT_ERROR, 0 },
		{ -145, 1, YYAT_DEFAULT, 134 },
		{ -147, 1, YYAT_ERROR, 0 },
		{ -275, 1, YYAT_ERROR, 0 },
		{ -152, 1, YYAT_DEFAULT, 44 },
		{ 0, 0, YYAT_REDUCE, 48 },
		{ 0, 0, YYAT_REDUCE, 44 },
		{ -163, 1, YYAT_REDUCE, 45 },
		{ -185, 1, YYAT_REDUCE, 47 },
		{ -207, 1, YYAT_REDUCE, 46 },
		{ 0, 0, YYAT_REDUCE, 51 },
		{ -229, 1, YYAT_REDUCE, 50 },
		{ 0, 0, YYAT_REDUCE, 6 },
		{ 0, 0, YYAT_REDUCE, 4 },
		{ -146, 1, YYAT_ERROR, 0 },
		{ -147, 1, YYAT_ERROR, 0 },
		{ -148, 1, YYAT_ERROR, 0 },
		{ -149, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_DEFAULT, 128 },
		{ 0, 0, YYAT_DEFAULT, 128 },
		{ 0, 0, YYAT_DEFAULT, 142 },
		{ 0, 0, YYAT_DEFAULT, 142 },
		{ 0, 0, YYAT_DEFAULT, 142 },
		{ 0, 0, YYAT_DEFAULT, 142 },
		{ -157, 1, YYAT_DEFAULT, 122 },
		{ -273, 1, YYAT_DEFAULT, 134 },
		{ -152, 1, YYAT_ERROR, 0 },
		{ -153, 1, YYAT_ERROR, 0 },
		{ -154, 1, YYAT_ERROR, 0 },
		{ -155, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_DEFAULT, 128 },
		{ -273, 1, YYAT_ERROR, 0 },
		{ -148, 1, YYAT_REDUCE, 54 },
		{ -149, 1, YYAT_REDUCE, 56 },
		{ 0, 0, YYAT_REDUCE, 57 },
		{ 0, 0, YYAT_REDUCE, 58 },
		{ -160, 1, YYAT_DEFAULT, 134 },
		{ -263, 1, YYAT_ERROR, 0 },
		{ -158, 1, YYAT_ERROR, 0 },
		{ -159, 1, YYAT_ERROR, 0 },
		{ -161, 1, YYAT_ERROR, 0 },
		{ -261, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_DEFAULT, 142 },
		{ 0, 0, YYAT_DEFAULT, 142 },
		{ 0, 0, YYAT_DEFAULT, 142 },
		{ -135, 1, YYAT_DEFAULT, 51 },
		{ -263, 1, YYAT_ERROR, 0 },
		{ -265, 1, YYAT_ERROR, 0 },
		{ -266, 1, YYAT_ERROR, 0 },
		{ -268, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 53 },
		{ 0, 0, YYAT_REDUCE, 55 },
		{ 0, 0, YYAT_REDUCE, 59 },
		{ 0, 0, YYAT_REDUCE, 60 }
	};
	yystateaction = stateaction;

	yynontermgoto_size = 46;

	static const yynontermgoto_t YYNEARFAR YYBASED_CODE nontermgoto[] = {
		{ 142, 146 },
		{ 142, 36 },
		{ 134, 80 },
		{ 134, 82 },
		{ 134, 81 },
		{ 142, 44 },
		{ 142, 37 },
		{ 142, 38 },
		{ 142, 39 },
		{ 142, 42 },
		{ 142, 43 },
		{ 142, 35 },
		{ 52, 101 },
		{ 141, 145 },
		{ 52, 100 },
		{ 51, 99 },
		{ 51, 98 },
		{ 50, 97 },
		{ 50, 96 },
		{ 47, 93 },
		{ 47, 40 },
		{ 140, 144 },
		{ 139, 143 },
		{ 128, 134 },
		{ 127, 133 },
		{ 120, 126 },
		{ 119, 125 },
		{ 118, 124 },
		{ 117, 123 },
		{ 116, 122 },
		{ 115, 121 },
		{ 93, 87 },
		{ 90, 108 },
		{ 83, 107 },
		{ 82, 106 },
		{ 81, 105 },
		{ 80, 104 },
		{ 54, 103 },
		{ 45, 91 },
		{ 36, 56 },
		{ 32, 53 },
		{ 22, 49 },
		{ 21, 48 },
		{ 19, 46 },
		{ 17, 41 },
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
		{ 42, 47 },
		{ 0, -1 },
		{ 41, 47 },
		{ 0, -1 },
		{ 40, 47 },
		{ 39, 47 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 31, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 31, -1 },
		{ 0, 134 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, 93 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 36, 47 },
		{ 0, 93 },
		{ 17, 142 },
		{ 0, 93 },
		{ 0, 93 },
		{ 9, -1 },
		{ 7, -1 },
		{ 4, -1 },
		{ 0, 134 },
		{ 29, -1 },
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
		{ 27, -1 },
		{ 26, -1 },
		{ 25, -1 },
		{ 25, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 23, -1 },
		{ 0, 93 },
		{ 0, -1 },
		{ 28, 142 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, 134 },
		{ 0, -1 },
		{ 0, 134 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, 134 },
		{ 0, 134 },
		{ 0, 134 },
		{ 0, -1 },
		{ 0, 134 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 21, -1 },
		{ 20, -1 },
		{ 25, 142 },
		{ 24, 142 },
		{ 23, 142 },
		{ 22, 142 },
		{ 0, 134 },
		{ 0, 134 },
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
		{ 0, 134 },
		{ -3, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 19, 142 },
		{ 18, 142 },
		{ 10, 142 },
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
#line 318 ".\\myparser.y"


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


