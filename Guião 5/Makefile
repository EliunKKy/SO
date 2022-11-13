clean:
	rm -f args1
	rm -f args2
	rm -f calculator



all:	args1 args2 calculator



args1:		args1.c
	cc -Wall -O2 args1.c -o args1


args2:		args2.c
	cc -Wall -O2 args2.c -o args2
	

calculator:		calculator.c
	cc -Wall -O2 calculator.c -o calculator -lm

