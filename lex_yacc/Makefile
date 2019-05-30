default:
	yacc -d call.y
	lex call.l
	gcc y.tab.c -o a.out
clean:
	rm -rf a.out *.o
