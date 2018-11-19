#############################################################################
#                     U N R E G I S T E R E D   C O P Y
# 
# You are on day 60 of your 30 day trial period.
# 
# This file was produced by an UNREGISTERED COPY of Parser Generator. It is
# for evaluation purposes only. If you continue to use Parser Generator 30
# days after installation then you are required to purchase a license. For
# more information see the online help or go to the Bumble-Bee Software
# homepage at:
# 
# http://www.bumblebeesoftware.com
# 
# This notice must remain present in the file. It cannot be removed.
#############################################################################

#############################################################################
# myparser.v
# YACC verbose file generated from myparser.y.
# 
# Date: 11/20/18
# Time: 00:41:10
# 
# AYACC Version: 2.07
#############################################################################


##############################################################################
# Rules
##############################################################################

    0  $accept : c_program $end

    1  c_program : MAIN LPRACE RPRACE LBRACE code RBRACE
    2            | MAIN LPRACE VOID RPRACE LBRACE code RBRACE
    3            | VOID MAIN LPRACE RPRACE LBRACE code RBRACE
    4            | VOID MAIN LPRACE VOID RPRACE LBRACE code RBRACE
    5            | INT MAIN LPRACE RPRACE LBRACE code RBRACE
    6            | INT MAIN LPRACE VOID RPRACE LBRACE code RBRACE

    7  code : stmt
    8       | code stmt

    9  stmt : expr SIMICOLON
   10       | asgn_stmt SIMICOLON
   11       | dec_stmt SIMICOLON
   12       | if_stmt SIMICOLON
   13       | while_stmt SIMICOLON
   14       | for_stmt SIMICOLON

   15  type : INT
   16       | DOUBLE
   17       | FLOAT
   18       | CHAR
   19       | BOOL
   20       | VOID

   21  ari_op : PLUS
   22         | MINUS
   23         | MUL
   24         | DIV
   25         | MOD
   26         | INC
   27         | DEC
   28         | INAD
   29         | IOR
   30         | XOR
   31         | NOT
   32         | SHL
   33         | SHR

   34  rel_op : EQ
   35         | GT
   36         | LT
   37         | GE
   38         | LE
   39         | NEQ

   40  log_op : AND
   41         | OR
   42         | OPPOSITE

   43  id : ID
   44     | ID COMMA id

   45  expr : expr ari_op expr
   46       | expr rel_op expr
   47       | expr log_op expr
   48       | LPRACE expr RPRACE
   49       | NUMBER

   50  asgn_stmt : id ASSIGN expr
   51            | asgn_stmt COMMA id

   52  dec_stmt : type id

   53  if_stmt : IF LPRACE expr RPRACE LBRACE stmt RBRACE ELSE LBRACE stmt RBRACE
   54          | IF LPRACE expr RPRACE LBRACE stmt RBRACE
   55          | IF LPRACE id RPRACE LBRACE stmt RBRACE ELSE LBRACE stmt RBRACE
   56          | IF LPRACE id RPRACE LBRACE stmt RBRACE

   57  while_stmt : WHILE LPRACE expr RPRACE LBRACE stmt RBRACE
   58             | WHILE LPRACE id RPRACE LBRACE stmt RBRACE

   59  for_stmt : FOR LPRACE asgn_stmt SIMICOLON expr SIMICOLON expr RPRACE LBRACE stmt RBRACE
   60           | FOR LPRACE id SIMICOLON expr SIMICOLON expr RPRACE LBRACE stmt RBRACE


##############################################################################
# States
##############################################################################

state 0
	$accept : . c_program $end

	INT  shift 1
	VOID  shift 2
	MAIN  shift 3

	c_program  goto 4


state 1
	c_program : INT . MAIN LPRACE RPRACE LBRACE code RBRACE
	c_program : INT . MAIN LPRACE VOID RPRACE LBRACE code RBRACE

	MAIN  shift 5


state 2
	c_program : VOID . MAIN LPRACE RPRACE LBRACE code RBRACE
	c_program : VOID . MAIN LPRACE VOID RPRACE LBRACE code RBRACE

	MAIN  shift 6


state 3
	c_program : MAIN . LPRACE RPRACE LBRACE code RBRACE
	c_program : MAIN . LPRACE VOID RPRACE LBRACE code RBRACE

	LPRACE  shift 7


state 4
	$accept : c_program . $end  (0)

	$end  accept


state 5
	c_program : INT MAIN . LPRACE RPRACE LBRACE code RBRACE
	c_program : INT MAIN . LPRACE VOID RPRACE LBRACE code RBRACE

	LPRACE  shift 8


state 6
	c_program : VOID MAIN . LPRACE RPRACE LBRACE code RBRACE
	c_program : VOID MAIN . LPRACE VOID RPRACE LBRACE code RBRACE

	LPRACE  shift 9


state 7
	c_program : MAIN LPRACE . RPRACE LBRACE code RBRACE
	c_program : MAIN LPRACE . VOID RPRACE LBRACE code RBRACE

	VOID  shift 10
	RPRACE  shift 11


state 8
	c_program : INT MAIN LPRACE . RPRACE LBRACE code RBRACE
	c_program : INT MAIN LPRACE . VOID RPRACE LBRACE code RBRACE

	VOID  shift 12
	RPRACE  shift 13


state 9
	c_program : VOID MAIN LPRACE . RPRACE LBRACE code RBRACE
	c_program : VOID MAIN LPRACE . VOID RPRACE LBRACE code RBRACE

	VOID  shift 14
	RPRACE  shift 15


state 10
	c_program : MAIN LPRACE VOID . RPRACE LBRACE code RBRACE

	RPRACE  shift 16


state 11
	c_program : MAIN LPRACE RPRACE . LBRACE code RBRACE

	LBRACE  shift 17


state 12
	c_program : INT MAIN LPRACE VOID . RPRACE LBRACE code RBRACE

	RPRACE  shift 18


state 13
	c_program : INT MAIN LPRACE RPRACE . LBRACE code RBRACE

	LBRACE  shift 19


state 14
	c_program : VOID MAIN LPRACE VOID . RPRACE LBRACE code RBRACE

	RPRACE  shift 20


state 15
	c_program : VOID MAIN LPRACE RPRACE . LBRACE code RBRACE

	LBRACE  shift 21


state 16
	c_program : MAIN LPRACE VOID RPRACE . LBRACE code RBRACE

	LBRACE  shift 22


state 17
	c_program : MAIN LPRACE RPRACE LBRACE . code RBRACE

	INT  shift 23
	DOUBLE  shift 24
	FLOAT  shift 25
	CHAR  shift 26
	BOOL  shift 27
	VOID  shift 28
	IF  shift 29
	WHILE  shift 30
	FOR  shift 31
	LPRACE  shift 32
	ID  shift 33
	NUMBER  shift 34

	for_stmt  goto 35
	type  goto 36
	expr  goto 37
	asgn_stmt  goto 38
	dec_stmt  goto 39
	stmt  goto 40
	code  goto 41
	if_stmt  goto 42
	while_stmt  goto 43
	id  goto 44


state 18
	c_program : INT MAIN LPRACE VOID RPRACE . LBRACE code RBRACE

	LBRACE  shift 45


state 19
	c_program : INT MAIN LPRACE RPRACE LBRACE . code RBRACE

	INT  shift 23
	DOUBLE  shift 24
	FLOAT  shift 25
	CHAR  shift 26
	BOOL  shift 27
	VOID  shift 28
	IF  shift 29
	WHILE  shift 30
	FOR  shift 31
	LPRACE  shift 32
	ID  shift 33
	NUMBER  shift 34

	for_stmt  goto 35
	type  goto 36
	expr  goto 37
	asgn_stmt  goto 38
	dec_stmt  goto 39
	stmt  goto 40
	code  goto 46
	if_stmt  goto 42
	while_stmt  goto 43
	id  goto 44


state 20
	c_program : VOID MAIN LPRACE VOID RPRACE . LBRACE code RBRACE

	LBRACE  shift 47


state 21
	c_program : VOID MAIN LPRACE RPRACE LBRACE . code RBRACE

	INT  shift 23
	DOUBLE  shift 24
	FLOAT  shift 25
	CHAR  shift 26
	BOOL  shift 27
	VOID  shift 28
	IF  shift 29
	WHILE  shift 30
	FOR  shift 31
	LPRACE  shift 32
	ID  shift 33
	NUMBER  shift 34

	for_stmt  goto 35
	type  goto 36
	expr  goto 37
	asgn_stmt  goto 38
	dec_stmt  goto 39
	stmt  goto 40
	code  goto 48
	if_stmt  goto 42
	while_stmt  goto 43
	id  goto 44


state 22
	c_program : MAIN LPRACE VOID RPRACE LBRACE . code RBRACE

	INT  shift 23
	DOUBLE  shift 24
	FLOAT  shift 25
	CHAR  shift 26
	BOOL  shift 27
	VOID  shift 28
	IF  shift 29
	WHILE  shift 30
	FOR  shift 31
	LPRACE  shift 32
	ID  shift 33
	NUMBER  shift 34

	for_stmt  goto 35
	type  goto 36
	expr  goto 37
	asgn_stmt  goto 38
	dec_stmt  goto 39
	stmt  goto 40
	code  goto 49
	if_stmt  goto 42
	while_stmt  goto 43
	id  goto 44


state 23
	type : INT .  (15)

	.  reduce 15


state 24
	type : DOUBLE .  (16)

	.  reduce 16


state 25
	type : FLOAT .  (17)

	.  reduce 17


state 26
	type : CHAR .  (18)

	.  reduce 18


state 27
	type : BOOL .  (19)

	.  reduce 19


state 28
	type : VOID .  (20)

	.  reduce 20


state 29
	if_stmt : IF . LPRACE id RPRACE LBRACE stmt RBRACE ELSE LBRACE stmt RBRACE
	if_stmt : IF . LPRACE id RPRACE LBRACE stmt RBRACE
	if_stmt : IF . LPRACE expr RPRACE LBRACE stmt RBRACE ELSE LBRACE stmt RBRACE
	if_stmt : IF . LPRACE expr RPRACE LBRACE stmt RBRACE

	LPRACE  shift 50


state 30
	while_stmt : WHILE . LPRACE expr RPRACE LBRACE stmt RBRACE
	while_stmt : WHILE . LPRACE id RPRACE LBRACE stmt RBRACE

	LPRACE  shift 51


state 31
	for_stmt : FOR . LPRACE asgn_stmt SIMICOLON expr SIMICOLON expr RPRACE LBRACE stmt RBRACE
	for_stmt : FOR . LPRACE id SIMICOLON expr SIMICOLON expr RPRACE LBRACE stmt RBRACE

	LPRACE  shift 52


state 32
	expr : LPRACE . expr RPRACE

	LPRACE  shift 32
	NUMBER  shift 34

	expr  goto 53


33: shift-reduce conflict (shift 54, reduce 43) on COMMA
state 33
	id : ID . COMMA id
	id : ID .  (43)

	COMMA  shift 54
	.  reduce 43


state 34
	expr : NUMBER .  (49)

	.  reduce 49


state 35
	stmt : for_stmt . SIMICOLON

	SIMICOLON  shift 55


state 36
	dec_stmt : type . id

	ID  shift 33

	id  goto 56


state 37
	stmt : expr . SIMICOLON
	expr : expr . ari_op expr
	expr : expr . rel_op expr
	expr : expr . log_op expr

	PLUS  shift 57
	MINUS  shift 58
	MUL  shift 59
	DIV  shift 60
	MOD  shift 61
	INC  shift 62
	DEC  shift 63
	INAD  shift 64
	IOR  shift 65
	XOR  shift 66
	NOT  shift 67
	SHL  shift 68
	SHR  shift 69
	EQ  shift 70
	GT  shift 71
	LT  shift 72
	GE  shift 73
	LE  shift 74
	NEQ  shift 75
	AND  shift 76
	OR  shift 77
	OPPOSITE  shift 78
	SIMICOLON  shift 79

	ari_op  goto 80
	log_op  goto 81
	rel_op  goto 82


state 38
	stmt : asgn_stmt . SIMICOLON
	asgn_stmt : asgn_stmt . COMMA id

	COMMA  shift 83
	SIMICOLON  shift 84


state 39
	stmt : dec_stmt . SIMICOLON

	SIMICOLON  shift 85


state 40
	code : stmt .  (7)

	.  reduce 7


state 41
	c_program : MAIN LPRACE RPRACE LBRACE code . RBRACE
	code : code . stmt

	INT  shift 23
	DOUBLE  shift 24
	FLOAT  shift 25
	CHAR  shift 26
	BOOL  shift 27
	VOID  shift 28
	IF  shift 29
	WHILE  shift 30
	FOR  shift 31
	RBRACE  shift 86
	LPRACE  shift 32
	ID  shift 33
	NUMBER  shift 34

	for_stmt  goto 35
	type  goto 36
	expr  goto 37
	asgn_stmt  goto 38
	dec_stmt  goto 39
	stmt  goto 87
	if_stmt  goto 42
	while_stmt  goto 43
	id  goto 44


state 42
	stmt : if_stmt . SIMICOLON

	SIMICOLON  shift 88


state 43
	stmt : while_stmt . SIMICOLON

	SIMICOLON  shift 89


state 44
	asgn_stmt : id . ASSIGN expr

	ASSIGN  shift 90


state 45
	c_program : INT MAIN LPRACE VOID RPRACE LBRACE . code RBRACE

	INT  shift 23
	DOUBLE  shift 24
	FLOAT  shift 25
	CHAR  shift 26
	BOOL  shift 27
	VOID  shift 28
	IF  shift 29
	WHILE  shift 30
	FOR  shift 31
	LPRACE  shift 32
	ID  shift 33
	NUMBER  shift 34

	for_stmt  goto 35
	type  goto 36
	expr  goto 37
	asgn_stmt  goto 38
	dec_stmt  goto 39
	stmt  goto 40
	code  goto 91
	if_stmt  goto 42
	while_stmt  goto 43
	id  goto 44


state 46
	c_program : INT MAIN LPRACE RPRACE LBRACE code . RBRACE
	code : code . stmt

	INT  shift 23
	DOUBLE  shift 24
	FLOAT  shift 25
	CHAR  shift 26
	BOOL  shift 27
	VOID  shift 28
	IF  shift 29
	WHILE  shift 30
	FOR  shift 31
	RBRACE  shift 92
	LPRACE  shift 32
	ID  shift 33
	NUMBER  shift 34

	for_stmt  goto 35
	type  goto 36
	expr  goto 37
	asgn_stmt  goto 38
	dec_stmt  goto 39
	stmt  goto 87
	if_stmt  goto 42
	while_stmt  goto 43
	id  goto 44


state 47
	c_program : VOID MAIN LPRACE VOID RPRACE LBRACE . code RBRACE

	INT  shift 23
	DOUBLE  shift 24
	FLOAT  shift 25
	CHAR  shift 26
	BOOL  shift 27
	VOID  shift 28
	IF  shift 29
	WHILE  shift 30
	FOR  shift 31
	LPRACE  shift 32
	ID  shift 33
	NUMBER  shift 34

	for_stmt  goto 35
	type  goto 36
	expr  goto 37
	asgn_stmt  goto 38
	dec_stmt  goto 39
	stmt  goto 40
	code  goto 93
	if_stmt  goto 42
	while_stmt  goto 43
	id  goto 44


state 48
	c_program : VOID MAIN LPRACE RPRACE LBRACE code . RBRACE
	code : code . stmt

	INT  shift 23
	DOUBLE  shift 24
	FLOAT  shift 25
	CHAR  shift 26
	BOOL  shift 27
	VOID  shift 28
	IF  shift 29
	WHILE  shift 30
	FOR  shift 31
	RBRACE  shift 94
	LPRACE  shift 32
	ID  shift 33
	NUMBER  shift 34

	for_stmt  goto 35
	type  goto 36
	expr  goto 37
	asgn_stmt  goto 38
	dec_stmt  goto 39
	stmt  goto 87
	if_stmt  goto 42
	while_stmt  goto 43
	id  goto 44


state 49
	c_program : MAIN LPRACE VOID RPRACE LBRACE code . RBRACE
	code : code . stmt

	INT  shift 23
	DOUBLE  shift 24
	FLOAT  shift 25
	CHAR  shift 26
	BOOL  shift 27
	VOID  shift 28
	IF  shift 29
	WHILE  shift 30
	FOR  shift 31
	RBRACE  shift 95
	LPRACE  shift 32
	ID  shift 33
	NUMBER  shift 34

	for_stmt  goto 35
	type  goto 36
	expr  goto 37
	asgn_stmt  goto 38
	dec_stmt  goto 39
	stmt  goto 87
	if_stmt  goto 42
	while_stmt  goto 43
	id  goto 44


state 50
	if_stmt : IF LPRACE . id RPRACE LBRACE stmt RBRACE ELSE LBRACE stmt RBRACE
	if_stmt : IF LPRACE . id RPRACE LBRACE stmt RBRACE
	if_stmt : IF LPRACE . expr RPRACE LBRACE stmt RBRACE ELSE LBRACE stmt RBRACE
	if_stmt : IF LPRACE . expr RPRACE LBRACE stmt RBRACE

	LPRACE  shift 32
	ID  shift 33
	NUMBER  shift 34

	expr  goto 96
	id  goto 97


state 51
	while_stmt : WHILE LPRACE . expr RPRACE LBRACE stmt RBRACE
	while_stmt : WHILE LPRACE . id RPRACE LBRACE stmt RBRACE

	LPRACE  shift 32
	ID  shift 33
	NUMBER  shift 34

	expr  goto 98
	id  goto 99


state 52
	for_stmt : FOR LPRACE . asgn_stmt SIMICOLON expr SIMICOLON expr RPRACE LBRACE stmt RBRACE
	for_stmt : FOR LPRACE . id SIMICOLON expr SIMICOLON expr RPRACE LBRACE stmt RBRACE

	ID  shift 33

	asgn_stmt  goto 100
	id  goto 101


state 53
	expr : expr . ari_op expr
	expr : expr . rel_op expr
	expr : expr . log_op expr
	expr : LPRACE expr . RPRACE

	PLUS  shift 57
	MINUS  shift 58
	MUL  shift 59
	DIV  shift 60
	MOD  shift 61
	INC  shift 62
	DEC  shift 63
	INAD  shift 64
	IOR  shift 65
	XOR  shift 66
	NOT  shift 67
	SHL  shift 68
	SHR  shift 69
	EQ  shift 70
	GT  shift 71
	LT  shift 72
	GE  shift 73
	LE  shift 74
	NEQ  shift 75
	AND  shift 76
	OR  shift 77
	OPPOSITE  shift 78
	RPRACE  shift 102

	ari_op  goto 80
	log_op  goto 81
	rel_op  goto 82


state 54
	id : ID COMMA . id

	ID  shift 33

	id  goto 103


state 55
	stmt : for_stmt SIMICOLON .  (14)

	.  reduce 14


state 56
	dec_stmt : type id .  (52)

	.  reduce 52


state 57
	ari_op : PLUS .  (21)

	.  reduce 21


state 58
	ari_op : MINUS .  (22)

	.  reduce 22


state 59
	ari_op : MUL .  (23)

	.  reduce 23


state 60
	ari_op : DIV .  (24)

	.  reduce 24


state 61
	ari_op : MOD .  (25)

	.  reduce 25


state 62
	ari_op : INC .  (26)

	.  reduce 26


state 63
	ari_op : DEC .  (27)

	.  reduce 27


state 64
	ari_op : INAD .  (28)

	.  reduce 28


state 65
	ari_op : IOR .  (29)

	.  reduce 29


state 66
	ari_op : XOR .  (30)

	.  reduce 30


state 67
	ari_op : NOT .  (31)

	.  reduce 31


state 68
	ari_op : SHL .  (32)

	.  reduce 32


state 69
	ari_op : SHR .  (33)

	.  reduce 33


state 70
	rel_op : EQ .  (34)

	.  reduce 34


state 71
	rel_op : GT .  (35)

	.  reduce 35


state 72
	rel_op : LT .  (36)

	.  reduce 36


state 73
	rel_op : GE .  (37)

	.  reduce 37


state 74
	rel_op : LE .  (38)

	.  reduce 38


state 75
	rel_op : NEQ .  (39)

	.  reduce 39


state 76
	log_op : AND .  (40)

	.  reduce 40


state 77
	log_op : OR .  (41)

	.  reduce 41


state 78
	log_op : OPPOSITE .  (42)

	.  reduce 42


state 79
	stmt : expr SIMICOLON .  (9)

	.  reduce 9


state 80
	expr : expr ari_op . expr

	LPRACE  shift 32
	NUMBER  shift 34

	expr  goto 104


state 81
	expr : expr log_op . expr

	LPRACE  shift 32
	NUMBER  shift 34

	expr  goto 105


state 82
	expr : expr rel_op . expr

	LPRACE  shift 32
	NUMBER  shift 34

	expr  goto 106


state 83
	asgn_stmt : asgn_stmt COMMA . id

	ID  shift 33

	id  goto 107


state 84
	stmt : asgn_stmt SIMICOLON .  (10)

	.  reduce 10


state 85
	stmt : dec_stmt SIMICOLON .  (11)

	.  reduce 11


state 86
	c_program : MAIN LPRACE RPRACE LBRACE code RBRACE .  (1)

	.  reduce 1


state 87
	code : code stmt .  (8)

	.  reduce 8


state 88
	stmt : if_stmt SIMICOLON .  (12)

	.  reduce 12


state 89
	stmt : while_stmt SIMICOLON .  (13)

	.  reduce 13


state 90
	asgn_stmt : id ASSIGN . expr

	LPRACE  shift 32
	NUMBER  shift 34

	expr  goto 108


state 91
	c_program : INT MAIN LPRACE VOID RPRACE LBRACE code . RBRACE
	code : code . stmt

	INT  shift 23
	DOUBLE  shift 24
	FLOAT  shift 25
	CHAR  shift 26
	BOOL  shift 27
	VOID  shift 28
	IF  shift 29
	WHILE  shift 30
	FOR  shift 31
	RBRACE  shift 109
	LPRACE  shift 32
	ID  shift 33
	NUMBER  shift 34

	for_stmt  goto 35
	type  goto 36
	expr  goto 37
	asgn_stmt  goto 38
	dec_stmt  goto 39
	stmt  goto 87
	if_stmt  goto 42
	while_stmt  goto 43
	id  goto 44


state 92
	c_program : INT MAIN LPRACE RPRACE LBRACE code RBRACE .  (5)

	.  reduce 5


state 93
	c_program : VOID MAIN LPRACE VOID RPRACE LBRACE code . RBRACE
	code : code . stmt

	INT  shift 23
	DOUBLE  shift 24
	FLOAT  shift 25
	CHAR  shift 26
	BOOL  shift 27
	VOID  shift 28
	IF  shift 29
	WHILE  shift 30
	FOR  shift 31
	RBRACE  shift 110
	LPRACE  shift 32
	ID  shift 33
	NUMBER  shift 34

	for_stmt  goto 35
	type  goto 36
	expr  goto 37
	asgn_stmt  goto 38
	dec_stmt  goto 39
	stmt  goto 87
	if_stmt  goto 42
	while_stmt  goto 43
	id  goto 44


state 94
	c_program : VOID MAIN LPRACE RPRACE LBRACE code RBRACE .  (3)

	.  reduce 3


state 95
	c_program : MAIN LPRACE VOID RPRACE LBRACE code RBRACE .  (2)

	.  reduce 2


state 96
	expr : expr . ari_op expr
	expr : expr . rel_op expr
	expr : expr . log_op expr
	if_stmt : IF LPRACE expr . RPRACE LBRACE stmt RBRACE ELSE LBRACE stmt RBRACE
	if_stmt : IF LPRACE expr . RPRACE LBRACE stmt RBRACE

	PLUS  shift 57
	MINUS  shift 58
	MUL  shift 59
	DIV  shift 60
	MOD  shift 61
	INC  shift 62
	DEC  shift 63
	INAD  shift 64
	IOR  shift 65
	XOR  shift 66
	NOT  shift 67
	SHL  shift 68
	SHR  shift 69
	EQ  shift 70
	GT  shift 71
	LT  shift 72
	GE  shift 73
	LE  shift 74
	NEQ  shift 75
	AND  shift 76
	OR  shift 77
	OPPOSITE  shift 78
	RPRACE  shift 111

	ari_op  goto 80
	log_op  goto 81
	rel_op  goto 82


state 97
	if_stmt : IF LPRACE id . RPRACE LBRACE stmt RBRACE ELSE LBRACE stmt RBRACE
	if_stmt : IF LPRACE id . RPRACE LBRACE stmt RBRACE

	RPRACE  shift 112


state 98
	expr : expr . ari_op expr
	expr : expr . rel_op expr
	expr : expr . log_op expr
	while_stmt : WHILE LPRACE expr . RPRACE LBRACE stmt RBRACE

	PLUS  shift 57
	MINUS  shift 58
	MUL  shift 59
	DIV  shift 60
	MOD  shift 61
	INC  shift 62
	DEC  shift 63
	INAD  shift 64
	IOR  shift 65
	XOR  shift 66
	NOT  shift 67
	SHL  shift 68
	SHR  shift 69
	EQ  shift 70
	GT  shift 71
	LT  shift 72
	GE  shift 73
	LE  shift 74
	NEQ  shift 75
	AND  shift 76
	OR  shift 77
	OPPOSITE  shift 78
	RPRACE  shift 113

	ari_op  goto 80
	log_op  goto 81
	rel_op  goto 82


state 99
	while_stmt : WHILE LPRACE id . RPRACE LBRACE stmt RBRACE

	RPRACE  shift 114


state 100
	asgn_stmt : asgn_stmt . COMMA id
	for_stmt : FOR LPRACE asgn_stmt . SIMICOLON expr SIMICOLON expr RPRACE LBRACE stmt RBRACE

	COMMA  shift 83
	SIMICOLON  shift 115


state 101
	for_stmt : FOR LPRACE id . SIMICOLON expr SIMICOLON expr RPRACE LBRACE stmt RBRACE
	asgn_stmt : id . ASSIGN expr

	ASSIGN  shift 90
	SIMICOLON  shift 116


state 102
	expr : LPRACE expr RPRACE .  (48)

	.  reduce 48


state 103
	id : ID COMMA id .  (44)

	.  reduce 44


104: shift-reduce conflict (shift 57, reduce 45) on PLUS
104: shift-reduce conflict (shift 58, reduce 45) on MINUS
104: shift-reduce conflict (shift 59, reduce 45) on MUL
104: shift-reduce conflict (shift 60, reduce 45) on DIV
104: shift-reduce conflict (shift 61, reduce 45) on MOD
104: shift-reduce conflict (shift 62, reduce 45) on INC
104: shift-reduce conflict (shift 63, reduce 45) on DEC
104: shift-reduce conflict (shift 64, reduce 45) on INAD
104: shift-reduce conflict (shift 65, reduce 45) on IOR
104: shift-reduce conflict (shift 66, reduce 45) on XOR
104: shift-reduce conflict (shift 67, reduce 45) on NOT
104: shift-reduce conflict (shift 68, reduce 45) on SHL
104: shift-reduce conflict (shift 69, reduce 45) on SHR
104: shift-reduce conflict (shift 70, reduce 45) on EQ
104: shift-reduce conflict (shift 71, reduce 45) on GT
104: shift-reduce conflict (shift 72, reduce 45) on LT
104: shift-reduce conflict (shift 73, reduce 45) on GE
104: shift-reduce conflict (shift 74, reduce 45) on LE
104: shift-reduce conflict (shift 75, reduce 45) on NEQ
104: shift-reduce conflict (shift 76, reduce 45) on AND
104: shift-reduce conflict (shift 77, reduce 45) on OR
104: shift-reduce conflict (shift 78, reduce 45) on OPPOSITE
state 104
	expr : expr ari_op expr .  (45)
	expr : expr . ari_op expr
	expr : expr . rel_op expr
	expr : expr . log_op expr

	PLUS  shift 57
	MINUS  shift 58
	MUL  shift 59
	DIV  shift 60
	MOD  shift 61
	INC  shift 62
	DEC  shift 63
	INAD  shift 64
	IOR  shift 65
	XOR  shift 66
	NOT  shift 67
	SHL  shift 68
	SHR  shift 69
	EQ  shift 70
	GT  shift 71
	LT  shift 72
	GE  shift 73
	LE  shift 74
	NEQ  shift 75
	AND  shift 76
	OR  shift 77
	OPPOSITE  shift 78
	.  reduce 45

	ari_op  goto 80
	log_op  goto 81
	rel_op  goto 82


105: shift-reduce conflict (shift 57, reduce 47) on PLUS
105: shift-reduce conflict (shift 58, reduce 47) on MINUS
105: shift-reduce conflict (shift 59, reduce 47) on MUL
105: shift-reduce conflict (shift 60, reduce 47) on DIV
105: shift-reduce conflict (shift 61, reduce 47) on MOD
105: shift-reduce conflict (shift 62, reduce 47) on INC
105: shift-reduce conflict (shift 63, reduce 47) on DEC
105: shift-reduce conflict (shift 64, reduce 47) on INAD
105: shift-reduce conflict (shift 65, reduce 47) on IOR
105: shift-reduce conflict (shift 66, reduce 47) on XOR
105: shift-reduce conflict (shift 67, reduce 47) on NOT
105: shift-reduce conflict (shift 68, reduce 47) on SHL
105: shift-reduce conflict (shift 69, reduce 47) on SHR
105: shift-reduce conflict (shift 70, reduce 47) on EQ
105: shift-reduce conflict (shift 71, reduce 47) on GT
105: shift-reduce conflict (shift 72, reduce 47) on LT
105: shift-reduce conflict (shift 73, reduce 47) on GE
105: shift-reduce conflict (shift 74, reduce 47) on LE
105: shift-reduce conflict (shift 75, reduce 47) on NEQ
105: shift-reduce conflict (shift 76, reduce 47) on AND
105: shift-reduce conflict (shift 77, reduce 47) on OR
105: shift-reduce conflict (shift 78, reduce 47) on OPPOSITE
state 105
	expr : expr . ari_op expr
	expr : expr . rel_op expr
	expr : expr log_op expr .  (47)
	expr : expr . log_op expr

	PLUS  shift 57
	MINUS  shift 58
	MUL  shift 59
	DIV  shift 60
	MOD  shift 61
	INC  shift 62
	DEC  shift 63
	INAD  shift 64
	IOR  shift 65
	XOR  shift 66
	NOT  shift 67
	SHL  shift 68
	SHR  shift 69
	EQ  shift 70
	GT  shift 71
	LT  shift 72
	GE  shift 73
	LE  shift 74
	NEQ  shift 75
	AND  shift 76
	OR  shift 77
	OPPOSITE  shift 78
	.  reduce 47

	ari_op  goto 80
	log_op  goto 81
	rel_op  goto 82


106: shift-reduce conflict (shift 57, reduce 46) on PLUS
106: shift-reduce conflict (shift 58, reduce 46) on MINUS
106: shift-reduce conflict (shift 59, reduce 46) on MUL
106: shift-reduce conflict (shift 60, reduce 46) on DIV
106: shift-reduce conflict (shift 61, reduce 46) on MOD
106: shift-reduce conflict (shift 62, reduce 46) on INC
106: shift-reduce conflict (shift 63, reduce 46) on DEC
106: shift-reduce conflict (shift 64, reduce 46) on INAD
106: shift-reduce conflict (shift 65, reduce 46) on IOR
106: shift-reduce conflict (shift 66, reduce 46) on XOR
106: shift-reduce conflict (shift 67, reduce 46) on NOT
106: shift-reduce conflict (shift 68, reduce 46) on SHL
106: shift-reduce conflict (shift 69, reduce 46) on SHR
106: shift-reduce conflict (shift 70, reduce 46) on EQ
106: shift-reduce conflict (shift 71, reduce 46) on GT
106: shift-reduce conflict (shift 72, reduce 46) on LT
106: shift-reduce conflict (shift 73, reduce 46) on GE
106: shift-reduce conflict (shift 74, reduce 46) on LE
106: shift-reduce conflict (shift 75, reduce 46) on NEQ
106: shift-reduce conflict (shift 76, reduce 46) on AND
106: shift-reduce conflict (shift 77, reduce 46) on OR
106: shift-reduce conflict (shift 78, reduce 46) on OPPOSITE
state 106
	expr : expr . ari_op expr
	expr : expr rel_op expr .  (46)
	expr : expr . rel_op expr
	expr : expr . log_op expr

	PLUS  shift 57
	MINUS  shift 58
	MUL  shift 59
	DIV  shift 60
	MOD  shift 61
	INC  shift 62
	DEC  shift 63
	INAD  shift 64
	IOR  shift 65
	XOR  shift 66
	NOT  shift 67
	SHL  shift 68
	SHR  shift 69
	EQ  shift 70
	GT  shift 71
	LT  shift 72
	GE  shift 73
	LE  shift 74
	NEQ  shift 75
	AND  shift 76
	OR  shift 77
	OPPOSITE  shift 78
	.  reduce 46

	ari_op  goto 80
	log_op  goto 81
	rel_op  goto 82


state 107
	asgn_stmt : asgn_stmt COMMA id .  (51)

	.  reduce 51


state 108
	expr : expr . ari_op expr
	expr : expr . rel_op expr
	expr : expr . log_op expr
	asgn_stmt : id ASSIGN expr .  (50)

	PLUS  shift 57
	MINUS  shift 58
	MUL  shift 59
	DIV  shift 60
	MOD  shift 61
	INC  shift 62
	DEC  shift 63
	INAD  shift 64
	IOR  shift 65
	XOR  shift 66
	NOT  shift 67
	SHL  shift 68
	SHR  shift 69
	EQ  shift 70
	GT  shift 71
	LT  shift 72
	GE  shift 73
	LE  shift 74
	NEQ  shift 75
	AND  shift 76
	OR  shift 77
	OPPOSITE  shift 78
	.  reduce 50

	ari_op  goto 80
	log_op  goto 81
	rel_op  goto 82


state 109
	c_program : INT MAIN LPRACE VOID RPRACE LBRACE code RBRACE .  (6)

	.  reduce 6


state 110
	c_program : VOID MAIN LPRACE VOID RPRACE LBRACE code RBRACE .  (4)

	.  reduce 4


state 111
	if_stmt : IF LPRACE expr RPRACE . LBRACE stmt RBRACE ELSE LBRACE stmt RBRACE
	if_stmt : IF LPRACE expr RPRACE . LBRACE stmt RBRACE

	LBRACE  shift 117


state 112
	if_stmt : IF LPRACE id RPRACE . LBRACE stmt RBRACE ELSE LBRACE stmt RBRACE
	if_stmt : IF LPRACE id RPRACE . LBRACE stmt RBRACE

	LBRACE  shift 118


state 113
	while_stmt : WHILE LPRACE expr RPRACE . LBRACE stmt RBRACE

	LBRACE  shift 119


state 114
	while_stmt : WHILE LPRACE id RPRACE . LBRACE stmt RBRACE

	LBRACE  shift 120


state 115
	for_stmt : FOR LPRACE asgn_stmt SIMICOLON . expr SIMICOLON expr RPRACE LBRACE stmt RBRACE

	LPRACE  shift 32
	NUMBER  shift 34

	expr  goto 121


state 116
	for_stmt : FOR LPRACE id SIMICOLON . expr SIMICOLON expr RPRACE LBRACE stmt RBRACE

	LPRACE  shift 32
	NUMBER  shift 34

	expr  goto 122


state 117
	if_stmt : IF LPRACE expr RPRACE LBRACE . stmt RBRACE ELSE LBRACE stmt RBRACE
	if_stmt : IF LPRACE expr RPRACE LBRACE . stmt RBRACE

	INT  shift 23
	DOUBLE  shift 24
	FLOAT  shift 25
	CHAR  shift 26
	BOOL  shift 27
	VOID  shift 28
	IF  shift 29
	WHILE  shift 30
	FOR  shift 31
	LPRACE  shift 32
	ID  shift 33
	NUMBER  shift 34

	for_stmt  goto 35
	type  goto 36
	expr  goto 37
	asgn_stmt  goto 38
	dec_stmt  goto 39
	stmt  goto 123
	if_stmt  goto 42
	while_stmt  goto 43
	id  goto 44


state 118
	if_stmt : IF LPRACE id RPRACE LBRACE . stmt RBRACE ELSE LBRACE stmt RBRACE
	if_stmt : IF LPRACE id RPRACE LBRACE . stmt RBRACE

	INT  shift 23
	DOUBLE  shift 24
	FLOAT  shift 25
	CHAR  shift 26
	BOOL  shift 27
	VOID  shift 28
	IF  shift 29
	WHILE  shift 30
	FOR  shift 31
	LPRACE  shift 32
	ID  shift 33
	NUMBER  shift 34

	for_stmt  goto 35
	type  goto 36
	expr  goto 37
	asgn_stmt  goto 38
	dec_stmt  goto 39
	stmt  goto 124
	if_stmt  goto 42
	while_stmt  goto 43
	id  goto 44


state 119
	while_stmt : WHILE LPRACE expr RPRACE LBRACE . stmt RBRACE

	INT  shift 23
	DOUBLE  shift 24
	FLOAT  shift 25
	CHAR  shift 26
	BOOL  shift 27
	VOID  shift 28
	IF  shift 29
	WHILE  shift 30
	FOR  shift 31
	LPRACE  shift 32
	ID  shift 33
	NUMBER  shift 34

	for_stmt  goto 35
	type  goto 36
	expr  goto 37
	asgn_stmt  goto 38
	dec_stmt  goto 39
	stmt  goto 125
	if_stmt  goto 42
	while_stmt  goto 43
	id  goto 44


state 120
	while_stmt : WHILE LPRACE id RPRACE LBRACE . stmt RBRACE

	INT  shift 23
	DOUBLE  shift 24
	FLOAT  shift 25
	CHAR  shift 26
	BOOL  shift 27
	VOID  shift 28
	IF  shift 29
	WHILE  shift 30
	FOR  shift 31
	LPRACE  shift 32
	ID  shift 33
	NUMBER  shift 34

	for_stmt  goto 35
	type  goto 36
	expr  goto 37
	asgn_stmt  goto 38
	dec_stmt  goto 39
	stmt  goto 126
	if_stmt  goto 42
	while_stmt  goto 43
	id  goto 44


state 121
	expr : expr . ari_op expr
	expr : expr . rel_op expr
	expr : expr . log_op expr
	for_stmt : FOR LPRACE asgn_stmt SIMICOLON expr . SIMICOLON expr RPRACE LBRACE stmt RBRACE

	PLUS  shift 57
	MINUS  shift 58
	MUL  shift 59
	DIV  shift 60
	MOD  shift 61
	INC  shift 62
	DEC  shift 63
	INAD  shift 64
	IOR  shift 65
	XOR  shift 66
	NOT  shift 67
	SHL  shift 68
	SHR  shift 69
	EQ  shift 70
	GT  shift 71
	LT  shift 72
	GE  shift 73
	LE  shift 74
	NEQ  shift 75
	AND  shift 76
	OR  shift 77
	OPPOSITE  shift 78
	SIMICOLON  shift 127

	ari_op  goto 80
	log_op  goto 81
	rel_op  goto 82


state 122
	expr : expr . ari_op expr
	expr : expr . rel_op expr
	expr : expr . log_op expr
	for_stmt : FOR LPRACE id SIMICOLON expr . SIMICOLON expr RPRACE LBRACE stmt RBRACE

	PLUS  shift 57
	MINUS  shift 58
	MUL  shift 59
	DIV  shift 60
	MOD  shift 61
	INC  shift 62
	DEC  shift 63
	INAD  shift 64
	IOR  shift 65
	XOR  shift 66
	NOT  shift 67
	SHL  shift 68
	SHR  shift 69
	EQ  shift 70
	GT  shift 71
	LT  shift 72
	GE  shift 73
	LE  shift 74
	NEQ  shift 75
	AND  shift 76
	OR  shift 77
	OPPOSITE  shift 78
	SIMICOLON  shift 128

	ari_op  goto 80
	log_op  goto 81
	rel_op  goto 82


state 123
	if_stmt : IF LPRACE expr RPRACE LBRACE stmt . RBRACE ELSE LBRACE stmt RBRACE
	if_stmt : IF LPRACE expr RPRACE LBRACE stmt . RBRACE

	RBRACE  shift 129


state 124
	if_stmt : IF LPRACE id RPRACE LBRACE stmt . RBRACE ELSE LBRACE stmt RBRACE
	if_stmt : IF LPRACE id RPRACE LBRACE stmt . RBRACE

	RBRACE  shift 130


state 125
	while_stmt : WHILE LPRACE expr RPRACE LBRACE stmt . RBRACE

	RBRACE  shift 131


state 126
	while_stmt : WHILE LPRACE id RPRACE LBRACE stmt . RBRACE

	RBRACE  shift 132


state 127
	for_stmt : FOR LPRACE asgn_stmt SIMICOLON expr SIMICOLON . expr RPRACE LBRACE stmt RBRACE

	LPRACE  shift 32
	NUMBER  shift 34

	expr  goto 133


state 128
	for_stmt : FOR LPRACE id SIMICOLON expr SIMICOLON . expr RPRACE LBRACE stmt RBRACE

	LPRACE  shift 32
	NUMBER  shift 34

	expr  goto 134


state 129
	if_stmt : IF LPRACE expr RPRACE LBRACE stmt RBRACE . ELSE LBRACE stmt RBRACE
	if_stmt : IF LPRACE expr RPRACE LBRACE stmt RBRACE .  (54)

	ELSE  shift 135
	.  reduce 54


state 130
	if_stmt : IF LPRACE id RPRACE LBRACE stmt RBRACE . ELSE LBRACE stmt RBRACE
	if_stmt : IF LPRACE id RPRACE LBRACE stmt RBRACE .  (56)

	ELSE  shift 136
	.  reduce 56


state 131
	while_stmt : WHILE LPRACE expr RPRACE LBRACE stmt RBRACE .  (57)

	.  reduce 57


state 132
	while_stmt : WHILE LPRACE id RPRACE LBRACE stmt RBRACE .  (58)

	.  reduce 58


state 133
	expr : expr . ari_op expr
	expr : expr . rel_op expr
	expr : expr . log_op expr
	for_stmt : FOR LPRACE asgn_stmt SIMICOLON expr SIMICOLON expr . RPRACE LBRACE stmt RBRACE

	PLUS  shift 57
	MINUS  shift 58
	MUL  shift 59
	DIV  shift 60
	MOD  shift 61
	INC  shift 62
	DEC  shift 63
	INAD  shift 64
	IOR  shift 65
	XOR  shift 66
	NOT  shift 67
	SHL  shift 68
	SHR  shift 69
	EQ  shift 70
	GT  shift 71
	LT  shift 72
	GE  shift 73
	LE  shift 74
	NEQ  shift 75
	AND  shift 76
	OR  shift 77
	OPPOSITE  shift 78
	RPRACE  shift 137

	ari_op  goto 80
	log_op  goto 81
	rel_op  goto 82


state 134
	expr : expr . ari_op expr
	expr : expr . rel_op expr
	expr : expr . log_op expr
	for_stmt : FOR LPRACE id SIMICOLON expr SIMICOLON expr . RPRACE LBRACE stmt RBRACE

	PLUS  shift 57
	MINUS  shift 58
	MUL  shift 59
	DIV  shift 60
	MOD  shift 61
	INC  shift 62
	DEC  shift 63
	INAD  shift 64
	IOR  shift 65
	XOR  shift 66
	NOT  shift 67
	SHL  shift 68
	SHR  shift 69
	EQ  shift 70
	GT  shift 71
	LT  shift 72
	GE  shift 73
	LE  shift 74
	NEQ  shift 75
	AND  shift 76
	OR  shift 77
	OPPOSITE  shift 78
	RPRACE  shift 138

	ari_op  goto 80
	log_op  goto 81
	rel_op  goto 82


state 135
	if_stmt : IF LPRACE expr RPRACE LBRACE stmt RBRACE ELSE . LBRACE stmt RBRACE

	LBRACE  shift 139


state 136
	if_stmt : IF LPRACE id RPRACE LBRACE stmt RBRACE ELSE . LBRACE stmt RBRACE

	LBRACE  shift 140


state 137
	for_stmt : FOR LPRACE asgn_stmt SIMICOLON expr SIMICOLON expr RPRACE . LBRACE stmt RBRACE

	LBRACE  shift 141


state 138
	for_stmt : FOR LPRACE id SIMICOLON expr SIMICOLON expr RPRACE . LBRACE stmt RBRACE

	LBRACE  shift 142


state 139
	if_stmt : IF LPRACE expr RPRACE LBRACE stmt RBRACE ELSE LBRACE . stmt RBRACE

	INT  shift 23
	DOUBLE  shift 24
	FLOAT  shift 25
	CHAR  shift 26
	BOOL  shift 27
	VOID  shift 28
	IF  shift 29
	WHILE  shift 30
	FOR  shift 31
	LPRACE  shift 32
	ID  shift 33
	NUMBER  shift 34

	for_stmt  goto 35
	type  goto 36
	expr  goto 37
	asgn_stmt  goto 38
	dec_stmt  goto 39
	stmt  goto 143
	if_stmt  goto 42
	while_stmt  goto 43
	id  goto 44


state 140
	if_stmt : IF LPRACE id RPRACE LBRACE stmt RBRACE ELSE LBRACE . stmt RBRACE

	INT  shift 23
	DOUBLE  shift 24
	FLOAT  shift 25
	CHAR  shift 26
	BOOL  shift 27
	VOID  shift 28
	IF  shift 29
	WHILE  shift 30
	FOR  shift 31
	LPRACE  shift 32
	ID  shift 33
	NUMBER  shift 34

	for_stmt  goto 35
	type  goto 36
	expr  goto 37
	asgn_stmt  goto 38
	dec_stmt  goto 39
	stmt  goto 144
	if_stmt  goto 42
	while_stmt  goto 43
	id  goto 44


state 141
	for_stmt : FOR LPRACE asgn_stmt SIMICOLON expr SIMICOLON expr RPRACE LBRACE . stmt RBRACE

	INT  shift 23
	DOUBLE  shift 24
	FLOAT  shift 25
	CHAR  shift 26
	BOOL  shift 27
	VOID  shift 28
	IF  shift 29
	WHILE  shift 30
	FOR  shift 31
	LPRACE  shift 32
	ID  shift 33
	NUMBER  shift 34

	for_stmt  goto 35
	type  goto 36
	expr  goto 37
	asgn_stmt  goto 38
	dec_stmt  goto 39
	stmt  goto 145
	if_stmt  goto 42
	while_stmt  goto 43
	id  goto 44


state 142
	for_stmt : FOR LPRACE id SIMICOLON expr SIMICOLON expr RPRACE LBRACE . stmt RBRACE

	INT  shift 23
	DOUBLE  shift 24
	FLOAT  shift 25
	CHAR  shift 26
	BOOL  shift 27
	VOID  shift 28
	IF  shift 29
	WHILE  shift 30
	FOR  shift 31
	LPRACE  shift 32
	ID  shift 33
	NUMBER  shift 34

	for_stmt  goto 35
	type  goto 36
	expr  goto 37
	asgn_stmt  goto 38
	dec_stmt  goto 39
	stmt  goto 146
	if_stmt  goto 42
	while_stmt  goto 43
	id  goto 44


state 143
	if_stmt : IF LPRACE expr RPRACE LBRACE stmt RBRACE ELSE LBRACE stmt . RBRACE

	RBRACE  shift 147


state 144
	if_stmt : IF LPRACE id RPRACE LBRACE stmt RBRACE ELSE LBRACE stmt . RBRACE

	RBRACE  shift 148


state 145
	for_stmt : FOR LPRACE asgn_stmt SIMICOLON expr SIMICOLON expr RPRACE LBRACE stmt . RBRACE

	RBRACE  shift 149


state 146
	for_stmt : FOR LPRACE id SIMICOLON expr SIMICOLON expr RPRACE LBRACE stmt . RBRACE

	RBRACE  shift 150


state 147
	if_stmt : IF LPRACE expr RPRACE LBRACE stmt RBRACE ELSE LBRACE stmt RBRACE .  (53)

	.  reduce 53


state 148
	if_stmt : IF LPRACE id RPRACE LBRACE stmt RBRACE ELSE LBRACE stmt RBRACE .  (55)

	.  reduce 55


state 149
	for_stmt : FOR LPRACE asgn_stmt SIMICOLON expr SIMICOLON expr RPRACE LBRACE stmt RBRACE .  (59)

	.  reduce 59


state 150
	for_stmt : FOR LPRACE id SIMICOLON expr SIMICOLON expr RPRACE LBRACE stmt RBRACE .  (60)

	.  reduce 60


##############################################################################
# Summary
##############################################################################

State 33 contains 1 shift-reduce conflict(s)
State 104 contains 22 shift-reduce conflict(s)
State 105 contains 22 shift-reduce conflict(s)
State 106 contains 22 shift-reduce conflict(s)


44 token(s), 15 nonterminal(s)
61 grammar rule(s), 151 state(s)


##############################################################################
# End of File
##############################################################################
