all:
	gcc evtest.c -o evtest
	gcc move.c -o move
	gcc Hello.c -o hello
	gcc test.c -o test

clear:
	rm evtest move hello test
