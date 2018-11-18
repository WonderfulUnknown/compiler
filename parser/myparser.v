#############################################################################
#                     U N R E G I S T E R E D   C O P Y
# 
# You are on day 59 of your 30 day trial period.
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
# Date: 11/18/18
# Time: 21:02:07
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
   45     | asgn_stmt
   46     | asgn_stmt COMMA id

   47  expr : expr ari_op expr
   48       | expr rel_op expr
   49       | expr log_op expr
   50       | LPRACE expr RPRACE
   51       | NUMBER

   52  asgn_stmt : id ASSIGN expr

   53  dec_stmt : type id SIMICOLON

   54  if_stmt : IF LPRACE expr RPRACE LBRACE stmt RBRACE ELSE LBRACE stmt RBRACE
   55          | IF LPRACE expr RPRACE LBRACE stmt RBRACE
   56          | IF LPRACE id RPRACE LBRACE stmt RBRACE ELSE LBRACE stmt RBRACE
   57          | IF LPRACE id RPRACE LBRACE stmt RBRACE

   58  while_stmt : WHILE LPRACE expr RPRACE LBRACE stmt RBRACE
   59             | WHILE LPRACE id RPRACE LBRACE stmt RBRACE

   60  for_stmt : FOR LPRACE for_1 SIMICOLON expr SIMICOLON expr RPRACE LBRACE stmt RBRACE

   61  for_1 :
   62        | asgn_stmt
   63        | id


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

	if_stmt  goto 35
	code  goto 36
	while_stmt  goto 37
	for_stmt  goto 38
	type  goto 39
	stmt  goto 40
	expr  goto 41
	asgn_stmt  goto 42
	dec_stmt  goto 43
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

	if_stmt  goto 35
	code  goto 46
	while_stmt  goto 37
	for_stmt  goto 38
	type  goto 39
	stmt  goto 40
	expr  goto 41
	asgn_stmt  goto 42
	dec_stmt  goto 43
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

	if_stmt  goto 35
	code  goto 48
	while_stmt  goto 37
	for_stmt  goto 38
	type  goto 39
	stmt  goto 40
	expr  goto 41
	asgn_stmt  goto 42
	dec_stmt  goto 43
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

	if_stmt  goto 35
	code  goto 49
	while_stmt  goto 37
	for_stmt  goto 38
	type  goto 39
	stmt  goto 40
	expr  goto 41
	asgn_stmt  goto 42
	dec_stmt  goto 43
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
	while_stmt : WHILE . LPRACE expr RPRACE LBRACE stmt RBRACE
	while_stmt : WHILE . LPRACE id RPRACE LBRACE stmt RBRACE

	LPRACE  shift 51


state 31
	for_stmt : FOR . LPRACE for_1 SIMICOLON expr SIMICOLON expr RPRACE LBRACE stmt RBRACE

	LPRACE  shift 52


state 32
	expr : LPRACE . expr RPRACE

	LPRACE  shift 32
	NUMBER  shift 34

	expr  goto 53


state 33
	id : ID . COMMA id
	id : ID .  (43)

	COMMA  shift 54
	.  reduce 43


state 34
	expr : NUMBER .  (51)

	.  reduce 51


state 35
	stmt : if_stmt . SIMICOLON

	SIMICOLON  shift 55


state 36
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
	RBRACE  shift 56
	LPRACE  shift 32
	ID  shift 33
	NUMBER  shift 34

	if_stmt  goto 35
	while_stmt  goto 37
	for_stmt  goto 38
	type  goto 39
	stmt  goto 57
	expr  goto 41
	asgn_stmt  goto 42
	dec_stmt  goto 43
	id  goto 44


state 37
	stmt : while_stmt . SIMICOLON

	SIMICOLON  shift 58


state 38
	stmt : for_stmt . SIMICOLON

	SIMICOLON  shift 59


state 39
	dec_stmt : type . id SIMICOLON

	ID  shift 33

	asgn_stmt  goto 60
	id  goto 61


state 40
	code : stmt .  (7)

	.  reduce 7


state 41
	stmt : expr . SIMICOLON
	expr : expr . ari_op expr
	expr : expr . log_op expr
	expr : expr . rel_op expr

	PLUS  shift 62
	MINUS  shift 63
	MUL  shift 64
	DIV  shift 65
	MOD  shift 66
	INC  shift 67
	DEC  shift 68
	INAD  shift 69
	IOR  shift 70
	XOR  shift 71
	NOT  shift 72
	SHL  shift 73
	SHR  shift 74
	EQ  shift 75
	GT  shift 76
	LT  shift 77
	GE  shift 78
	LE  shift 79
	NEQ  shift 80
	AND  shift 81
	OR  shift 82
	OPPOSITE  shift 83
	SIMICOLON  shift 84

	rel_op  goto 85
	ari_op  goto 86
	log_op  goto 87


state 42
	stmt : asgn_stmt . SIMICOLON
	id : asgn_stmt .  (45)
	id : asgn_stmt . COMMA id

	COMMA  shift 88
	SIMICOLON  shift 89
	.  reduce 45


state 43
	stmt : dec_stmt . SIMICOLON

	SIMICOLON  shift 90


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

	if_stmt  goto 35
	code  goto 92
	while_stmt  goto 37
	for_stmt  goto 38
	type  goto 39
	stmt  goto 40
	expr  goto 41
	asgn_stmt  goto 42
	dec_stmt  goto 43
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

	if_stmt  goto 35
	while_stmt  goto 37
	for_stmt  goto 38
	type  goto 39
	stmt  goto 57
	expr  goto 41
	asgn_stmt  goto 42
	dec_stmt  goto 43
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

	if_stmt  goto 35
	code  goto 94
	while_stmt  goto 37
	for_stmt  goto 38
	type  goto 39
	stmt  goto 40
	expr  goto 41
	asgn_stmt  goto 42
	dec_stmt  goto 43
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

	if_stmt  goto 35
	while_stmt  goto 37
	for_stmt  goto 38
	type  goto 39
	stmt  goto 57
	expr  goto 41
	asgn_stmt  goto 42
	dec_stmt  goto 43
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

	if_stmt  goto 35
	while_stmt  goto 37
	for_stmt  goto 38
	type  goto 39
	stmt  goto 57
	expr  goto 41
	asgn_stmt  goto 42
	dec_stmt  goto 43
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
	asgn_stmt  goto 60
	id  goto 98


state 51
	while_stmt : WHILE LPRACE . expr RPRACE LBRACE stmt RBRACE
	while_stmt : WHILE LPRACE . id RPRACE LBRACE stmt RBRACE

	LPRACE  shift 32
	ID  shift 33
	NUMBER  shift 34

	expr  goto 99
	asgn_stmt  goto 60
	id  goto 100


state 52
	for_stmt : FOR LPRACE . for_1 SIMICOLON expr SIMICOLON expr RPRACE LBRACE stmt RBRACE
	for_1 : .  (61)

	ID  shift 33
	.  reduce 61

	asgn_stmt  goto 101
	id  goto 102
	for_1  goto 103


state 53
	expr : LPRACE expr . RPRACE
	expr : expr . ari_op expr
	expr : expr . log_op expr
	expr : expr . rel_op expr

	PLUS  shift 62
	MINUS  shift 63
	MUL  shift 64
	DIV  shift 65
	MOD  shift 66
	INC  shift 67
	DEC  shift 68
	INAD  shift 69
	IOR  shift 70
	XOR  shift 71
	NOT  shift 72
	SHL  shift 73
	SHR  shift 74
	EQ  shift 75
	GT  shift 76
	LT  shift 77
	GE  shift 78
	LE  shift 79
	NEQ  shift 80
	AND  shift 81
	OR  shift 82
	OPPOSITE  shift 83
	RPRACE  shift 104

	rel_op  goto 85
	ari_op  goto 86
	log_op  goto 87


state 54
	id : ID COMMA . id

	ID  shift 33

	asgn_stmt  goto 60
	id  goto 105


state 55
	stmt : if_stmt SIMICOLON .  (12)

	.  reduce 12


state 56
	c_program : MAIN LPRACE RPRACE LBRACE code RBRACE .  (1)

	.  reduce 1


state 57
	code : code stmt .  (8)

	.  reduce 8


state 58
	stmt : while_stmt SIMICOLON .  (13)

	.  reduce 13


state 59
	stmt : for_stmt SIMICOLON .  (14)

	.  reduce 14


state 60
	id : asgn_stmt .  (45)
	id : asgn_stmt . COMMA id

	COMMA  shift 88
	.  reduce 45


state 61
	asgn_stmt : id . ASSIGN expr
	dec_stmt : type id . SIMICOLON

	ASSIGN  shift 91
	SIMICOLON  shift 106


state 62
	ari_op : PLUS .  (21)

	.  reduce 21


state 63
	ari_op : MINUS .  (22)

	.  reduce 22


state 64
	ari_op : MUL .  (23)

	.  reduce 23


state 65
	ari_op : DIV .  (24)

	.  reduce 24


state 66
	ari_op : MOD .  (25)

	.  reduce 25


state 67
	ari_op : INC .  (26)

	.  reduce 26


state 68
	ari_op : DEC .  (27)

	.  reduce 27


state 69
	ari_op : INAD .  (28)

	.  reduce 28


state 70
	ari_op : IOR .  (29)

	.  reduce 29


state 71
	ari_op : XOR .  (30)

	.  reduce 30


state 72
	ari_op : NOT .  (31)

	.  reduce 31


state 73
	ari_op : SHL .  (32)

	.  reduce 32


state 74
	ari_op : SHR .  (33)

	.  reduce 33


state 75
	rel_op : EQ .  (34)

	.  reduce 34


state 76
	rel_op : GT .  (35)

	.  reduce 35


state 77
	rel_op : LT .  (36)

	.  reduce 36


state 78
	rel_op : GE .  (37)

	.  reduce 37


state 79
	rel_op : LE .  (38)

	.  reduce 38


state 80
	rel_op : NEQ .  (39)

	.  reduce 39


state 81
	log_op : AND .  (40)

	.  reduce 40


state 82
	log_op : OR .  (41)

	.  reduce 41


state 83
	log_op : OPPOSITE .  (42)

	.  reduce 42


state 84
	stmt : expr SIMICOLON .  (9)

	.  reduce 9


state 85
	expr : expr rel_op . expr

	LPRACE  shift 32
	NUMBER  shift 34

	expr  goto 107


state 86
	expr : expr ari_op . expr

	LPRACE  shift 32
	NUMBER  shift 34

	expr  goto 108


state 87
	expr : expr log_op . expr

	LPRACE  shift 32
	NUMBER  shift 34

	expr  goto 109


state 88
	id : asgn_stmt COMMA . id

	ID  shift 33

	asgn_stmt  goto 60
	id  goto 110


state 89
	stmt : asgn_stmt SIMICOLON .  (10)

	.  reduce 10


state 90
	stmt : dec_stmt SIMICOLON .  (11)

	.  reduce 11


state 91
	asgn_stmt : id ASSIGN . expr

	LPRACE  shift 32
	NUMBER  shift 34

	expr  goto 111


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
	RBRACE  shift 112
	LPRACE  shift 32
	ID  shift 33
	NUMBER  shift 34

	if_stmt  goto 35
	while_stmt  goto 37
	for_stmt  goto 38
	type  goto 39
	stmt  goto 57
	expr  goto 41
	asgn_stmt  goto 42
	dec_stmt  goto 43
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
	RBRACE  shift 113
	LPRACE  shift 32
	ID  shift 33
	NUMBER  shift 34

	if_stmt  goto 35
	while_stmt  goto 37
	for_stmt  goto 38
	type  goto 39
	stmt  goto 57
	expr  goto 41
	asgn_stmt  goto 42
	dec_stmt  goto 43
	id  goto 44


state 95
	c_program : VOID MAIN LPRACE RPRACE LBRACE code RBRACE .  (3)

	.  reduce 3


state 96
	c_program : MAIN LPRACE VOID RPRACE LBRACE code RBRACE .  (2)

	.  reduce 2


state 97
	if_stmt : IF LPRACE expr . RPRACE LBRACE stmt RBRACE
	expr : expr . ari_op expr
	expr : expr . log_op expr
	expr : expr . rel_op expr
	if_stmt : IF LPRACE expr . RPRACE LBRACE stmt RBRACE ELSE LBRACE stmt RBRACE

	PLUS  shift 62
	MINUS  shift 63
	MUL  shift 64
	DIV  shift 65
	MOD  shift 66
	INC  shift 67
	DEC  shift 68
	INAD  shift 69
	IOR  shift 70
	XOR  shift 71
	NOT  shift 72
	SHL  shift 73
	SHR  shift 74
	EQ  shift 75
	GT  shift 76
	LT  shift 77
	GE  shift 78
	LE  shift 79
	NEQ  shift 80
	AND  shift 81
	OR  shift 82
	OPPOSITE  shift 83
	RPRACE  shift 114

	rel_op  goto 85
	ari_op  goto 86
	log_op  goto 87


state 98
	if_stmt : IF LPRACE id . RPRACE LBRACE stmt RBRACE ELSE LBRACE stmt RBRACE
	if_stmt : IF LPRACE id . RPRACE LBRACE stmt RBRACE
	asgn_stmt : id . ASSIGN expr

	ASSIGN  shift 91
	RPRACE  shift 115


state 99
	expr : expr . ari_op expr
	expr : expr . log_op expr
	while_stmt : WHILE LPRACE expr . RPRACE LBRACE stmt RBRACE
	expr : expr . rel_op expr

	PLUS  shift 62
	MINUS  shift 63
	MUL  shift 64
	DIV  shift 65
	MOD  shift 66
	INC  shift 67
	DEC  shift 68
	INAD  shift 69
	IOR  shift 70
	XOR  shift 71
	NOT  shift 72
	SHL  shift 73
	SHR  shift 74
	EQ  shift 75
	GT  shift 76
	LT  shift 77
	GE  shift 78
	LE  shift 79
	NEQ  shift 80
	AND  shift 81
	OR  shift 82
	OPPOSITE  shift 83
	RPRACE  shift 116

	rel_op  goto 85
	ari_op  goto 86
	log_op  goto 87


state 100
	asgn_stmt : id . ASSIGN expr
	while_stmt : WHILE LPRACE id . RPRACE LBRACE stmt RBRACE

	ASSIGN  shift 91
	RPRACE  shift 117


101: reduce-reduce conflict (reduce 45, reduce 62) on SIMICOLON
state 101
	id : asgn_stmt .  (45)
	for_1 : asgn_stmt .  (62)
	id : asgn_stmt . COMMA id

	COMMA  shift 88
	.  reduce 45


state 102
	for_1 : id .  (63)
	asgn_stmt : id . ASSIGN expr

	ASSIGN  shift 91
	.  reduce 63


state 103
	for_stmt : FOR LPRACE for_1 . SIMICOLON expr SIMICOLON expr RPRACE LBRACE stmt RBRACE

	SIMICOLON  shift 118


state 104
	expr : LPRACE expr RPRACE .  (50)

	.  reduce 50


state 105
	id : ID COMMA id .  (44)
	asgn_stmt : id . ASSIGN expr

	ASSIGN  shift 91
	.  reduce 44


state 106
	dec_stmt : type id SIMICOLON .  (53)

	.  reduce 53


107: shift-reduce conflict (shift 62, reduce 48) on PLUS
107: shift-reduce conflict (shift 63, reduce 48) on MINUS
107: shift-reduce conflict (shift 64, reduce 48) on MUL
107: shift-reduce conflict (shift 65, reduce 48) on DIV
107: shift-reduce conflict (shift 66, reduce 48) on MOD
107: shift-reduce conflict (shift 67, reduce 48) on INC
107: shift-reduce conflict (shift 68, reduce 48) on DEC
107: shift-reduce conflict (shift 69, reduce 48) on INAD
107: shift-reduce conflict (shift 70, reduce 48) on IOR
107: shift-reduce conflict (shift 71, reduce 48) on XOR
107: shift-reduce conflict (shift 72, reduce 48) on NOT
107: shift-reduce conflict (shift 73, reduce 48) on SHL
107: shift-reduce conflict (shift 74, reduce 48) on SHR
107: shift-reduce conflict (shift 75, reduce 48) on EQ
107: shift-reduce conflict (shift 76, reduce 48) on GT
107: shift-reduce conflict (shift 77, reduce 48) on LT
107: shift-reduce conflict (shift 78, reduce 48) on GE
107: shift-reduce conflict (shift 79, reduce 48) on LE
107: shift-reduce conflict (shift 80, reduce 48) on NEQ
107: shift-reduce conflict (shift 81, reduce 48) on AND
107: shift-reduce conflict (shift 82, reduce 48) on OR
107: shift-reduce conflict (shift 83, reduce 48) on OPPOSITE
state 107
	expr : expr . ari_op expr
	expr : expr . log_op expr
	expr : expr rel_op expr .  (48)
	expr : expr . rel_op expr

	PLUS  shift 62
	MINUS  shift 63
	MUL  shift 64
	DIV  shift 65
	MOD  shift 66
	INC  shift 67
	DEC  shift 68
	INAD  shift 69
	IOR  shift 70
	XOR  shift 71
	NOT  shift 72
	SHL  shift 73
	SHR  shift 74
	EQ  shift 75
	GT  shift 76
	LT  shift 77
	GE  shift 78
	LE  shift 79
	NEQ  shift 80
	AND  shift 81
	OR  shift 82
	OPPOSITE  shift 83
	.  reduce 48

	rel_op  goto 85
	ari_op  goto 86
	log_op  goto 87


108: shift-reduce conflict (shift 62, reduce 47) on PLUS
108: shift-reduce conflict (shift 63, reduce 47) on MINUS
108: shift-reduce conflict (shift 64, reduce 47) on MUL
108: shift-reduce conflict (shift 65, reduce 47) on DIV
108: shift-reduce conflict (shift 66, reduce 47) on MOD
108: shift-reduce conflict (shift 67, reduce 47) on INC
108: shift-reduce conflict (shift 68, reduce 47) on DEC
108: shift-reduce conflict (shift 69, reduce 47) on INAD
108: shift-reduce conflict (shift 70, reduce 47) on IOR
108: shift-reduce conflict (shift 71, reduce 47) on XOR
108: shift-reduce conflict (shift 72, reduce 47) on NOT
108: shift-reduce conflict (shift 73, reduce 47) on SHL
108: shift-reduce conflict (shift 74, reduce 47) on SHR
108: shift-reduce conflict (shift 75, reduce 47) on EQ
108: shift-reduce conflict (shift 76, reduce 47) on GT
108: shift-reduce conflict (shift 77, reduce 47) on LT
108: shift-reduce conflict (shift 78, reduce 47) on GE
108: shift-reduce conflict (shift 79, reduce 47) on LE
108: shift-reduce conflict (shift 80, reduce 47) on NEQ
108: shift-reduce conflict (shift 81, reduce 47) on AND
108: shift-reduce conflict (shift 82, reduce 47) on OR
108: shift-reduce conflict (shift 83, reduce 47) on OPPOSITE
state 108
	expr : expr ari_op expr .  (47)
	expr : expr . ari_op expr
	expr : expr . log_op expr
	expr : expr . rel_op expr

	PLUS  shift 62
	MINUS  shift 63
	MUL  shift 64
	DIV  shift 65
	MOD  shift 66
	INC  shift 67
	DEC  shift 68
	INAD  shift 69
	IOR  shift 70
	XOR  shift 71
	NOT  shift 72
	SHL  shift 73
	SHR  shift 74
	EQ  shift 75
	GT  shift 76
	LT  shift 77
	GE  shift 78
	LE  shift 79
	NEQ  shift 80
	AND  shift 81
	OR  shift 82
	OPPOSITE  shift 83
	.  reduce 47

	rel_op  goto 85
	ari_op  goto 86
	log_op  goto 87


109: shift-reduce conflict (shift 62, reduce 49) on PLUS
109: shift-reduce conflict (shift 63, reduce 49) on MINUS
109: shift-reduce conflict (shift 64, reduce 49) on MUL
109: shift-reduce conflict (shift 65, reduce 49) on DIV
109: shift-reduce conflict (shift 66, reduce 49) on MOD
109: shift-reduce conflict (shift 67, reduce 49) on INC
109: shift-reduce conflict (shift 68, reduce 49) on DEC
109: shift-reduce conflict (shift 69, reduce 49) on INAD
109: shift-reduce conflict (shift 70, reduce 49) on IOR
109: shift-reduce conflict (shift 71, reduce 49) on XOR
109: shift-reduce conflict (shift 72, reduce 49) on NOT
109: shift-reduce conflict (shift 73, reduce 49) on SHL
109: shift-reduce conflict (shift 74, reduce 49) on SHR
109: shift-reduce conflict (shift 75, reduce 49) on EQ
109: shift-reduce conflict (shift 76, reduce 49) on GT
109: shift-reduce conflict (shift 77, reduce 49) on LT
109: shift-reduce conflict (shift 78, reduce 49) on GE
109: shift-reduce conflict (shift 79, reduce 49) on LE
109: shift-reduce conflict (shift 80, reduce 49) on NEQ
109: shift-reduce conflict (shift 81, reduce 49) on AND
109: shift-reduce conflict (shift 82, reduce 49) on OR
109: shift-reduce conflict (shift 83, reduce 49) on OPPOSITE
state 109
	expr : expr . ari_op expr
	expr : expr log_op expr .  (49)
	expr : expr . log_op expr
	expr : expr . rel_op expr

	PLUS  shift 62
	MINUS  shift 63
	MUL  shift 64
	DIV  shift 65
	MOD  shift 66
	INC  shift 67
	DEC  shift 68
	INAD  shift 69
	IOR  shift 70
	XOR  shift 71
	NOT  shift 72
	SHL  shift 73
	SHR  shift 74
	EQ  shift 75
	GT  shift 76
	LT  shift 77
	GE  shift 78
	LE  shift 79
	NEQ  shift 80
	AND  shift 81
	OR  shift 82
	OPPOSITE  shift 83
	.  reduce 49

	rel_op  goto 85
	ari_op  goto 86
	log_op  goto 87


state 110
	asgn_stmt : id . ASSIGN expr
	id : asgn_stmt COMMA id .  (46)

	ASSIGN  shift 91
	.  reduce 46


state 111
	expr : expr . ari_op expr
	expr : expr . log_op expr
	expr : expr . rel_op expr
	asgn_stmt : id ASSIGN expr .  (52)

	PLUS  shift 62
	MINUS  shift 63
	MUL  shift 64
	DIV  shift 65
	MOD  shift 66
	INC  shift 67
	DEC  shift 68
	INAD  shift 69
	IOR  shift 70
	XOR  shift 71
	NOT  shift 72
	SHL  shift 73
	SHR  shift 74
	EQ  shift 75
	GT  shift 76
	LT  shift 77
	GE  shift 78
	LE  shift 79
	NEQ  shift 80
	AND  shift 81
	OR  shift 82
	OPPOSITE  shift 83
	.  reduce 52

	rel_op  goto 85
	ari_op  goto 86
	log_op  goto 87


state 112
	c_program : INT MAIN LPRACE VOID RPRACE LBRACE code RBRACE .  (6)

	.  reduce 6


state 113
	c_program : VOID MAIN LPRACE VOID RPRACE LBRACE code RBRACE .  (4)

	.  reduce 4


state 114
	if_stmt : IF LPRACE expr RPRACE . LBRACE stmt RBRACE
	if_stmt : IF LPRACE expr RPRACE . LBRACE stmt RBRACE ELSE LBRACE stmt RBRACE

	LBRACE  shift 119


state 115
	if_stmt : IF LPRACE id RPRACE . LBRACE stmt RBRACE ELSE LBRACE stmt RBRACE
	if_stmt : IF LPRACE id RPRACE . LBRACE stmt RBRACE

	LBRACE  shift 120


state 116
	while_stmt : WHILE LPRACE expr RPRACE . LBRACE stmt RBRACE

	LBRACE  shift 121


state 117
	while_stmt : WHILE LPRACE id RPRACE . LBRACE stmt RBRACE

	LBRACE  shift 122


state 118
	for_stmt : FOR LPRACE for_1 SIMICOLON . expr SIMICOLON expr RPRACE LBRACE stmt RBRACE

	LPRACE  shift 32
	NUMBER  shift 34

	expr  goto 123


state 119
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

	if_stmt  goto 35
	while_stmt  goto 37
	for_stmt  goto 38
	type  goto 39
	stmt  goto 124
	expr  goto 41
	asgn_stmt  goto 42
	dec_stmt  goto 43
	id  goto 44


state 120
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

	if_stmt  goto 35
	while_stmt  goto 37
	for_stmt  goto 38
	type  goto 39
	stmt  goto 125
	expr  goto 41
	asgn_stmt  goto 42
	dec_stmt  goto 43
	id  goto 44


state 121
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

	if_stmt  goto 35
	while_stmt  goto 37
	for_stmt  goto 38
	type  goto 39
	stmt  goto 126
	expr  goto 41
	asgn_stmt  goto 42
	dec_stmt  goto 43
	id  goto 44


state 122
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

	if_stmt  goto 35
	while_stmt  goto 37
	for_stmt  goto 38
	type  goto 39
	stmt  goto 127
	expr  goto 41
	asgn_stmt  goto 42
	dec_stmt  goto 43
	id  goto 44


state 123
	expr : expr . ari_op expr
	expr : expr . log_op expr
	expr : expr . rel_op expr
	for_stmt : FOR LPRACE for_1 SIMICOLON expr . SIMICOLON expr RPRACE LBRACE stmt RBRACE

	PLUS  shift 62
	MINUS  shift 63
	MUL  shift 64
	DIV  shift 65
	MOD  shift 66
	INC  shift 67
	DEC  shift 68
	INAD  shift 69
	IOR  shift 70
	XOR  shift 71
	NOT  shift 72
	SHL  shift 73
	SHR  shift 74
	EQ  shift 75
	GT  shift 76
	LT  shift 77
	GE  shift 78
	LE  shift 79
	NEQ  shift 80
	AND  shift 81
	OR  shift 82
	OPPOSITE  shift 83
	SIMICOLON  shift 128

	rel_op  goto 85
	ari_op  goto 86
	log_op  goto 87


state 124
	if_stmt : IF LPRACE expr RPRACE LBRACE stmt . RBRACE
	if_stmt : IF LPRACE expr RPRACE LBRACE stmt . RBRACE ELSE LBRACE stmt RBRACE

	RBRACE  shift 129


state 125
	if_stmt : IF LPRACE id RPRACE LBRACE stmt . RBRACE ELSE LBRACE stmt RBRACE
	if_stmt : IF LPRACE id RPRACE LBRACE stmt . RBRACE

	RBRACE  shift 130


state 126
	while_stmt : WHILE LPRACE expr RPRACE LBRACE stmt . RBRACE

	RBRACE  shift 131


state 127
	while_stmt : WHILE LPRACE id RPRACE LBRACE stmt . RBRACE

	RBRACE  shift 132


state 128
	for_stmt : FOR LPRACE for_1 SIMICOLON expr SIMICOLON . expr RPRACE LBRACE stmt RBRACE

	LPRACE  shift 32
	NUMBER  shift 34

	expr  goto 133


state 129
	if_stmt : IF LPRACE expr RPRACE LBRACE stmt RBRACE .  (55)
	if_stmt : IF LPRACE expr RPRACE LBRACE stmt RBRACE . ELSE LBRACE stmt RBRACE

	ELSE  shift 134
	.  reduce 55


state 130
	if_stmt : IF LPRACE id RPRACE LBRACE stmt RBRACE . ELSE LBRACE stmt RBRACE
	if_stmt : IF LPRACE id RPRACE LBRACE stmt RBRACE .  (57)

	ELSE  shift 135
	.  reduce 57


state 131
	while_stmt : WHILE LPRACE expr RPRACE LBRACE stmt RBRACE .  (58)

	.  reduce 58


state 132
	while_stmt : WHILE LPRACE id RPRACE LBRACE stmt RBRACE .  (59)

	.  reduce 59


state 133
	expr : expr . ari_op expr
	expr : expr . log_op expr
	expr : expr . rel_op expr
	for_stmt : FOR LPRACE for_1 SIMICOLON expr SIMICOLON expr . RPRACE LBRACE stmt RBRACE

	PLUS  shift 62
	MINUS  shift 63
	MUL  shift 64
	DIV  shift 65
	MOD  shift 66
	INC  shift 67
	DEC  shift 68
	INAD  shift 69
	IOR  shift 70
	XOR  shift 71
	NOT  shift 72
	SHL  shift 73
	SHR  shift 74
	EQ  shift 75
	GT  shift 76
	LT  shift 77
	GE  shift 78
	LE  shift 79
	NEQ  shift 80
	AND  shift 81
	OR  shift 82
	OPPOSITE  shift 83
	RPRACE  shift 136

	rel_op  goto 85
	ari_op  goto 86
	log_op  goto 87


state 134
	if_stmt : IF LPRACE expr RPRACE LBRACE stmt RBRACE ELSE . LBRACE stmt RBRACE

	LBRACE  shift 137


state 135
	if_stmt : IF LPRACE id RPRACE LBRACE stmt RBRACE ELSE . LBRACE stmt RBRACE

	LBRACE  shift 138


state 136
	for_stmt : FOR LPRACE for_1 SIMICOLON expr SIMICOLON expr RPRACE . LBRACE stmt RBRACE

	LBRACE  shift 139


state 137
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

	if_stmt  goto 35
	while_stmt  goto 37
	for_stmt  goto 38
	type  goto 39
	stmt  goto 140
	expr  goto 41
	asgn_stmt  goto 42
	dec_stmt  goto 43
	id  goto 44


state 138
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

	if_stmt  goto 35
	while_stmt  goto 37
	for_stmt  goto 38
	type  goto 39
	stmt  goto 141
	expr  goto 41
	asgn_stmt  goto 42
	dec_stmt  goto 43
	id  goto 44


state 139
	for_stmt : FOR LPRACE for_1 SIMICOLON expr SIMICOLON expr RPRACE LBRACE . stmt RBRACE

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

	if_stmt  goto 35
	while_stmt  goto 37
	for_stmt  goto 38
	type  goto 39
	stmt  goto 142
	expr  goto 41
	asgn_stmt  goto 42
	dec_stmt  goto 43
	id  goto 44


state 140
	if_stmt : IF LPRACE expr RPRACE LBRACE stmt RBRACE ELSE LBRACE stmt . RBRACE

	RBRACE  shift 143


state 141
	if_stmt : IF LPRACE id RPRACE LBRACE stmt RBRACE ELSE LBRACE stmt . RBRACE

	RBRACE  shift 144


state 142
	for_stmt : FOR LPRACE for_1 SIMICOLON expr SIMICOLON expr RPRACE LBRACE stmt . RBRACE

	RBRACE  shift 145


state 143
	if_stmt : IF LPRACE expr RPRACE LBRACE stmt RBRACE ELSE LBRACE stmt RBRACE .  (54)

	.  reduce 54


state 144
	if_stmt : IF LPRACE id RPRACE LBRACE stmt RBRACE ELSE LBRACE stmt RBRACE .  (56)

	.  reduce 56


state 145
	for_stmt : FOR LPRACE for_1 SIMICOLON expr SIMICOLON expr RPRACE LBRACE stmt RBRACE .  (60)

	.  reduce 60


Rules never reduced
	for_1 : asgn_stmt  (62)


##############################################################################
# Summary
##############################################################################

State 101 contains 1 reduce-reduce conflict(s)
State 107 contains 22 shift-reduce conflict(s)
State 108 contains 22 shift-reduce conflict(s)
State 109 contains 22 shift-reduce conflict(s)


44 token(s), 16 nonterminal(s)
64 grammar rule(s), 146 state(s)


##############################################################################
# End of File
##############################################################################
