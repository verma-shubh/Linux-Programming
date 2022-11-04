// Shubham Verma
// MT2021132
#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>

void main(int argc, char **argv, char **envp) {
	printf("\n");
	for(int i=0; envp[i]!=NULL; i++)
		printf("%s\n",envp[i]);
}
