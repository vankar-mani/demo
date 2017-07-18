all:
	gcc evtest.c -o evtest
	gcc move.c -o move

clear:
	rm evtest move 
