// Shubham Verma
// MT2021132
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void main() {
	if(!fork())
		printf("Child process ID: %u\n",getpid());	
	else
		printf("Parent process ID: %u\n",getpid());
}
