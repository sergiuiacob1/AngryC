all:
	flex angryc.l
	yacc -d angryc.y
	gcc lex.yy.c y.tab.c utils.c -ll -ly 