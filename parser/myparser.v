#############################################################################
#                     U N R E G I S T E R E D   C O P Y
# 
# You are on day 68 of your 30 day trial period.
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
# Date: 11/27/18
# Time: 18:41:31
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

    9  stmt : exp SIMICOLON
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

   48  exp : exp op exp
   49      | LPRACE exp RPRACE
   50      | NUMBER
   51      | id

   52  asgn_stmt : id ASSIGN exp
   53            | asgn_stmt COMMA id

   54  dec_stmt : type id

   55  if_stmt : IF LPRACE exp RPRACE LBRACE stmt RBRACE ELSE LBRACE stmt RBRACE
   56          | IF LPRACE exp RPRACE LBRACE stmt RBRACE
   57          | IF LPRACE id RPRACE LBRACE stmt RBRACE ELSE LBRACE stmt RBRACE
   58          | IF LPRACE id RPRACE LBRACE stmt RBRACE

   59  while_stmt : WHILE LPRACE exp RPRACE LBRACE stmt RBRACE
   60             | WHILE LPRACE id RPRACE LBRACE stmt RBRACE

   61  for_stmt : FOR LPRACE asgn_stmt SIMICOLON exp SIMICOLON exp RPRACE LBRACE stmt RBRACE
   62           | FOR LPRACE id SIMICOLON exp SIMICOLON exp RPRACE LBRACE stmt RBRACE


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

	stmt  goto 35
	exp  goto 36
	asgn_stmt  goto 37
	code  goto 38
	dec_stmt  goto 39
	if_stmt  goto 40
	while_stmt  goto 41
	for_stmt  goto 42
	type  goto 43
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

	stmt  goto 35
	exp  goto 36
	asgn_stmt  goto 37
	code  goto 46
	dec_stmt  goto 39
	if_stmt  goto 40
	while_stmt  goto 41
	for_stmt  goto 42
	type  goto 43
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

	stmt  goto 35
	exp  goto 36
	asgn_stmt  goto 37
	code  goto 48
	dec_stmt  goto 39
	if_stmt  goto 40
	while_stmt  goto 41
	for_stmt  goto 42
	type  goto 43
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

	stmt  goto 35
	exp  goto 36
	asgn_stmt  goto 37
	code  goto 49
	dec_stmt  goto 39
	if_stmt  goto 40
	while_stmt  goto 41
	for_stmt  goto 42
	type  goto 43
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
	if_stmt : IF . LPRACE exp RPRACE LBRACE stmt RBRACE ELSE LBRACE stmt RBRACE
	if_stmt : IF . LPRACE exp RPRACE LBRACE stmt RBRACE
	if_stmt : IF . LPRACE id RPRACE LBRACE stmt RBRACE ELSE LBRACE stmt RBRACE
	if_stmt : IF . LPRACE id RPRACE LBRACE stmt RBRACE

	LPRACE  shift 50


state 30
	while_stmt : WHILE . LPRACE id RPRACE LBRACE stmt RBRACE
	while_stmt : WHILE . LPRACE exp RPRACE LBRACE stmt RBRACE

	LPRACE  shift 51


state 31
	for_stmt : FOR . LPRACE asgn_stmt SIMICOLON exp SIMICOLON exp RPRACE LBRACE stmt RBRACE
	for_stmt : FOR . LPRACE id SIMICOLON exp SIMICOLON exp RPRACE LBRACE stmt RBRACE

	LPRACE  shift 52


state 32
	exp : LPRACE . exp RPRACE

	LPRACE  shift 32
	ID  shift 33
	NUMBER  shift 34

	exp  goto 53
	id  goto 54


33: shift-reduce conflict (shift 55, reduce 46) on COMMA
state 33
	id : ID . COMMA id
	id : ID .  (46)

	COMMA  shift 55
	.  reduce 46


state 34
	exp : NUMBER .  (50)

	.  reduce 50


state 35
	code : stmt .  (7)

	.  reduce 7


state 36
	stmt : exp . SIMICOLON
	exp : exp . op exp

	PLUS  shift 56
	MINUS  shift 57
	MUL  shift 58
	DIV  shift 59
	MOD  shift 60
	INC  shift 61
	DEC  shift 62
	INAD  shift 63
	IOR  shift 64
	XOR  shift 65
	NOT  shift 66
	SHL  shift 67
	SHR  shift 68
	EQ  shift 69
	GT  shift 70
	LT  shift 71
	GE  shift 72
	LE  shift 73
	NEQ  shift 74
	AND  shift 75
	OR  shift 76
	OPPOSITE  shift 77
	SIMICOLON  shift 78

	rel_op  goto 79
	ari_op  goto 80
	op  goto 81
	log_op  goto 82


state 37
	stmt : asgn_stmt . SIMICOLON
	asgn_stmt : asgn_stmt . COMMA id

	COMMA  shift 83
	SIMICOLON  shift 84


state 38
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
	RBRACE  shift 85
	LPRACE  shift 32
	ID  shift 33
	NUMBER  shift 34

	stmt  goto 86
	exp  goto 36
	asgn_stmt  goto 37
	dec_stmt  goto 39
	if_stmt  goto 40
	while_stmt  goto 41
	for_stmt  goto 42
	type  goto 43
	id  goto 44


state 39
	stmt : dec_stmt . SIMICOLON

	SIMICOLON  shift 87


state 40
	stmt : if_stmt . SIMICOLON

	SIMICOLON  shift 88


state 41
	stmt : while_stmt . SIMICOLON

	SIMICOLON  shift 89


state 42
	stmt : for_stmt . SIMICOLON

	SIMICOLON  shift 90


state 43
	dec_stmt : type . id

	ID  shift 33

	id  goto 91


state 44
	exp : id .  (51)
	asgn_stmt : id . ASSIGN exp

	ASSIGN  shift 92
	.  reduce 51


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

	stmt  goto 35
	exp  goto 36
	asgn_stmt  goto 37
	code  goto 93
	dec_stmt  goto 39
	if_stmt  goto 40
	while_stmt  goto 41
	for_stmt  goto 42
	type  goto 43
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
	RBRACE  shift 94
	LPRACE  shift 32
	ID  shift 33
	NUMBER  shift 34

	stmt  goto 86
	exp  goto 36
	asgn_stmt  goto 37
	dec_stmt  goto 39
	if_stmt  goto 40
	while_stmt  goto 41
	for_stmt  goto 42
	type  goto 43
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

	stmt  goto 35
	exp  goto 36
	asgn_stmt  goto 37
	code  goto 95
	dec_stmt  goto 39
	if_stmt  goto 40
	while_stmt  goto 41
	for_stmt  goto 42
	type  goto 43
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
	RBRACE  shift 96
	LPRACE  shift 32
	ID  shift 33
	NUMBER  shift 34

	stmt  goto 86
	exp  goto 36
	asgn_stmt  goto 37
	dec_stmt  goto 39
	if_stmt  goto 40
	while_stmt  goto 41
	for_stmt  goto 42
	type  goto 43
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
	RBRACE  shift 97
	LPRACE  shift 32
	ID  shift 33
	NUMBER  shift 34

	stmt  goto 86
	exp  goto 36
	asgn_stmt  goto 37
	dec_stmt  goto 39
	if_stmt  goto 40
	while_stmt  goto 41
	for_stmt  goto 42
	type  goto 43
	id  goto 44


state 50
	if_stmt : IF LPRACE . exp RPRACE LBRACE stmt RBRACE ELSE LBRACE stmt RBRACE
	if_stmt : IF LPRACE . exp RPRACE LBRACE stmt RBRACE
	if_stmt : IF LPRACE . id RPRACE LBRACE stmt RBRACE ELSE LBRACE stmt RBRACE
	if_stmt : IF LPRACE . id RPRACE LBRACE stmt RBRACE

	LPRACE  shift 32
	ID  shift 33
	NUMBER  shift 34

	exp  goto 98
	id  goto 99


state 51
	while_stmt : WHILE LPRACE . id RPRACE LBRACE stmt RBRACE
	while_stmt : WHILE LPRACE . exp RPRACE LBRACE stmt RBRACE

	LPRACE  shift 32
	ID  shift 33
	NUMBER  shift 34

	exp  goto 100
	id  goto 101


state 52
	for_stmt : FOR LPRACE . asgn_stmt SIMICOLON exp SIMICOLON exp RPRACE LBRACE stmt RBRACE
	for_stmt : FOR LPRACE . id SIMICOLON exp SIMICOLON exp RPRACE LBRACE stmt RBRACE

	ID  shift 33

	asgn_stmt  goto 102
	id  goto 103


state 53
	exp : LPRACE exp . RPRACE
	exp : exp . op exp

	PLUS  shift 56
	MINUS  shift 57
	MUL  shift 58
	DIV  shift 59
	MOD  shift 60
	INC  shift 61
	DEC  shift 62
	INAD  shift 63
	IOR  shift 64
	XOR  shift 65
	NOT  shift 66
	SHL  shift 67
	SHR  shift 68
	EQ  shift 69
	GT  shift 70
	LT  shift 71
	GE  shift 72
	LE  shift 73
	NEQ  shift 74
	AND  shift 75
	OR  shift 76
	OPPOSITE  shift 77
	RPRACE  shift 104

	rel_op  goto 79
	ari_op  goto 80
	op  goto 81
	log_op  goto 82


state 54
	exp : id .  (51)

	.  reduce 51


state 55
	id : ID COMMA . id

	ID  shift 33

	id  goto 105


state 56
	ari_op : PLUS .  (24)

	.  reduce 24


state 57
	ari_op : MINUS .  (25)

	.  reduce 25


state 58
	ari_op : MUL .  (26)

	.  reduce 26


state 59
	ari_op : DIV .  (27)

	.  reduce 27


state 60
	ari_op : MOD .  (28)

	.  reduce 28


state 61
	ari_op : INC .  (29)

	.  reduce 29


state 62
	ari_op : DEC .  (30)

	.  reduce 30


state 63
	ari_op : INAD .  (31)

	.  reduce 31


state 64
	ari_op : IOR .  (32)

	.  reduce 32


state 65
	ari_op : XOR .  (33)

	.  reduce 33


state 66
	ari_op : NOT .  (34)

	.  reduce 34


state 67
	ari_op : SHL .  (35)

	.  reduce 35


state 68
	ari_op : SHR .  (36)

	.  reduce 36


state 69
	rel_op : EQ .  (37)

	.  reduce 37


state 70
	rel_op : GT .  (38)

	.  reduce 38


state 71
	rel_op : LT .  (39)

	.  reduce 39


state 72
	rel_op : GE .  (40)

	.  reduce 40


state 73
	rel_op : LE .  (41)

	.  reduce 41


state 74
	rel_op : NEQ .  (42)

	.  reduce 42


state 75
	log_op : AND .  (43)

	.  reduce 43


state 76
	log_op : OR .  (44)

	.  reduce 44


state 77
	log_op : OPPOSITE .  (45)

	.  reduce 45


state 78
	stmt : exp SIMICOLON .  (9)

	.  reduce 9


state 79
	op : rel_op .  (22)

	.  reduce 22


state 80
	op : ari_op .  (21)

	.  reduce 21


state 81
	exp : exp op . exp

	LPRACE  shift 32
	ID  shift 33
	NUMBER  shift 34

	exp  goto 106
	id  goto 54


state 82
	op : log_op .  (23)

	.  reduce 23


state 83
	asgn_stmt : asgn_stmt COMMA . id

	ID  shift 33

	id  goto 107


state 84
	stmt : asgn_stmt SIMICOLON .  (10)

	.  reduce 10


state 85
	c_program : MAIN LPRACE RPRACE LBRACE code RBRACE .  (1)

	.  reduce 1


state 86
	code : code stmt .  (8)

	.  reduce 8


state 87
	stmt : dec_stmt SIMICOLON .  (11)

	.  reduce 11


state 88
	stmt : if_stmt SIMICOLON .  (12)

	.  reduce 12


state 89
	stmt : while_stmt SIMICOLON .  (13)

	.  reduce 13


state 90
	stmt : for_stmt SIMICOLON .  (14)

	.  reduce 14


state 91
	dec_stmt : type id .  (54)

	.  reduce 54


state 92
	asgn_stmt : id ASSIGN . exp

	LPRACE  shift 32
	ID  shift 33
	NUMBER  shift 34

	exp  goto 108
	id  goto 54


state 93
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

	stmt  goto 86
	exp  goto 36
	asgn_stmt  goto 37
	dec_stmt  goto 39
	if_stmt  goto 40
	while_stmt  goto 41
	for_stmt  goto 42
	type  goto 43
	id  goto 44


state 94
	c_program : INT MAIN LPRACE RPRACE LBRACE code RBRACE .  (5)

	.  reduce 5


state 95
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

	stmt  goto 86
	exp  goto 36
	asgn_stmt  goto 37
	dec_stmt  goto 39
	if_stmt  goto 40
	while_stmt  goto 41
	for_stmt  goto 42
	type  goto 43
	id  goto 44


state 96
	c_program : VOID MAIN LPRACE RPRACE LBRACE code RBRACE .  (3)

	.  reduce 3


state 97
	c_program : MAIN LPRACE VOID RPRACE LBRACE code RBRACE .  (2)

	.  reduce 2


state 98
	if_stmt : IF LPRACE exp . RPRACE LBRACE stmt RBRACE ELSE LBRACE stmt RBRACE
	if_stmt : IF LPRACE exp . RPRACE LBRACE stmt RBRACE
	exp : exp . op exp

	PLUS  shift 56
	MINUS  shift 57
	MUL  shift 58
	DIV  shift 59
	MOD  shift 60
	INC  shift 61
	DEC  shift 62
	INAD  shift 63
	IOR  shift 64
	XOR  shift 65
	NOT  shift 66
	SHL  shift 67
	SHR  shift 68
	EQ  shift 69
	GT  shift 70
	LT  shift 71
	GE  shift 72
	LE  shift 73
	NEQ  shift 74
	AND  shift 75
	OR  shift 76
	OPPOSITE  shift 77
	RPRACE  shift 111

	rel_op  goto 79
	ari_op  goto 80
	op  goto 81
	log_op  goto 82


99: shift-reduce conflict (shift 112, reduce 51) on RPRACE
state 99
	exp : id .  (51)
	if_stmt : IF LPRACE id . RPRACE LBRACE stmt RBRACE ELSE LBRACE stmt RBRACE
	if_stmt : IF LPRACE id . RPRACE LBRACE stmt RBRACE

	RPRACE  shift 112
	.  reduce 51


state 100
	while_stmt : WHILE LPRACE exp . RPRACE LBRACE stmt RBRACE
	exp : exp . op exp

	PLUS  shift 56
	MINUS  shift 57
	MUL  shift 58
	DIV  shift 59
	MOD  shift 60
	INC  shift 61
	DEC  shift 62
	INAD  shift 63
	IOR  shift 64
	XOR  shift 65
	NOT  shift 66
	SHL  shift 67
	SHR  shift 68
	EQ  shift 69
	GT  shift 70
	LT  shift 71
	GE  shift 72
	LE  shift 73
	NEQ  shift 74
	AND  shift 75
	OR  shift 76
	OPPOSITE  shift 77
	RPRACE  shift 113

	rel_op  goto 79
	ari_op  goto 80
	op  goto 81
	log_op  goto 82


101: shift-reduce conflict (shift 114, reduce 51) on RPRACE
state 101
	exp : id .  (51)
	while_stmt : WHILE LPRACE id . RPRACE LBRACE stmt RBRACE

	RPRACE  shift 114
	.  reduce 51


state 102
	for_stmt : FOR LPRACE asgn_stmt . SIMICOLON exp SIMICOLON exp RPRACE LBRACE stmt RBRACE
	asgn_stmt : asgn_stmt . COMMA id

	COMMA  shift 83
	SIMICOLON  shift 115


state 103
	asgn_stmt : id . ASSIGN exp
	for_stmt : FOR LPRACE id . SIMICOLON exp SIMICOLON exp RPRACE LBRACE stmt RBRACE

	ASSIGN  shift 92
	SIMICOLON  shift 116


state 104
	exp : LPRACE exp RPRACE .  (49)

	.  reduce 49


state 105
	id : ID COMMA id .  (47)

	.  reduce 47


106: shift-reduce conflict (shift 56, reduce 48) on PLUS
106: shift-reduce conflict (shift 57, reduce 48) on MINUS
106: shift-reduce conflict (shift 58, reduce 48) on MUL
106: shift-reduce conflict (shift 59, reduce 48) on DIV
106: shift-reduce conflict (shift 60, reduce 48) on MOD
106: shift-reduce conflict (shift 61, reduce 48) on INC
106: shift-reduce conflict (shift 62, reduce 48) on DEC
106: shift-reduce conflict (shift 63, reduce 48) on INAD
106: shift-reduce conflict (shift 64, reduce 48) on IOR
106: shift-reduce conflict (shift 65, reduce 48) on XOR
106: shift-reduce conflict (shift 66, reduce 48) on NOT
106: shift-reduce conflict (shift 67, reduce 48) on SHL
106: shift-reduce conflict (shift 68, reduce 48) on SHR
106: shift-reduce conflict (shift 69, reduce 48) on EQ
106: shift-reduce conflict (shift 70, reduce 48) on GT
106: shift-reduce conflict (shift 71, reduce 48) on LT
106: shift-reduce conflict (shift 72, reduce 48) on GE
106: shift-reduce conflict (shift 73, reduce 48) on LE
106: shift-reduce conflict (shift 74, reduce 48) on NEQ
106: shift-reduce conflict (shift 75, reduce 48) on AND
106: shift-reduce conflict (shift 76, reduce 48) on OR
106: shift-reduce conflict (shift 77, reduce 48) on OPPOSITE
state 106
	exp : exp op exp .  (48)
	exp : exp . op exp

	PLUS  shift 56
	MINUS  shift 57
	MUL  shift 58
	DIV  shift 59
	MOD  shift 60
	INC  shift 61
	DEC  shift 62
	INAD  shift 63
	IOR  shift 64
	XOR  shift 65
	NOT  shift 66
	SHL  shift 67
	SHR  shift 68
	EQ  shift 69
	GT  shift 70
	LT  shift 71
	GE  shift 72
	LE  shift 73
	NEQ  shift 74
	AND  shift 75
	OR  shift 76
	OPPOSITE  shift 77
	.  reduce 48

	rel_op  goto 79
	ari_op  goto 80
	op  goto 81
	log_op  goto 82


state 107
	asgn_stmt : asgn_stmt COMMA id .  (53)

	.  reduce 53


state 108
	asgn_stmt : id ASSIGN exp .  (52)
	exp : exp . op exp

	PLUS  shift 56
	MINUS  shift 57
	MUL  shift 58
	DIV  shift 59
	MOD  shift 60
	INC  shift 61
	DEC  shift 62
	INAD  shift 63
	IOR  shift 64
	XOR  shift 65
	NOT  shift 66
	SHL  shift 67
	SHR  shift 68
	EQ  shift 69
	GT  shift 70
	LT  shift 71
	GE  shift 72
	LE  shift 73
	NEQ  shift 74
	AND  shift 75
	OR  shift 76
	OPPOSITE  shift 77
	.  reduce 52

	rel_op  goto 79
	ari_op  goto 80
	op  goto 81
	log_op  goto 82


state 109
	c_program : INT MAIN LPRACE VOID RPRACE LBRACE code RBRACE .  (6)

	.  reduce 6


state 110
	c_program : VOID MAIN LPRACE VOID RPRACE LBRACE code RBRACE .  (4)

	.  reduce 4


state 111
	if_stmt : IF LPRACE exp RPRACE . LBRACE stmt RBRACE ELSE LBRACE stmt RBRACE
	if_stmt : IF LPRACE exp RPRACE . LBRACE stmt RBRACE

	LBRACE  shift 117


state 112
	if_stmt : IF LPRACE id RPRACE . LBRACE stmt RBRACE ELSE LBRACE stmt RBRACE
	if_stmt : IF LPRACE id RPRACE . LBRACE stmt RBRACE

	LBRACE  shift 118


state 113
	while_stmt : WHILE LPRACE exp RPRACE . LBRACE stmt RBRACE

	LBRACE  shift 119


state 114
	while_stmt : WHILE LPRACE id RPRACE . LBRACE stmt RBRACE

	LBRACE  shift 120


state 115
	for_stmt : FOR LPRACE asgn_stmt SIMICOLON . exp SIMICOLON exp RPRACE LBRACE stmt RBRACE

	LPRACE  shift 32
	ID  shift 33
	NUMBER  shift 34

	exp  goto 121
	id  goto 54


state 116
	for_stmt : FOR LPRACE id SIMICOLON . exp SIMICOLON exp RPRACE LBRACE stmt RBRACE

	LPRACE  shift 32
	ID  shift 33
	NUMBER  shift 34

	exp  goto 122
	id  goto 54


state 117
	if_stmt : IF LPRACE exp RPRACE LBRACE . stmt RBRACE ELSE LBRACE stmt RBRACE
	if_stmt : IF LPRACE exp RPRACE LBRACE . stmt RBRACE

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

	stmt  goto 123
	exp  goto 36
	asgn_stmt  goto 37
	dec_stmt  goto 39
	if_stmt  goto 40
	while_stmt  goto 41
	for_stmt  goto 42
	type  goto 43
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

	stmt  goto 124
	exp  goto 36
	asgn_stmt  goto 37
	dec_stmt  goto 39
	if_stmt  goto 40
	while_stmt  goto 41
	for_stmt  goto 42
	type  goto 43
	id  goto 44


state 119
	while_stmt : WHILE LPRACE exp RPRACE LBRACE . stmt RBRACE

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

	stmt  goto 125
	exp  goto 36
	asgn_stmt  goto 37
	dec_stmt  goto 39
	if_stmt  goto 40
	while_stmt  goto 41
	for_stmt  goto 42
	type  goto 43
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

	stmt  goto 126
	exp  goto 36
	asgn_stmt  goto 37
	dec_stmt  goto 39
	if_stmt  goto 40
	while_stmt  goto 41
	for_stmt  goto 42
	type  goto 43
	id  goto 44


state 121
	for_stmt : FOR LPRACE asgn_stmt SIMICOLON exp . SIMICOLON exp RPRACE LBRACE stmt RBRACE
	exp : exp . op exp

	PLUS  shift 56
	MINUS  shift 57
	MUL  shift 58
	DIV  shift 59
	MOD  shift 60
	INC  shift 61
	DEC  shift 62
	INAD  shift 63
	IOR  shift 64
	XOR  shift 65
	NOT  shift 66
	SHL  shift 67
	SHR  shift 68
	EQ  shift 69
	GT  shift 70
	LT  shift 71
	GE  shift 72
	LE  shift 73
	NEQ  shift 74
	AND  shift 75
	OR  shift 76
	OPPOSITE  shift 77
	SIMICOLON  shift 127

	rel_op  goto 79
	ari_op  goto 80
	op  goto 81
	log_op  goto 82


state 122
	exp : exp . op exp
	for_stmt : FOR LPRACE id SIMICOLON exp . SIMICOLON exp RPRACE LBRACE stmt RBRACE

	PLUS  shift 56
	MINUS  shift 57
	MUL  shift 58
	DIV  shift 59
	MOD  shift 60
	INC  shift 61
	DEC  shift 62
	INAD  shift 63
	IOR  shift 64
	XOR  shift 65
	NOT  shift 66
	SHL  shift 67
	SHR  shift 68
	EQ  shift 69
	GT  shift 70
	LT  shift 71
	GE  shift 72
	LE  shift 73
	NEQ  shift 74
	AND  shift 75
	OR  shift 76
	OPPOSITE  shift 77
	SIMICOLON  shift 128

	rel_op  goto 79
	ari_op  goto 80
	op  goto 81
	log_op  goto 82


state 123
	if_stmt : IF LPRACE exp RPRACE LBRACE stmt . RBRACE ELSE LBRACE stmt RBRACE
	if_stmt : IF LPRACE exp RPRACE LBRACE stmt . RBRACE

	RBRACE  shift 129


state 124
	if_stmt : IF LPRACE id RPRACE LBRACE stmt . RBRACE ELSE LBRACE stmt RBRACE
	if_stmt : IF LPRACE id RPRACE LBRACE stmt . RBRACE

	RBRACE  shift 130


state 125
	while_stmt : WHILE LPRACE exp RPRACE LBRACE stmt . RBRACE

	RBRACE  shift 131


state 126
	while_stmt : WHILE LPRACE id RPRACE LBRACE stmt . RBRACE

	RBRACE  shift 132


state 127
	for_stmt : FOR LPRACE asgn_stmt SIMICOLON exp SIMICOLON . exp RPRACE LBRACE stmt RBRACE

	LPRACE  shift 32
	ID  shift 33
	NUMBER  shift 34

	exp  goto 133
	id  goto 54


state 128
	for_stmt : FOR LPRACE id SIMICOLON exp SIMICOLON . exp RPRACE LBRACE stmt RBRACE

	LPRACE  shift 32
	ID  shift 33
	NUMBER  shift 34

	exp  goto 134
	id  goto 54


state 129
	if_stmt : IF LPRACE exp RPRACE LBRACE stmt RBRACE . ELSE LBRACE stmt RBRACE
	if_stmt : IF LPRACE exp RPRACE LBRACE stmt RBRACE .  (56)

	ELSE  shift 135
	.  reduce 56


state 130
	if_stmt : IF LPRACE id RPRACE LBRACE stmt RBRACE . ELSE LBRACE stmt RBRACE
	if_stmt : IF LPRACE id RPRACE LBRACE stmt RBRACE .  (58)

	ELSE  shift 136
	.  reduce 58


state 131
	while_stmt : WHILE LPRACE exp RPRACE LBRACE stmt RBRACE .  (59)

	.  reduce 59


state 132
	while_stmt : WHILE LPRACE id RPRACE LBRACE stmt RBRACE .  (60)

	.  reduce 60


state 133
	for_stmt : FOR LPRACE asgn_stmt SIMICOLON exp SIMICOLON exp . RPRACE LBRACE stmt RBRACE
	exp : exp . op exp

	PLUS  shift 56
	MINUS  shift 57
	MUL  shift 58
	DIV  shift 59
	MOD  shift 60
	INC  shift 61
	DEC  shift 62
	INAD  shift 63
	IOR  shift 64
	XOR  shift 65
	NOT  shift 66
	SHL  shift 67
	SHR  shift 68
	EQ  shift 69
	GT  shift 70
	LT  shift 71
	GE  shift 72
	LE  shift 73
	NEQ  shift 74
	AND  shift 75
	OR  shift 76
	OPPOSITE  shift 77
	RPRACE  shift 137

	rel_op  goto 79
	ari_op  goto 80
	op  goto 81
	log_op  goto 82


state 134
	exp : exp . op exp
	for_stmt : FOR LPRACE id SIMICOLON exp SIMICOLON exp . RPRACE LBRACE stmt RBRACE

	PLUS  shift 56
	MINUS  shift 57
	MUL  shift 58
	DIV  shift 59
	MOD  shift 60
	INC  shift 61
	DEC  shift 62
	INAD  shift 63
	IOR  shift 64
	XOR  shift 65
	NOT  shift 66
	SHL  shift 67
	SHR  shift 68
	EQ  shift 69
	GT  shift 70
	LT  shift 71
	GE  shift 72
	LE  shift 73
	NEQ  shift 74
	AND  shift 75
	OR  shift 76
	OPPOSITE  shift 77
	RPRACE  shift 138

	rel_op  goto 79
	ari_op  goto 80
	op  goto 81
	log_op  goto 82


state 135
	if_stmt : IF LPRACE exp RPRACE LBRACE stmt RBRACE ELSE . LBRACE stmt RBRACE

	LBRACE  shift 139


state 136
	if_stmt : IF LPRACE id RPRACE LBRACE stmt RBRACE ELSE . LBRACE stmt RBRACE

	LBRACE  shift 140


state 137
	for_stmt : FOR LPRACE asgn_stmt SIMICOLON exp SIMICOLON exp RPRACE . LBRACE stmt RBRACE

	LBRACE  shift 141


state 138
	for_stmt : FOR LPRACE id SIMICOLON exp SIMICOLON exp RPRACE . LBRACE stmt RBRACE

	LBRACE  shift 142


state 139
	if_stmt : IF LPRACE exp RPRACE LBRACE stmt RBRACE ELSE LBRACE . stmt RBRACE

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

	stmt  goto 143
	exp  goto 36
	asgn_stmt  goto 37
	dec_stmt  goto 39
	if_stmt  goto 40
	while_stmt  goto 41
	for_stmt  goto 42
	type  goto 43
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

	stmt  goto 144
	exp  goto 36
	asgn_stmt  goto 37
	dec_stmt  goto 39
	if_stmt  goto 40
	while_stmt  goto 41
	for_stmt  goto 42
	type  goto 43
	id  goto 44


state 141
	for_stmt : FOR LPRACE asgn_stmt SIMICOLON exp SIMICOLON exp RPRACE LBRACE . stmt RBRACE

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

	stmt  goto 145
	exp  goto 36
	asgn_stmt  goto 37
	dec_stmt  goto 39
	if_stmt  goto 40
	while_stmt  goto 41
	for_stmt  goto 42
	type  goto 43
	id  goto 44


state 142
	for_stmt : FOR LPRACE id SIMICOLON exp SIMICOLON exp RPRACE LBRACE . stmt RBRACE

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

	stmt  goto 146
	exp  goto 36
	asgn_stmt  goto 37
	dec_stmt  goto 39
	if_stmt  goto 40
	while_stmt  goto 41
	for_stmt  goto 42
	type  goto 43
	id  goto 44


state 143
	if_stmt : IF LPRACE exp RPRACE LBRACE stmt RBRACE ELSE LBRACE stmt . RBRACE

	RBRACE  shift 147


state 144
	if_stmt : IF LPRACE id RPRACE LBRACE stmt RBRACE ELSE LBRACE stmt . RBRACE

	RBRACE  shift 148


state 145
	for_stmt : FOR LPRACE asgn_stmt SIMICOLON exp SIMICOLON exp RPRACE LBRACE stmt . RBRACE

	RBRACE  shift 149


state 146
	for_stmt : FOR LPRACE id SIMICOLON exp SIMICOLON exp RPRACE LBRACE stmt . RBRACE

	RBRACE  shift 150


state 147
	if_stmt : IF LPRACE exp RPRACE LBRACE stmt RBRACE ELSE LBRACE stmt RBRACE .  (55)

	.  reduce 55


state 148
	if_stmt : IF LPRACE id RPRACE LBRACE stmt RBRACE ELSE LBRACE stmt RBRACE .  (57)

	.  reduce 57


state 149
	for_stmt : FOR LPRACE asgn_stmt SIMICOLON exp SIMICOLON exp RPRACE LBRACE stmt RBRACE .  (61)

	.  reduce 61


state 150
	for_stmt : FOR LPRACE id SIMICOLON exp SIMICOLON exp RPRACE LBRACE stmt RBRACE .  (62)

	.  reduce 62


##############################################################################
# Summary
##############################################################################

State 33 contains 1 shift-reduce conflict(s)
State 99 contains 1 shift-reduce conflict(s)
State 101 contains 1 shift-reduce conflict(s)
State 106 contains 22 shift-reduce conflict(s)


44 token(s), 16 nonterminal(s)
63 grammar rule(s), 151 state(s)


##############################################################################
# End of File
##############################################################################
