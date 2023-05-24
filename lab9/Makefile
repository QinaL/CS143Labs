./PHONY: clean

test: lab9.h lab9.c test.c
	clang -Wall -o test lab9.c test.c -lcriterion

clean:
	rm -rf a.out test
