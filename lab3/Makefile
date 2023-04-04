.PHONY: clean

lab3: lab3.h lab3.c
	clang -c lab3.c

test: lab3.h lab3.c test.c
	clang -o test lab3.c test.c -lcriterion

clean:
	rm -rf a.out test lab3.o

