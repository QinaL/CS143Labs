#include <stdlib.h>
#include <stdio.h>

void blowpast(){
	char *mem = malloc(456);
	int i;
	for (i=0; i<=456; i++)
		mem[i] = '#';
	free(mem);
}

int main(){
	blowpast();
	printf("feelin' fine.\n");
	return 0;
}
