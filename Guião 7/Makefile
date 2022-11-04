clean:
	rm -f writePeople
	rm -f readPeople
	rm -f testLongOpt
	rm -f testOpt



all:		writePeople readPeople testLongOpt testOpt



writePeople:		writePeople.c
	cc -Wall -O2 writePeople.c -o writePeople


readPeople:		readPeople.c
	cc -Wall -O2 readPeople.c -o readPeople


testLongOpt:		testLongOpt.c
	cc -Wall -O2 testLongOpt.c -o testLongOpt


testOpt:		testOpt.c
	cc -Wall -O2 testOpt.c -o testOpt