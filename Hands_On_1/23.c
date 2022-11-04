// Shubham Verma
// MT2021132
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

void main() {
	if(!fork()) {
		printf("Child process ID: %d\n", getpid());	
		exit(0);
	}
	else
		sleep(100);
}
