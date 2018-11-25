#############################################################################
#                     U N R E G I S T E R E D   C O P Y
# 
# You are on day 66 of your 30 day trial period.
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
# Date: 11/25/18
# Time: 17:19:21
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

   21  op : ari_op
   22     | rel_op
   23     | log_op

   24  ari_op : PLUS
   25         | MINUS
   26         | MUL
   27         | DIV
   28         | MOD
   29         | INC
   30         | DEC
   31         | INAD
   32         | IOR
   33         | XOR
   34         | NOT
   35         | SHL
   36         | SHR

   37  rel_op : EQ
   38         | GT
   39         | LT
   40         | GE
   41         | LE
   42         | NEQ

   43  log_op : AND
   44         | OR
   45         | OPPOSITE

   46  id : ID
   47     | ID COMMA id

   48  expr : expr op expr
   49       | LPRACE expr RPRACE
   50       | NUMBER

   51  asgn_stmt : id ASSIGN expr
   52            | asgn_stmt COMMA id

   53  dec_stmt : type id

   54  if_stmt : IF LPRACE expr RPRACE LBRACE stmt RBRACE ELSE LBRACE stmt RBRACE
   55          | IF LPRACE expr RPRACE LBRACE stmt RBRACE
   56          | IF LPRACE id RPRACE LBRACE stmt RBRACE ELSE LBRACE stmt RBRACE
   57          | IF LPRACE id RPRACE LBRACE stmt RBRACE

   58  while_stmt : WHILE LPRACE expr RPRACE LBRACE stmt RBRACE
   59             | WHILE LPRACE id RPRACE LBRACE stmt RBRACE

   60  for_stmt : FOR LPRACE asgn_stmt SIMICOLON expr SIMICOLON expr RPRACE LBRACE stmt RBRACE
   61           | FOR LPRACE id SIMICOLON expr SIMICOLON expr RPRACE LBRACE stmt RBRACE


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

	asgn_stmt  goto 35
	while_stmt  goto 36
	dec_stmt  goto 37
	stmt  goto 38
	if_stmt  goto 39
	type  goto 40
	code  goto 41
	for_stmt  goto 42
	expr  goto 43
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

	asgn_stmt  goto 35
	while_stmt  goto 36
	dec_stmt  goto 37
	stmt  goto 38
	if_stmt  goto 39
	type  goto 40
	code  goto 46
	for_stmt  goto 42
	expr  goto 43
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

	asgn_stmt  goto 35
	while_stmt  goto 36
	dec_stmt  goto 37
	stmt  goto 38
	if_stmt  goto 39
	type  goto 40
	code  goto 48
	for_stmt  goto 42
	expr  goto 43
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

	asgn_stmt  goto 35
	while_stmt  goto 36
	dec_stmt  goto 37
	stmt  goto 38
	if_stmt  goto 39
	type  goto 40
	code  goto 49
	for_stmt  goto 42
	expr  goto 43
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
	if_stmt : IF . LPRACE expr RPRACE LBRACE stmt RBRACE
	if_stmt : IF . LPRACE id RPRACE LBRACE stmt RBRACE ELSE LBRACE stmt RBRACE
	if_stmt : IF . LPRACE id RPRACE LBRACE stmt RBRACE
	if_stmt : IF . LPRACE expr RPRACE LBRACE stmt RBRACE ELSE LBRACE stmt RBRACE

	LPRACE  shift 50


state 30
	while_stmt : WHILE . LPRACE id RPRACE LBRACE stmt RBRACE
	while_stmt : WHILE . LPRACE expr RPRACE LBRACE stmt RBRACE

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


33: shift-reduce conflict (shift 54, reduce 46) on COMMA
state 33
	id : ID . COMMA id
	id : ID .  (46)

	COMMA  shift 54
	.  reduce 46


state 34
	expr : NUMBER .  (50)

	.  reduce 50


state 35
	stmt : asgn_stmt . SIMICOLON
	asgn_stmt : asgn_stmt . COMMA id

	COMMA  shift 55
	SIMICOLON  shift 56


state 36
	stmt : while_stmt . SIMICOLON

	SIMICOLON  shift 57


state 37
	stmt : dec_stmt . SIMICOLON

	SIMICOLON  shift 58


state 38
	code : stmt .  (7)

	.  reduce 7


state 39
	stmt : if_stmt . SIMICOLON

	SIMICOLON  shift 59


state 40
	dec_stmt : type . id

	ID  shift 33

	id  goto 60


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
	RBRACE  shift 61
	LPRACE  shift 32
	ID  shift 33
	NUMBER  shift 34

	asgn_stmt  goto 35
	while_stmt  goto 36
	dec_stmt  goto 37
	stmt  goto 62
	if_stmt  goto 39
	type  goto 40
	for_stmt  goto 42
	expr  goto 43
	id  goto 44


state 42
	stmt : for_stmt . SIMICOLON

	SIMICOLON  shift 63


state 43
	stmt : expr . SIMICOLON
	expr : expr . op expr

	PLUS  shift 64
	MINUS  shift 65
	MUL  shift 66
	DIV  shift 67
	MOD  shift 68
	INC  shift 69
	DEC  shift 70
	INAD  shift 71
	IOR  shift 72
	XOR  shift 73
	NOT  shift 74
	SHL  shift 75
	SHR  shift 76
	EQ  shift 77
	GT  shift 78
	LT  shift 79
	GE  shift 80
	LE  shift 81
	NEQ  shift 82
	AND  shift 83
	OR  shift 84
	OPPOSITE  shift 85
	SIMICOLON  shift 86

	ari_op  goto 87
	rel_op  goto 88
	log_op  goto 89
	op  goto 90


state 44
	asgn_stmt : id . ASSIGN expr

	ASSIGN  shift 91


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

	asgn_stmt  goto 35
	while_stmt  goto 36
	dec_stmt  goto 37
	stmt  goto 38
	if_stmt  goto 39
	type  goto 40
	code  goto 92
	for_stmt  goto 42
	expr  goto 43
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
	RBRACE  shift 93
	LPRACE  shift 32
	ID  shift 33
	NUMBER  shift 34

	asgn_stmt  goto 35
	while_stmt  goto 36
	dec_stmt  goto 37
	stmt  goto 62
	if_stmt  goto 39
	type  goto 40
	for_stmt  goto 42
	expr  goto 43
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

	asgn_stmt  goto 35
	while_stmt  goto 36
	dec_stmt  goto 37
	stmt  goto 38
	if_stmt  goto 39
	type  goto 40
	code  goto 94
	for_stmt  goto 42
	expr  goto 43
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
	RBRACE  shift 95
	LPRACE  shift 32
	ID  shift 33
	NUMBER  shift 34

	asgn_stmt  goto 35
	while_stmt  goto 36
	dec_stmt  goto 37
	stmt  goto 62
	if_stmt  goto 39
	type  goto 40
	for_stmt  goto 42
	expr  goto 43
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
	RBRACE  shift 96
	LPRACE  shift 32
	ID  shift 33
	NUMBER  shift 34

	asgn_stmt  goto 35
	while_stmt  goto 36
	dec_stmt  goto 37
	stmt  goto 62
	if_stmt  goto 39
	type  goto 40
	for_stmt  goto 42
	expr  goto 43
	id  goto 44


state 50
	if_stmt : IF LPRACE . expr RPRACE LBRACE stmt RBRACE
	if_stmt : IF LPRACE . id RPRACE LBRACE stmt RBRACE ELSE LBRACE stmt RBRACE
	if_stmt : IF LPRACE . id RPRACE LBRACE stmt RBRACE
	if_stmt : IF LPRACE . expr RPRACE LBRACE stmt RBRACE ELSE LBRACE stmt RBRACE

	LPRACE  shift 32
	ID  shift 33
	NUMBER  shift 34

	expr  goto 97
	id  goto 98


state 51
	while_stmt : WHILE LPRACE . id RPRACE LBRACE stmt RBRACE
	while_stmt : WHILE LPRACE . expr RPRACE LBRACE stmt RBRACE

	LPRACE  shift 32
	ID  shift 33
	NUMBER  shift 34

	expr  goto 99
	id  goto 100


state 52
	for_stmt : FOR LPRACE . asgn_stmt SIMICOLON expr SIMICOLON expr RPRACE LBRACE stmt RBRACE
	for_stmt : FOR LPRACE . id SIMICOLON expr SIMICOLON expr RPRACE LBRACE stmt RBRACE

	ID  shift 33

	asgn_stmt  goto 101
	id  goto 102


state 53
	expr : LPRACE expr . RPRACE
	expr : expr . op expr

	PLUS  shift 64
	MINUS  shift 65
	MUL  shift 66
	DIV  shift 67
	MOD  shift 68
	INC  shift 69
	DEC  shift 70
	INAD  shift 71
	IOR  shift 72
	XOR  shift 73
	NOT  shift 74
	SHL  shift 75
	SHR  shift 76
	EQ  shift 77
	GT  shift 78
	LT  shift 79
	GE  shift 80
	LE  shift 81
	NEQ  shift 82
	AND  shift 83
	OR  shift 84
	OPPOSITE  shift 85
	RPRACE  shift 103

	ari_op  goto 87
	rel_op  goto 88
	log_op  goto 89
	op  goto 90


state 54
	id : ID COMMA . id

	ID  shift 33

	id  goto 104


state 55
	asgn_stmt : asgn_stmt COMMA . id

	ID  shift 33

	id  goto 105


state 56
	stmt : asgn_stmt SIMICOLON .  (10)

	.  reduce 10


state 57
	stmt : while_stmt SIMICOLON .  (13)

	.  reduce 13


state 58
	stmt : dec_stmt SIMICOLON .  (11)

	.  reduce 11


state 59
	stmt : if_stmt SIMICOLON .  (12)

	.  reduce 12


state 60
	dec_stmt : type id .  (53)

	.  reduce 53


state 61
	c_program : MAIN LPRACE RPRACE LBRACE code RBRACE .  (1)

	.  reduce 1


state 62
	code : code stmt .  (8)

	.  reduce 8


state 63
	stmt : for_stmt SIMICOLON .  (14)

	.  reduce 14


state 64
	ari_op : PLUS .  (24)

	.  reduce 24


state 65
	ari_op : MINUS .  (25)

	.  reduce 25


state 66
	ari_op : MUL .  (26)

	.  reduce 26


state 67
	ari_op : DIV .  (27)

	.  reduce 27


state 68
	ari_op : MOD .  (28)

	.  reduce 28


state 69
	ari_op : INC .  (29)

	.  reduce 29


state 70
	ari_op : DEC .  (30)

	.  reduce 30


state 71
	ari_op : INAD .  (31)

	.  reduce 31


state 72
	ari_op : IOR .  (32)

	.  reduce 32


state 73
	ari_op : XOR .  (33)

	.  reduce 33


state 74
	ari_op : NOT .  (34)

	.  reduce 34


state 75
	ari_op : SHL .  (35)

	.  reduce 35


state 76
	ari_op : SHR .  (36)

	.  reduce 36


state 77
	rel_op : EQ .  (37)

	.  reduce 37


state 78
	rel_op : GT .  (38)

	.  reduce 38


state 79
	rel_op : LT .  (39)

	.  reduce 39


state 80
	rel_op : GE .  (40)

	.  reduce 40


state 81
	rel_op : LE .  (41)

	.  reduce 41


state 82
	rel_op : NEQ .  (42)

	.  reduce 42


state 83
	log_op : AND .  (43)

	.  reduce 43


state 84
	log_op : OR .  (44)

	.  reduce 44


state 85
	log_op : OPPOSITE .  (45)

	.  reduce 45


state 86
	stmt : expr SIMICOLON .  (9)

	.  reduce 9


state 87
	op : ari_op .  (21)

	.  reduce 21


state 88
	op : rel_op .  (22)

	.  reduce 22


state 89
	op : log_op .  (23)

	.  reduce 23


state 90
	expr : expr op . expr

	LPRACE  shift 32
	NUMBER  shift 34

	expr  goto 106


state 91
	asgn_stmt : id ASSIGN . expr

	LPRACE  shift 32
	NUMBER  shift 34

	expr  goto 107


state 92
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
	RBRACE  shift 108
	LPRACE  shift 32
	ID  shift 33
	NUMBER  shift 34

	asgn_stmt  goto 35
	while_stmt  goto 36
	dec_stmt  goto 37
	stmt  goto 62
	if_stmt  goto 39
	type  goto 40
	for_stmt  goto 42
	expr  goto 43
	id  goto 44


state 93
	c_program : INT MAIN LPRACE RPRACE LBRACE code RBRACE .  (5)

	.  reduce 5


state 94
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
	RBRACE  shift 109
	LPRACE  shift 32
	ID  shift 33
	NUMBER  shift 34

	asgn_stmt  goto 35
	while_stmt  goto 36
	dec_stmt  goto 37
	stmt  goto 62
	if_stmt  goto 39
	type  goto 40
	for_stmt  goto 42
	expr  goto 43
	id  goto 44


state 95
	c_program : VOID MAIN LPRACE RPRACE LBRACE code RBRACE .  (3)

	.  reduce 3


state 96
	c_program : MAIN LPRACE VOID RPRACE LBRACE code RBRACE .  (2)

	.  reduce 2


state 97
	if_stmt : IF LPRACE expr . RPRACE LBRACE stmt RBRACE
	if_stmt : IF LPRACE expr . RPRACE LBRACE stmt RBRACE ELSE LBRACE stmt RBRACE
	expr : expr . op expr

	PLUS  shift 64
	MINUS  shift 65
	MUL  shift 66
	DIV  shift 67
	MOD  shift 68
	INC  shift 69
	DEC  shift 70
	INAD  shift 71
	IOR  shift 72
	XOR  shift 73
	NOT  shift 74
	SHL  shift 75
	SHR  shift 76
	EQ  shift 77
	GT  shift 78
	LT  shift 79
	GE  shift 80
	LE  shift 81
	NEQ  shift 82
	AND  shift 83
	OR  shift 84
	OPPOSITE  shift 85
	RPRACE  shift 110

	ari_op  goto 87
	rel_op  goto 88
	log_op  goto 89
	op  goto 90


state 98
	if_stmt : IF LPRACE id . RPRACE LBRACE stmt RBRACE ELSE LBRACE stmt RBRACE
	if_stmt : IF LPRACE id . RPRACE LBRACE stmt RBRACE

	RPRACE  shift 111


state 99
	while_stmt : WHILE LPRACE expr . RPRACE LBRACE stmt RBRACE
	expr : expr . op expr

	PLUS  shift 64
	MINUS  shift 65
	MUL  shift 66
	DIV  shift 67
	MOD  shift 68
	INC  shift 69
	DEC  shift 70
	INAD  shift 71
	IOR  shift 72
	XOR  shift 73
	NOT  shift 74
	SHL  shift 75
	SHR  shift 76
	EQ  shift 77
	GT  shift 78
	LT  shift 79
	GE  shift 80
	LE  shift 81
	NEQ  shift 82
	AND  shift 83
	OR  shift 84
	OPPOSITE  shift 85
	RPRACE  shift 112

	ari_op  goto 87
	rel_op  goto 88
	log_op  goto 89
	op  goto 90


state 100
	while_stmt : WHILE LPRACE id . RPRACE LBRACE stmt RBRACE

	RPRACE  shift 113


state 101
	for_stmt : FOR LPRACE asgn_stmt . SIMICOLON expr SIMICOLON expr RPRACE LBRACE stmt RBRACE
	asgn_stmt : asgn_stmt . COMMA id

	COMMA  shift 55
	SIMICOLON  shift 114


state 102
	for_stmt : FOR LPRACE id . SIMICOLON expr SIMICOLON expr RPRACE LBRACE stmt RBRACE
	asgn_stmt : id . ASSIGN expr

	ASSIGN  shift 91
	SIMICOLON  shift 115


state 103
	expr : LPRACE expr RPRACE .  (49)

	.  reduce 49


state 104
	id : ID COMMA id .  (47)

	.  reduce 47


state 105
	asgn_stmt : asgn_stmt COMMA id .  (52)

	.  reduce 52


106: shift-reduce conflict (shift 64, reduce 48) on PLUS
106: shift-reduce conflict (shift 65, reduce 48) on MINUS
106: shift-reduce conflict (shift 66, reduce 48) on MUL
106: shift-reduce conflict (shift 67, reduce 48) on DIV
106: shift-reduce conflict (shift 68, reduce 48) on MOD
106: shift-reduce conflict (shift 69, reduce 48) on INC
106: shift-reduce conflict (shift 70, reduce 48) on DEC
106: shift-reduce conflict (shift 71, reduce 48) on INAD
106: shift-reduce conflict (shift 72, reduce 48) on IOR
106: shift-reduce conflict (shift 73, reduce 48) on XOR
106: shift-reduce conflict (shift 74, reduce 48) on NOT
106: shift-reduce conflict (shift 75, reduce 48) on SHL
106: shift-reduce conflict (shift 76, reduce 48) on SHR
106: shift-reduce conflict (shift 77, reduce 48) on EQ
106: shift-reduce conflict (shift 78, reduce 48) on GT
106: shift-reduce conflict (shift 79, reduce 48) on LT
106: shift-reduce conflict (shift 80, reduce 48) on GE
106: shift-reduce conflict (shift 81, reduce 48) on LE
106: shift-reduce conflict (shift 82, reduce 48) on NEQ
106: shift-reduce conflict (shift 83, reduce 48) on AND
106: shift-reduce conflict (shift 84, reduce 48) on OR
106: shift-reduce conflict (shift 85, reduce 48) on OPPOSITE
state 106
	expr : expr op expr .  (48)
	expr : expr . op expr

	PLUS  shift 64
	MINUS  shift 65
	MUL  shift 66
	DIV  shift 67
	MOD  shift 68
	INC  shift 69
	DEC  shift 70
	INAD  shift 71
	IOR  shift 72
	XOR  shift 73
	NOT  shift 74
	SHL  shift 75
	SHR  shift 76
	EQ  shift 77
	GT  shift 78
	LT  shift 79
	GE  shift 80
	LE  shift 81
	NEQ  shift 82
	AND  shift 83
	OR  shift 84
	OPPOSITE  shift 85
	.  reduce 48

	ari_op  goto 87
	rel_op  goto 88
	log_op  goto 89
	op  goto 90


state 107
	asgn_stmt : id ASSIGN expr .  (51)
	expr : expr . op expr

	PLUS  shift 64
	MINUS  shift 65
	MUL  shift 66
	DIV  shift 67
	MOD  shift 68
	INC  shift 69
	DEC  shift 70
	INAD  shift 71
	IOR  shift 72
	XOR  shift 73
	NOT  shift 74
	SHL  shift 75
	SHR  shift 76
	EQ  shift 77
	GT  shift 78
	LT  shift 79
	GE  shift 80
	LE  shift 81
	NEQ  shift 82
	AND  shift 83
	OR  shift 84
	OPPOSITE  shift 85
	.  reduce 51

	ari_op  goto 87
	rel_op  goto 88
	log_op  goto 89
	op  goto 90


state 108
	c_program : INT MAIN LPRACE VOID RPRACE LBRACE code RBRACE .  (6)

	.  reduce 6


state 109
	c_program : VOID MAIN LPRACE VOID RPRACE LBRACE code RBRACE .  (4)

	.  reduce 4


state 110
	if_stmt : IF LPRACE expr RPRACE . LBRACE stmt RBRACE
	if_stmt : IF LPRACE expr RPRACE . LBRACE stmt RBRACE ELSE LBRACE stmt RBRACE

	LBRACE  shift 116


state 111
	if_stmt : IF LPRACE id RPRACE . LBRACE stmt RBRACE ELSE LBRACE stmt RBRACE
	if_stmt : IF LPRACE id RPRACE . LBRACE stmt RBRACE

	LBRACE  shift 117


state 112
	while_stmt : WHILE LPRACE expr RPRACE . LBRACE stmt RBRACE

	LBRACE  shift 118


state 113
	while_stmt : WHILE LPRACE id RPRACE . LBRACE stmt RBRACE

	LBRACE  shift 119


state 114
	for_stmt : FOR LPRACE asgn_stmt SIMICOLON . expr SIMICOLON expr RPRACE LBRACE stmt RBRACE

	LPRACE  shift 32
	NUMBER  shift 34

	expr  goto 120


state 115
	for_stmt : FOR LPRACE id SIMICOLON . expr SIMICOLON expr RPRACE LBRACE stmt RBRACE

	LPRACE  shift 32
	NUMBER  shift 34

	expr  goto 121


state 116
	if_stmt : IF LPRACE expr RPRACE LBRACE . stmt RBRACE
	if_stmt : IF LPRACE expr RPRACE LBRACE . stmt RBRACE ELSE LBRACE stmt RBRACE

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

	asgn_stmt  goto 35
	while_stmt  goto 36
	dec_stmt  goto 37
	stmt  goto 122
	if_stmt  goto 39
	type  goto 40
	for_stmt  goto 42
	expr  goto 43
	id  goto 44


state 117
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

	asgn_stmt  goto 35
	while_stmt  goto 36
	dec_stmt  goto 37
	stmt  goto 123
	if_stmt  goto 39
	type  goto 40
	for_stmt  goto 42
	expr  goto 43
	id  goto 44


state 118
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

	asgn_stmt  goto 35
	while_stmt  goto 36
	dec_stmt  goto 37
	stmt  goto 124
	if_stmt  goto 39
	type  goto 40
	for_stmt  goto 42
	expr  goto 43
	id  goto 44


state 119
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

	asgn_stmt  goto 35
	while_stmt  goto 36
	dec_stmt  goto 37
	stmt  goto 125
	if_stmt  goto 39
	type  goto 40
	for_stmt  goto 42
	expr  goto 43
	id  goto 44


state 120
	for_stmt : FOR LPRACE asgn_stmt SIMICOLON expr . SIMICOLON expr RPRACE LBRACE stmt RBRACE
	expr : expr . op expr

	PLUS  shift 64
	MINUS  shift 65
	MUL  shift 66
	DIV  shift 67
	MOD  shift 68
	INC  shift 69
	DEC  shift 70
	INAD  shift 71
	IOR  shift 72
	XOR  shift 73
	NOT  shift 74
	SHL  shift 75
	SHR  shift 76
	EQ  shift 77
	GT  shift 78
	LT  shift 79
	GE  shift 80
	LE  shift 81
	NEQ  shift 82
	AND  shift 83
	OR  shift 84
	OPPOSITE  shift 85
	SIMICOLON  shift 126

	ari_op  goto 87
	rel_op  goto 88
	log_op  goto 89
	op  goto 90


state 121
	for_stmt : FOR LPRACE id SIMICOLON expr . SIMICOLON expr RPRACE LBRACE stmt RBRACE
	expr : expr . op expr

	PLUS  shift 64
	MINUS  shift 65
	MUL  shift 66
	DIV  shift 67
	MOD  shift 68
	INC  shift 69
	DEC  shift 70
	INAD  shift 71
	IOR  shift 72
	XOR  shift 73
	NOT  shift 74
	SHL  shift 75
	SHR  shift 76
	EQ  shift 77
	GT  shift 78
	LT  shift 79
	GE  shift 80
	LE  shift 81
	NEQ  shift 82
	AND  shift 83
	OR  shift 84
	OPPOSITE  shift 85
	SIMICOLON  shift 127

	ari_op  goto 87
	rel_op  goto 88
	log_op  goto 89
	op  goto 90


state 122
	if_stmt : IF LPRACE expr RPRACE LBRACE stmt . RBRACE
	if_stmt : IF LPRACE expr RPRACE LBRACE stmt . RBRACE ELSE LBRACE stmt RBRACE

	RBRACE  shift 128


state 123
	if_stmt : IF LPRACE id RPRACE LBRACE stmt . RBRACE ELSE LBRACE stmt RBRACE
	if_stmt : IF LPRACE id RPRACE LBRACE stmt . RBRACE

	RBRACE  shift 129


state 124
	while_stmt : WHILE LPRACE expr RPRACE LBRACE stmt . RBRACE

	RBRACE  shift 130


state 125
	while_stmt : WHILE LPRACE id RPRACE LBRACE stmt . RBRACE

	RBRACE  shift 131


state 126
	for_stmt : FOR LPRACE asgn_stmt SIMICOLON expr SIMICOLON . expr RPRACE LBRACE stmt RBRACE

	LPRACE  shift 32
	NUMBER  shift 34

	expr  goto 132


state 127
	for_stmt : FOR LPRACE id SIMICOLON expr SIMICOLON . expr RPRACE LBRACE stmt RBRACE

	LPRACE  shift 32
	NUMBER  shift 34

	expr  goto 133


state 128
	if_stmt : IF LPRACE expr RPRACE LBRACE stmt RBRACE .  (55)
	if_stmt : IF LPRACE expr RPRACE LBRACE stmt RBRACE . ELSE LBRACE stmt RBRACE

	ELSE  shift 134
	.  reduce 55


state 129
	if_stmt : IF LPRACE id RPRACE LBRACE stmt RBRACE . ELSE LBRACE stmt RBRACE
	if_stmt : IF LPRACE id RPRACE LBRACE stmt RBRACE .  (57)

	ELSE  shift 135
	.  reduce 57


state 130
	while_stmt : WHILE LPRACE expr RPRACE LBRACE stmt RBRACE .  (58)

	.  reduce 58


state 131
	while_stmt : WHILE LPRACE id RPRACE LBRACE stmt RBRACE .  (59)

	.  reduce 59


state 132
	for_stmt : FOR LPRACE asgn_stmt SIMICOLON expr SIMICOLON expr . RPRACE LBRACE stmt RBRACE
	expr : expr . op expr

	PLUS  shift 64
	MINUS  shift 65
	MUL  shift 66
	DIV  shift 67
	MOD  shift 68
	INC  shift 69
	DEC  shift 70
	INAD  shift 71
	IOR  shift 72
	XOR  shift 73
	NOT  shift 74
	SHL  shift 75
	SHR  shift 76
	EQ  shift 77
	GT  shift 78
	LT  shift 79
	GE  shift 80
	LE  shift 81
	NEQ  shift 82
	AND  shift 83
	OR  shift 84
	OPPOSITE  shift 85
	RPRACE  shift 136

	ari_op  goto 87
	rel_op  goto 88
	log_op  goto 89
	op  goto 90


state 133
	for_stmt : FOR LPRACE id SIMICOLON expr SIMICOLON expr . RPRACE LBRACE stmt RBRACE
	expr : expr . op expr

	PLUS  shift 64
	MINUS  shift 65
	MUL  shift 66
	DIV  shift 67
	MOD  shift 68
	INC  shift 69
	DEC  shift 70
	INAD  shift 71
	IOR  shift 72
	XOR  shift 73
	NOT  shift 74
	SHL  shift 75
	SHR  shift 76
	EQ  shift 77
	GT  shift 78
	LT  shift 79
	GE  shift 80
	LE  shift 81
	NEQ  shift 82
	AND  shift 83
	OR  shift 84
	OPPOSITE  shift 85
	RPRACE  shift 137

	ari_op  goto 87
	rel_op  goto 88
	log_op  goto 89
	op  goto 90


state 134
	if_stmt : IF LPRACE expr RPRACE LBRACE stmt RBRACE ELSE . LBRACE stmt RBRACE

	LBRACE  shift 138


state 135
	if_stmt : IF LPRACE id RPRACE LBRACE stmt RBRACE ELSE . LBRACE stmt RBRACE

	LBRACE  shift 139


state 136
	for_stmt : FOR LPRACE asgn_stmt SIMICOLON expr SIMICOLON expr RPRACE . LBRACE stmt RBRACE

	LBRACE  shift 140


state 137
	for_stmt : FOR LPRACE id SIMICOLON expr SIMICOLON expr RPRACE . LBRACE stmt RBRACE

	LBRACE  shift 141


state 138
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

	asgn_stmt  goto 35
	while_stmt  goto 36
	dec_stmt  goto 37
	stmt  goto 142
	if_stmt  goto 39
	type  goto 40
	for_stmt  goto 42
	expr  goto 43
	id  goto 44


state 139
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

	asgn_stmt  goto 35
	while_stmt  goto 36
	dec_stmt  goto 37
	stmt  goto 143
	if_stmt  goto 39
	type  goto 40
	for_stmt  goto 42
	expr  goto 43
	id  goto 44


state 140
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

	asgn_stmt  goto 35
	while_stmt  goto 36
	dec_stmt  goto 37
	stmt  goto 144
	if_stmt  goto 39
	type  goto 40
	for_stmt  goto 42
	expr  goto 43
	id  goto 44


state 141
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

	asgn_stmt  goto 35
	while_stmt  goto 36
	dec_stmt  goto 37
	stmt  goto 145
	if_stmt  goto 39
	type  goto 40
	for_stmt  goto 42
	expr  goto 43
	id  goto 44


state 142
	if_stmt : IF LPRACE expr RPRACE LBRACE stmt RBRACE ELSE LBRACE stmt . RBRACE

	RBRACE  shift 146


state 143
	if_stmt : IF LPRACE id RPRACE LBRACE stmt RBRACE ELSE LBRACE stmt . RBRACE

	RBRACE  shift 147


state 144
	for_stmt : FOR LPRACE asgn_stmt SIMICOLON expr SIMICOLON expr RPRACE LBRACE stmt . RBRACE

	RBRACE  shift 148


state 145
	for_stmt : FOR LPRACE id SIMICOLON expr SIMICOLON expr RPRACE LBRACE stmt . RBRACE

	RBRACE  shift 149


state 146
	if_stmt : IF LPRACE expr RPRACE LBRACE stmt RBRACE ELSE LBRACE stmt RBRACE .  (54)

	.  reduce 54


state 147
	if_stmt : IF LPRACE id RPRACE LBRACE stmt RBRACE ELSE LBRACE stmt RBRACE .  (56)

	.  reduce 56


state 148
	for_stmt : FOR LPRACE asgn_stmt SIMICOLON expr SIMICOLON expr RPRACE LBRACE stmt RBRACE .  (60)

	.  reduce 60


state 149
	for_stmt : FOR LPRACE id SIMICOLON expr SIMICOLON expr RPRACE LBRACE stmt RBRACE .  (61)

	.  reduce 61


##############################################################################
# Summary
##############################################################################

State 33 contains 1 shift-reduce conflict(s)
State 106 contains 22 shift-reduce conflict(s)


44 token(s), 16 nonterminal(s)
62 grammar rule(s), 150 state(s)


##############################################################################
# End of File
##############################################################################
