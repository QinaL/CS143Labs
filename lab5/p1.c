#include <stdlib.h>
#include <stdio.h>

void proc(){
	char *mem = malloc(123);
}

int main(){
	proc();
	printf("Nothing to see here.\n");
	return 0;
}

