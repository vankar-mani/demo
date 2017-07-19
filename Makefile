all:
	gcc evtest.c -o evtest
	gcc move.c -o move
	gcc Hello.c -o hello

clear:
	rm evtest move hello
