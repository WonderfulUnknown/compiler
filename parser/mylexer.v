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
# mylexer.v
# Lex verbose file generated from mylexer.l.
# 
# Date: 11/25/18
# Time: 17:19:21
# 
# ALex Version: 2.07
#############################################################################


#############################################################################
# Expressions
#############################################################################

    1  [ \t\n]+

    2  ("/*"([^*"]*|".*"|\*+[^/])*\**"*/")|("//".*\n)

    3  int

    4  double

    5  float

    6  char

    7  bool

    8  void

    9  "+"

   10  "-"

   11  "*"

   12  "/"

   13  "%"

   14  "++"

   15  "--"

   16  "&"

   17  "|"

   18  "^"

   19  "~"

   20  "<<"

   21  ">>"

   22  "=="

   23  ">"

   24  "<"

   25  ">="

   26  "<="

   27  "!="

   28  "&&"

   29  "||"

   30  "!"

   31  if

   32  else

   33  while

   34  for

   35  break

   36  return

   37  main

   38  "="

   39  "{"

   40  "}"

   41  "("

   42  ")"

   43  "["

   44  "]"

   45  ","

   46  ";"

   47  ":"

   48  ([A-Za-z]|[_])([A-Za-z]|[0-9]|[_])*

   49  -?[0-9]+(\.[0-9]+)?([eE][-+]?[0-9]+)?


#############################################################################
# States
#############################################################################

state 1
	INITIAL

	0x09 - 0x0a (2)    goto 3
	0x20               goto 3
	0x21               goto 4
	0x25               goto 5
	0x26               goto 6
	0x28               goto 7
	0x29               goto 8
	0x2a               goto 9
	0x2b               goto 10
	0x2c               goto 11
	0x2d               goto 12
	0x2f               goto 13
	0x30 - 0x39 (10)   goto 14
	0x3a               goto 15
	0x3b               goto 16
	0x3c               goto 17
	0x3d               goto 18
	0x3e               goto 19
	0x41 - 0x5a (26)   goto 20
	0x5b               goto 21
	0x5d               goto 22
	0x5e               goto 23
	0x5f               goto 20
	0x61               goto 20
	0x62               goto 24
	0x63               goto 25
	0x64               goto 26
	0x65               goto 27
	0x66               goto 28
	0x67 - 0x68 (2)    goto 20
	0x69               goto 29
	0x6a - 0x6c (3)    goto 20
	0x6d               goto 30
	0x6e - 0x71 (4)    goto 20
	0x72               goto 31
	0x73 - 0x75 (3)    goto 20
	0x76               goto 32
	0x77               goto 33
	0x78 - 0x7a (3)    goto 20
	0x7b               goto 34
	0x7c               goto 35
	0x7d               goto 36
	0x7e               goto 37


state 2
	^INITIAL

	0x09 - 0x0a (2)    goto 3
	0x20               goto 3
	0x21               goto 4
	0x25               goto 5
	0x26               goto 6
	0x28               goto 7
	0x29               goto 8
	0x2a               goto 9
	0x2b               goto 10
	0x2c               goto 11
	0x2d               goto 12
	0x2f               goto 13
	0x30 - 0x39 (10)   goto 14
	0x3a               goto 15
	0x3b               goto 16
	0x3c               goto 17
	0x3d               goto 18
	0x3e               goto 19
	0x41 - 0x5a (26)   goto 20
	0x5b               goto 21
	0x5d               goto 22
	0x5e               goto 23
	0x5f               goto 20
	0x61               goto 20
	0x62               goto 24
	0x63               goto 25
	0x64               goto 26
	0x65               goto 27
	0x66               goto 28
	0x67 - 0x68 (2)    goto 20
	0x69               goto 29
	0x6a - 0x6c (3)    goto 20
	0x6d               goto 30
	0x6e - 0x71 (4)    goto 20
	0x72               goto 31
	0x73 - 0x75 (3)    goto 20
	0x76               goto 32
	0x77               goto 33
	0x78 - 0x7a (3)    goto 20
	0x7b               goto 34
	0x7c               goto 35
	0x7d               goto 36
	0x7e               goto 37


state 3
	0x09 - 0x0a (2)    goto 3
	0x20               goto 3

	match 1


state 4
	0x3d               goto 38

	match 30


state 5
	match 13


state 6
	0x26               goto 39

	match 16


state 7
	match 41


state 8
	match 42


state 9
	match 11


state 10
	0x2b               goto 40

	match 9


state 11
	match 45


state 12
	0x2d               goto 41
	0x30 - 0x39 (10)   goto 14

	match 10


state 13
	0x2a               goto 42
	0x2f               goto 43

	match 12


state 14
	0x2e               goto 44
	0x30 - 0x39 (10)   goto 14
	0x45               goto 45
	0x65               goto 45

	match 49


state 15
	match 47


state 16
	match 46


state 17
	0x3c               goto 46
	0x3d               goto 47

	match 24


state 18
	0x3d               goto 48

	match 38


state 19
	0x3d               goto 49
	0x3e               goto 50

	match 23


state 20
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x5a (26)   goto 20
	0x5f               goto 20
	0x61 - 0x7a (26)   goto 20

	match 48


state 21
	match 43


state 22
	match 44


state 23
	match 18


state 24
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x5a (26)   goto 20
	0x5f               goto 20
	0x61 - 0x6e (14)   goto 20
	0x6f               goto 51
	0x70 - 0x71 (2)    goto 20
	0x72               goto 52
	0x73 - 0x7a (8)    goto 20

	match 48


state 25
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x5a (26)   goto 20
	0x5f               goto 20
	0x61 - 0x67 (7)    goto 20
	0x68               goto 53
	0x69 - 0x7a (18)   goto 20

	match 48


state 26
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x5a (26)   goto 20
	0x5f               goto 20
	0x61 - 0x6e (14)   goto 20
	0x6f               goto 54
	0x70 - 0x7a (11)   goto 20

	match 48


state 27
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x5a (26)   goto 20
	0x5f               goto 20
	0x61 - 0x6b (11)   goto 20
	0x6c               goto 55
	0x6d - 0x7a (14)   goto 20

	match 48


state 28
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x5a (26)   goto 20
	0x5f               goto 20
	0x61 - 0x6b (11)   goto 20
	0x6c               goto 56
	0x6d - 0x6e (2)    goto 20
	0x6f               goto 57
	0x70 - 0x7a (11)   goto 20

	match 48


state 29
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x5a (26)   goto 20
	0x5f               goto 20
	0x61 - 0x65 (5)    goto 20
	0x66               goto 58
	0x67 - 0x6d (7)    goto 20
	0x6e               goto 59
	0x6f - 0x7a (12)   goto 20

	match 48


state 30
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x5a (26)   goto 20
	0x5f               goto 20
	0x61               goto 60
	0x62 - 0x7a (25)   goto 20

	match 48


state 31
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x5a (26)   goto 20
	0x5f               goto 20
	0x61 - 0x64 (4)    goto 20
	0x65               goto 61
	0x66 - 0x7a (21)   goto 20

	match 48


state 32
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x5a (26)   goto 20
	0x5f               goto 20
	0x61 - 0x6e (14)   goto 20
	0x6f               goto 62
	0x70 - 0x7a (11)   goto 20

	match 48


state 33
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x5a (26)   goto 20
	0x5f               goto 20
	0x61 - 0x67 (7)    goto 20
	0x68               goto 63
	0x69 - 0x7a (18)   goto 20

	match 48


state 34
	match 39


state 35
	0x7c               goto 64

	match 17


state 36
	match 40


state 37
	match 19


state 38
	match 27


state 39
	match 28


state 40
	match 14


state 41
	match 15


state 42
	0x00 - 0x21 (34)   goto 42
	0x23 - 0x29 (7)    goto 42
	0x2a               goto 65
	0x2b - 0x2d (3)    goto 42
	0x2e               goto 66
	0x2f - 0xff (209)  goto 42


state 43
	0x00 - 0x09 (10)   goto 43
	0x0a               goto 67
	0x0b - 0xff (245)  goto 43


state 44
	0x30 - 0x39 (10)   goto 68


state 45
	0x2b               goto 69
	0x2d               goto 69
	0x30 - 0x39 (10)   goto 70


state 46
	match 20


state 47
	match 26


state 48
	match 22


state 49
	match 25


state 50
	match 21


state 51
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x5a (26)   goto 20
	0x5f               goto 20
	0x61 - 0x6e (14)   goto 20
	0x6f               goto 71
	0x70 - 0x7a (11)   goto 20

	match 48


state 52
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x5a (26)   goto 20
	0x5f               goto 20
	0x61 - 0x64 (4)    goto 20
	0x65               goto 72
	0x66 - 0x7a (21)   goto 20

	match 48


state 53
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x5a (26)   goto 20
	0x5f               goto 20
	0x61               goto 73
	0x62 - 0x7a (25)   goto 20

	match 48


state 54
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x5a (26)   goto 20
	0x5f               goto 20
	0x61 - 0x74 (20)   goto 20
	0x75               goto 74
	0x76 - 0x7a (5)    goto 20

	match 48


state 55
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x5a (26)   goto 20
	0x5f               goto 20
	0x61 - 0x72 (18)   goto 20
	0x73               goto 75
	0x74 - 0x7a (7)    goto 20

	match 48


state 56
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x5a (26)   goto 20
	0x5f               goto 20
	0x61 - 0x6e (14)   goto 20
	0x6f               goto 76
	0x70 - 0x7a (11)   goto 20

	match 48


state 57
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x5a (26)   goto 20
	0x5f               goto 20
	0x61 - 0x71 (17)   goto 20
	0x72               goto 77
	0x73 - 0x7a (8)    goto 20

	match 48


state 58
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x5a (26)   goto 20
	0x5f               goto 20
	0x61 - 0x7a (26)   goto 20

	match 31


state 59
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x5a (26)   goto 20
	0x5f               goto 20
	0x61 - 0x73 (19)   goto 20
	0x74               goto 78
	0x75 - 0x7a (6)    goto 20

	match 48


state 60
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x5a (26)   goto 20
	0x5f               goto 20
	0x61 - 0x68 (8)    goto 20
	0x69               goto 79
	0x6a - 0x7a (17)   goto 20

	match 48


state 61
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x5a (26)   goto 20
	0x5f               goto 20
	0x61 - 0x73 (19)   goto 20
	0x74               goto 80
	0x75 - 0x7a (6)    goto 20

	match 48


state 62
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x5a (26)   goto 20
	0x5f               goto 20
	0x61 - 0x68 (8)    goto 20
	0x69               goto 81
	0x6a - 0x7a (17)   goto 20

	match 48


state 63
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x5a (26)   goto 20
	0x5f               goto 20
	0x61 - 0x68 (8)    goto 20
	0x69               goto 82
	0x6a - 0x7a (17)   goto 20

	match 48


state 64
	match 29


state 65
	0x00 - 0x29 (42)   goto 42
	0x2a               goto 83
	0x2b - 0x2e (4)    goto 42
	0x2f               goto 67
	0x30 - 0xff (208)  goto 42


state 66
	0x00 - 0x21 (34)   goto 42
	0x23 - 0x29 (7)    goto 42
	0x2a               goto 83
	0x2b - 0x2d (3)    goto 42
	0x2e               goto 66
	0x2f - 0xff (209)  goto 42


state 67
	match 2


state 68
	0x30 - 0x39 (10)   goto 68
	0x45               goto 45
	0x65               goto 45

	match 49


state 69
	0x30 - 0x39 (10)   goto 70


state 70
	0x30 - 0x39 (10)   goto 70

	match 49


state 71
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x5a (26)   goto 20
	0x5f               goto 20
	0x61 - 0x6b (11)   goto 20
	0x6c               goto 84
	0x6d - 0x7a (14)   goto 20

	match 48


state 72
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x5a (26)   goto 20
	0x5f               goto 20
	0x61               goto 85
	0x62 - 0x7a (25)   goto 20

	match 48


state 73
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x5a (26)   goto 20
	0x5f               goto 20
	0x61 - 0x71 (17)   goto 20
	0x72               goto 86
	0x73 - 0x7a (8)    goto 20

	match 48


state 74
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x5a (26)   goto 20
	0x5f               goto 20
	0x61               goto 20
	0x62               goto 87
	0x63 - 0x7a (24)   goto 20

	match 48


state 75
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x5a (26)   goto 20
	0x5f               goto 20
	0x61 - 0x64 (4)    goto 20
	0x65               goto 88
	0x66 - 0x7a (21)   goto 20

	match 48


state 76
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x5a (26)   goto 20
	0x5f               goto 20
	0x61               goto 89
	0x62 - 0x7a (25)   goto 20

	match 48


state 77
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x5a (26)   goto 20
	0x5f               goto 20
	0x61 - 0x7a (26)   goto 20

	match 34


state 78
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x5a (26)   goto 20
	0x5f               goto 20
	0x61 - 0x7a (26)   goto 20

	match 3


state 79
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x5a (26)   goto 20
	0x5f               goto 20
	0x61 - 0x6d (13)   goto 20
	0x6e               goto 90
	0x6f - 0x7a (12)   goto 20

	match 48


state 80
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x5a (26)   goto 20
	0x5f               goto 20
	0x61 - 0x74 (20)   goto 20
	0x75               goto 91
	0x76 - 0x7a (5)    goto 20

	match 48


state 81
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x5a (26)   goto 20
	0x5f               goto 20
	0x61 - 0x63 (3)    goto 20
	0x64               goto 92
	0x65 - 0x7a (22)   goto 20

	match 48


state 82
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x5a (26)   goto 20
	0x5f               goto 20
	0x61 - 0x6b (11)   goto 20
	0x6c               goto 93
	0x6d - 0x7a (14)   goto 20

	match 48


state 83
	0x00 - 0x21 (34)   goto 42
	0x22               goto 42
	0x23 - 0x29 (7)    goto 42
	0x2a               goto 83
	0x2b - 0x2d (3)    goto 42
	0x2e               goto 66
	0x2f               goto 94
	0x30 - 0xff (208)  goto 42


state 84
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x5a (26)   goto 20
	0x5f               goto 20
	0x61 - 0x7a (26)   goto 20

	match 7


state 85
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x5a (26)   goto 20
	0x5f               goto 20
	0x61 - 0x6a (10)   goto 20
	0x6b               goto 95
	0x6c - 0x7a (15)   goto 20

	match 48


state 86
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x5a (26)   goto 20
	0x5f               goto 20
	0x61 - 0x7a (26)   goto 20

	match 6


state 87
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x5a (26)   goto 20
	0x5f               goto 20
	0x61 - 0x6b (11)   goto 20
	0x6c               goto 96
	0x6d - 0x7a (14)   goto 20

	match 48


state 88
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x5a (26)   goto 20
	0x5f               goto 20
	0x61 - 0x7a (26)   goto 20

	match 32


state 89
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x5a (26)   goto 20
	0x5f               goto 20
	0x61 - 0x73 (19)   goto 20
	0x74               goto 97
	0x75 - 0x7a (6)    goto 20

	match 48


state 90
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x5a (26)   goto 20
	0x5f               goto 20
	0x61 - 0x7a (26)   goto 20

	match 37


state 91
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x5a (26)   goto 20
	0x5f               goto 20
	0x61 - 0x71 (17)   goto 20
	0x72               goto 98
	0x73 - 0x7a (8)    goto 20

	match 48


state 92
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x5a (26)   goto 20
	0x5f               goto 20
	0x61 - 0x7a (26)   goto 20

	match 8


state 93
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x5a (26)   goto 20
	0x5f               goto 20
	0x61 - 0x64 (4)    goto 20
	0x65               goto 99
	0x66 - 0x7a (21)   goto 20

	match 48


state 94
	0x00 - 0x21 (34)   goto 42
	0x23 - 0x29 (7)    goto 42
	0x2a               goto 65
	0x2b - 0x2d (3)    goto 42
	0x2e               goto 66
	0x2f - 0xff (209)  goto 42

	match 2


state 95
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x5a (26)   goto 20
	0x5f               goto 20
	0x61 - 0x7a (26)   goto 20

	match 35


state 96
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x5a (26)   goto 20
	0x5f               goto 20
	0x61 - 0x64 (4)    goto 20
	0x65               goto 100
	0x66 - 0x7a (21)   goto 20

	match 48


state 97
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x5a (26)   goto 20
	0x5f               goto 20
	0x61 - 0x7a (26)   goto 20

	match 5


state 98
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x5a (26)   goto 20
	0x5f               goto 20
	0x61 - 0x6d (13)   goto 20
	0x6e               goto 101
	0x6f - 0x7a (12)   goto 20

	match 48


state 99
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x5a (26)   goto 20
	0x5f               goto 20
	0x61 - 0x7a (26)   goto 20

	match 33


state 100
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x5a (26)   goto 20
	0x5f               goto 20
	0x61 - 0x7a (26)   goto 20

	match 4


state 101
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x5a (26)   goto 20
	0x5f               goto 20
	0x61 - 0x7a (26)   goto 20

	match 36


#############################################################################
# Summary
#############################################################################

1 start state(s)
49 expression(s), 101 state(s)


#############################################################################
# End of File
#############################################################################
