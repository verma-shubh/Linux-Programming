// Shubham Verma
// MT2021132
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
  
int main(int argc, char *argv[]) {
	printf("Pid of calling program : %d\n", getpid());
	char *newargv[] = { NULL, "hello", "world", NULL };
	char *newenviron[] = { NULL };
	if (argc != 2) {
		fprintf(stderr, "Usage: %s <file-to-exec>\n", argv[0]);
		exit(EXIT_FAILURE);
	}
	newargv[0] = argv[1];
	execve(argv[1], newargv, newenviron);
	perror("execve");   /* execve() returns only on error */
	printf("End of program calling\n");  // Will not get executed as this program removed from memory
	exit(EXIT_FAILURE);      
}

