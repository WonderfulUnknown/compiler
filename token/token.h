/****************************************************************************
*                     U N R E G I S T E R E D   C O P Y
* 
* You are on day 46 of your 30 day trial period.
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
* token.h
* C++ header file generated from token.l.
* 
* Date: 11/05/18
* Time: 22:38:10
* 
* ALex Version: 2.07
****************************************************************************/

#ifndef _TOKEN_H
#define _TOKEN_H

#include <yyclex.h>

/////////////////////////////////////////////////////////////////////////////
// token

#ifndef YYEXPLEXER
#define YYEXPLEXER
#endif

class YYEXPLEXER YYFAR token : public _YL yyflexer {
public:
	token();
	virtual ~token();

	// backards compatibility with lex
#ifdef input
	virtual int yyinput();
#endif
#ifdef output
	virtual void yyoutput(int ch);
#endif
#ifdef unput
	virtual void yyunput(int ch);
#endif

protected:
	void yytables();
	virtual int yyaction(int action);

public:
#line 23 ".\\token.l"

	// place any extra class members here
   double getnumber();
   int set_table();

#line 67 "token.h"
};

#ifndef YYLEXERNAME
#define YYLEXERNAME token
#endif

#ifndef INITIAL
#define INITIAL 0
#endif

#endif
