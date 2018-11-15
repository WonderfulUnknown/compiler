#############################################################################
#                     U N R E G I S T E R E D   C O P Y
# 
# You are on day 46 of your 30 day trial period.
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
# token.v
# Lex verbose file generated from token.l.
# 
# Date: 11/05/18
# Time: 22:38:10
# 
# ALex Version: 2.07
#############################################################################


#############################################################################
# Expressions
#############################################################################

    1  [ \t\n]+

    2  int

    3  double

    4  float

    5  char

    6  bool

    7  void

    8  "+"

    9  "-"

   10  "*"

   11  "/"

   12  "="

   13  "%"

   14  "=="

   15  ">"

   16  "<"

   17  ">="

   18  "<="

   19  "!="

   20  if

   21  else

   22  while

   23  for

   24  break

   25  return

   26  "("

   27  ")"

   28  "{"

   29  "}"

   30  ";"

   31  ([A-Za-z]|[_])([A-Za-z]|[0-9]|[_])*

   32  -?[0-9]+(\.[0-9]+)?([eE][-+]?[0-9]+)?

   33  .


#############################################################################
# States
#############################################################################

state 1
	INITIAL

	0x00 - 0x08 (9)    goto 3
	0x09               goto 4
	0x0a               goto 4
	0x0b - 0x1f (21)   goto 3
	0x20               goto 4
	0x21               goto 5
	0x22 - 0x24 (3)    goto 3
	0x25               goto 6
	0x26 - 0x27 (2)    goto 3
	0x28               goto 7
	0x29               goto 8
	0x2a               goto 9
	0x2b               goto 10
	0x2c               goto 3
	0x2d               goto 11
	0x2e               goto 3
	0x2f               goto 12
	0x30 - 0x39 (10)   goto 13
	0x3a               goto 3
	0x3b               goto 14
	0x3c               goto 15
	0x3d               goto 16
	0x3e               goto 17
	0x3f - 0x40 (2)    goto 3
	0x41 - 0x5a (26)   goto 18
	0x5b - 0x5e (4)    goto 3
	0x5f               goto 18
	0x60               goto 3
	0x61               goto 18
	0x62               goto 19
	0x63               goto 20
	0x64               goto 21
	0x65               goto 22
	0x66               goto 23
	0x67 - 0x68 (2)    goto 18
	0x69               goto 24
	0x6a - 0x71 (8)    goto 18
	0x72               goto 25
	0x73 - 0x75 (3)    goto 18
	0x76               goto 26
	0x77               goto 27
	0x78 - 0x7a (3)    goto 18
	0x7b               goto 28
	0x7c               goto 3
	0x7d               goto 29
	0x7e - 0xff (130)  goto 3


state 2
	^INITIAL

	0x00 - 0x08 (9)    goto 3
	0x09               goto 4
	0x0a               goto 4
	0x0b - 0x1f (21)   goto 3
	0x20               goto 4
	0x21               goto 5
	0x22 - 0x24 (3)    goto 3
	0x25               goto 6
	0x26 - 0x27 (2)    goto 3
	0x28               goto 7
	0x29               goto 8
	0x2a               goto 9
	0x2b               goto 10
	0x2c               goto 3
	0x2d               goto 11
	0x2e               goto 3
	0x2f               goto 12
	0x30 - 0x39 (10)   goto 13
	0x3a               goto 3
	0x3b               goto 14
	0x3c               goto 15
	0x3d               goto 16
	0x3e               goto 17
	0x3f - 0x40 (2)    goto 3
	0x41 - 0x5a (26)   goto 18
	0x5b - 0x5e (4)    goto 3
	0x5f               goto 18
	0x60               goto 3
	0x61               goto 18
	0x62               goto 19
	0x63               goto 20
	0x64               goto 21
	0x65               goto 22
	0x66               goto 23
	0x67 - 0x68 (2)    goto 18
	0x69               goto 24
	0x6a - 0x71 (8)    goto 18
	0x72               goto 25
	0x73 - 0x75 (3)    goto 18
	0x76               goto 26
	0x77               goto 27
	0x78 - 0x7a (3)    goto 18
	0x7b               goto 28
	0x7c               goto 3
	0x7d               goto 29
	0x7e - 0xff (130)  goto 3


state 3
	match 33


state 4
	0x09 - 0x0a (2)    goto 4
	0x20               goto 4

	match 1


state 5
	0x3d               goto 30

	match 33


state 6
	match 13


state 7
	match 26


state 8
	match 27


state 9
	match 10


state 10
	match 8


state 11
	0x30 - 0x39 (10)   goto 13

	match 9


state 12
	match 11


state 13
	0x2e               goto 31
	0x30 - 0x39 (10)   goto 13
	0x45               goto 32
	0x65               goto 32

	match 32


state 14
	match 30


state 15
	0x3d               goto 33

	match 16


state 16
	0x3d               goto 34

	match 12


state 17
	0x3d               goto 35

	match 15


state 18
	0x30 - 0x39 (10)   goto 18
	0x41 - 0x5a (26)   goto 18
	0x5f               goto 18
	0x61 - 0x7a (26)   goto 18

	match 31


state 19
	0x30 - 0x39 (10)   goto 18
	0x41 - 0x5a (26)   goto 18
	0x5f               goto 18
	0x61 - 0x6e (14)   goto 18
	0x6f               goto 36
	0x70 - 0x71 (2)    goto 18
	0x72               goto 37
	0x73 - 0x7a (8)    goto 18

	match 31


state 20
	0x30 - 0x39 (10)   goto 18
	0x41 - 0x5a (26)   goto 18
	0x5f               goto 18
	0x61 - 0x67 (7)    goto 18
	0x68               goto 38
	0x69 - 0x7a (18)   goto 18

	match 31


state 21
	0x30 - 0x39 (10)   goto 18
	0x41 - 0x5a (26)   goto 18
	0x5f               goto 18
	0x61 - 0x6e (14)   goto 18
	0x6f               goto 39
	0x70 - 0x7a (11)   goto 18

	match 31


state 22
	0x30 - 0x39 (10)   goto 18
	0x41 - 0x5a (26)   goto 18
	0x5f               goto 18
	0x61 - 0x6b (11)   goto 18
	0x6c               goto 40
	0x6d - 0x7a (14)   goto 18

	match 31


state 23
	0x30 - 0x39 (10)   goto 18
	0x41 - 0x5a (26)   goto 18
	0x5f               goto 18
	0x61 - 0x6b (11)   goto 18
	0x6c               goto 41
	0x6d - 0x6e (2)    goto 18
	0x6f               goto 42
	0x70 - 0x7a (11)   goto 18

	match 31


state 24
	0x30 - 0x39 (10)   goto 18
	0x41 - 0x5a (26)   goto 18
	0x5f               goto 18
	0x61 - 0x65 (5)    goto 18
	0x66               goto 43
	0x67 - 0x6d (7)    goto 18
	0x6e               goto 44
	0x6f - 0x7a (12)   goto 18

	match 31


state 25
	0x30 - 0x39 (10)   goto 18
	0x41 - 0x5a (26)   goto 18
	0x5f               goto 18
	0x61 - 0x64 (4)    goto 18
	0x65               goto 45
	0x66 - 0x7a (21)   goto 18

	match 31


state 26
	0x30 - 0x39 (10)   goto 18
	0x41 - 0x5a (26)   goto 18
	0x5f               goto 18
	0x61 - 0x6e (14)   goto 18
	0x6f               goto 46
	0x70 - 0x7a (11)   goto 18

	match 31


state 27
	0x30 - 0x39 (10)   goto 18
	0x41 - 0x5a (26)   goto 18
	0x5f               goto 18
	0x61 - 0x67 (7)    goto 18
	0x68               goto 47
	0x69 - 0x7a (18)   goto 18

	match 31


state 28
	match 28


state 29
	match 29


state 30
	match 19


state 31
	0x30 - 0x39 (10)   goto 48


state 32
	0x2b               goto 49
	0x2d               goto 49
	0x30 - 0x39 (10)   goto 50


state 33
	match 18


state 34
	match 14


state 35
	match 17


state 36
	0x30 - 0x39 (10)   goto 18
	0x41 - 0x5a (26)   goto 18
	0x5f               goto 18
	0x61 - 0x6e (14)   goto 18
	0x6f               goto 51
	0x70 - 0x7a (11)   goto 18

	match 31


state 37
	0x30 - 0x39 (10)   goto 18
	0x41 - 0x5a (26)   goto 18
	0x5f               goto 18
	0x61 - 0x64 (4)    goto 18
	0x65               goto 52
	0x66 - 0x7a (21)   goto 18

	match 31


state 38
	0x30 - 0x39 (10)   goto 18
	0x41 - 0x5a (26)   goto 18
	0x5f               goto 18
	0x61               goto 53
	0x62 - 0x7a (25)   goto 18

	match 31


state 39
	0x30 - 0x39 (10)   goto 18
	0x41 - 0x5a (26)   goto 18
	0x5f               goto 18
	0x61 - 0x74 (20)   goto 18
	0x75               goto 54
	0x76 - 0x7a (5)    goto 18

	match 31


state 40
	0x30 - 0x39 (10)   goto 18
	0x41 - 0x5a (26)   goto 18
	0x5f               goto 18
	0x61 - 0x72 (18)   goto 18
	0x73               goto 55
	0x74 - 0x7a (7)    goto 18

	match 31


state 41
	0x30 - 0x39 (10)   goto 18
	0x41 - 0x5a (26)   goto 18
	0x5f               goto 18
	0x61 - 0x6e (14)   goto 18
	0x6f               goto 56
	0x70 - 0x7a (11)   goto 18

	match 31


state 42
	0x30 - 0x39 (10)   goto 18
	0x41 - 0x5a (26)   goto 18
	0x5f               goto 18
	0x61 - 0x71 (17)   goto 18
	0x72               goto 57
	0x73 - 0x7a (8)    goto 18

	match 31


state 43
	0x30 - 0x39 (10)   goto 18
	0x41 - 0x5a (26)   goto 18
	0x5f               goto 18
	0x61 - 0x7a (26)   goto 18

	match 20


state 44
	0x30 - 0x39 (10)   goto 18
	0x41 - 0x5a (26)   goto 18
	0x5f               goto 18
	0x61 - 0x73 (19)   goto 18
	0x74               goto 58
	0x75 - 0x7a (6)    goto 18

	match 31


state 45
	0x30 - 0x39 (10)   goto 18
	0x41 - 0x5a (26)   goto 18
	0x5f               goto 18
	0x61 - 0x73 (19)   goto 18
	0x74               goto 59
	0x75 - 0x7a (6)    goto 18

	match 31


state 46
	0x30 - 0x39 (10)   goto 18
	0x41 - 0x5a (26)   goto 18
	0x5f               goto 18
	0x61 - 0x68 (8)    goto 18
	0x69               goto 60
	0x6a - 0x7a (17)   goto 18

	match 31


state 47
	0x30 - 0x39 (10)   goto 18
	0x41 - 0x5a (26)   goto 18
	0x5f               goto 18
	0x61 - 0x68 (8)    goto 18
	0x69               goto 61
	0x6a - 0x7a (17)   goto 18

	match 31


state 48
	0x30 - 0x39 (10)   goto 48
	0x45               goto 32
	0x65               goto 32

	match 32


state 49
	0x30 - 0x39 (10)   goto 50


state 50
	0x30 - 0x39 (10)   goto 50

	match 32


state 51
	0x30 - 0x39 (10)   goto 18
	0x41 - 0x5a (26)   goto 18
	0x5f               goto 18
	0x61 - 0x6b (11)   goto 18
	0x6c               goto 62
	0x6d - 0x7a (14)   goto 18

	match 31


state 52
	0x30 - 0x39 (10)   goto 18
	0x41 - 0x5a (26)   goto 18
	0x5f               goto 18
	0x61               goto 63
	0x62 - 0x7a (25)   goto 18

	match 31


state 53
	0x30 - 0x39 (10)   goto 18
	0x41 - 0x5a (26)   goto 18
	0x5f               goto 18
	0x61 - 0x71 (17)   goto 18
	0x72               goto 64
	0x73 - 0x7a (8)    goto 18

	match 31


state 54
	0x30 - 0x39 (10)   goto 18
	0x41 - 0x5a (26)   goto 18
	0x5f               goto 18
	0x61               goto 18
	0x62               goto 65
	0x63 - 0x7a (24)   goto 18

	match 31


state 55
	0x30 - 0x39 (10)   goto 18
	0x41 - 0x5a (26)   goto 18
	0x5f               goto 18
	0x61 - 0x64 (4)    goto 18
	0x65               goto 66
	0x66 - 0x7a (21)   goto 18

	match 31


state 56
	0x30 - 0x39 (10)   goto 18
	0x41 - 0x5a (26)   goto 18
	0x5f               goto 18
	0x61               goto 67
	0x62 - 0x7a (25)   goto 18

	match 31


state 57
	0x30 - 0x39 (10)   goto 18
	0x41 - 0x5a (26)   goto 18
	0x5f               goto 18
	0x61 - 0x7a (26)   goto 18

	match 23


state 58
	0x30 - 0x39 (10)   goto 18
	0x41 - 0x5a (26)   goto 18
	0x5f               goto 18
	0x61 - 0x7a (26)   goto 18

	match 2


state 59
	0x30 - 0x39 (10)   goto 18
	0x41 - 0x5a (26)   goto 18
	0x5f               goto 18
	0x61 - 0x74 (20)   goto 18
	0x75               goto 68
	0x76 - 0x7a (5)    goto 18

	match 31


state 60
	0x30 - 0x39 (10)   goto 18
	0x41 - 0x5a (26)   goto 18
	0x5f               goto 18
	0x61 - 0x63 (3)    goto 18
	0x64               goto 69
	0x65 - 0x7a (22)   goto 18

	match 31


state 61
	0x30 - 0x39 (10)   goto 18
	0x41 - 0x5a (26)   goto 18
	0x5f               goto 18
	0x61 - 0x6b (11)   goto 18
	0x6c               goto 70
	0x6d - 0x7a (14)   goto 18

	match 31


state 62
	0x30 - 0x39 (10)   goto 18
	0x41 - 0x5a (26)   goto 18
	0x5f               goto 18
	0x61 - 0x7a (26)   goto 18

	match 6


state 63
	0x30 - 0x39 (10)   goto 18
	0x41 - 0x5a (26)   goto 18
	0x5f               goto 18
	0x61 - 0x6a (10)   goto 18
	0x6b               goto 71
	0x6c - 0x7a (15)   goto 18

	match 31


state 64
	0x30 - 0x39 (10)   goto 18
	0x41 - 0x5a (26)   goto 18
	0x5f               goto 18
	0x61 - 0x7a (26)   goto 18

	match 5


state 65
	0x30 - 0x39 (10)   goto 18
	0x41 - 0x5a (26)   goto 18
	0x5f               goto 18
	0x61 - 0x6b (11)   goto 18
	0x6c               goto 72
	0x6d - 0x7a (14)   goto 18

	match 31


state 66
	0x30 - 0x39 (10)   goto 18
	0x41 - 0x5a (26)   goto 18
	0x5f               goto 18
	0x61 - 0x7a (26)   goto 18

	match 21


state 67
	0x30 - 0x39 (10)   goto 18
	0x41 - 0x5a (26)   goto 18
	0x5f               goto 18
	0x61 - 0x73 (19)   goto 18
	0x74               goto 73
	0x75 - 0x7a (6)    goto 18

	match 31


state 68
	0x30 - 0x39 (10)   goto 18
	0x41 - 0x5a (26)   goto 18
	0x5f               goto 18
	0x61 - 0x71 (17)   goto 18
	0x72               goto 74
	0x73 - 0x7a (8)    goto 18

	match 31


state 69
	0x30 - 0x39 (10)   goto 18
	0x41 - 0x5a (26)   goto 18
	0x5f               goto 18
	0x61 - 0x7a (26)   goto 18

	match 7


state 70
	0x30 - 0x39 (10)   goto 18
	0x41 - 0x5a (26)   goto 18
	0x5f               goto 18
	0x61 - 0x64 (4)    goto 18
	0x65               goto 75
	0x66 - 0x7a (21)   goto 18

	match 31


state 71
	0x30 - 0x39 (10)   goto 18
	0x41 - 0x5a (26)   goto 18
	0x5f               goto 18
	0x61 - 0x7a (26)   goto 18

	match 24


state 72
	0x30 - 0x39 (10)   goto 18
	0x41 - 0x5a (26)   goto 18
	0x5f               goto 18
	0x61 - 0x64 (4)    goto 18
	0x65               goto 76
	0x66 - 0x7a (21)   goto 18

	match 31


state 73
	0x30 - 0x39 (10)   goto 18
	0x41 - 0x5a (26)   goto 18
	0x5f               goto 18
	0x61 - 0x7a (26)   goto 18

	match 4


state 74
	0x30 - 0x39 (10)   goto 18
	0x41 - 0x5a (26)   goto 18
	0x5f               goto 18
	0x61 - 0x6d (13)   goto 18
	0x6e               goto 77
	0x6f - 0x7a (12)   goto 18

	match 31


state 75
	0x30 - 0x39 (10)   goto 18
	0x41 - 0x5a (26)   goto 18
	0x5f               goto 18
	0x61 - 0x7a (26)   goto 18

	match 22


state 76
	0x30 - 0x39 (10)   goto 18
	0x41 - 0x5a (26)   goto 18
	0x5f               goto 18
	0x61 - 0x7a (26)   goto 18

	match 3


state 77
	0x30 - 0x39 (10)   goto 18
	0x41 - 0x5a (26)   goto 18
	0x5f               goto 18
	0x61 - 0x7a (26)   goto 18

	match 25


#############################################################################
# Summary
#############################################################################

1 start state(s)
33 expression(s), 77 state(s)


#############################################################################
# End of File
#############################################################################
