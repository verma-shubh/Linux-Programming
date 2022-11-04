// Shubham Verma
// MT2021132
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>

int main(int argc, char *argv[]) {
	int j;
	printf("\n");
	for (j = 0; j < argc; j++)
		printf("argv[%d]: %s\n", j,argv[j]);

	printf("Pid of called program %d\n", getpid()); 
	printf("End of program called\n");
	exit(EXIT_SUCCESS);
}

