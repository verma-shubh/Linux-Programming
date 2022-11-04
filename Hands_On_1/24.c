// Shubham Verma
// MT2021132
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void main() {

	if(fork())
		printf("Parent ID: %d\n", getpid());
	else {
		sleep(10);
		printf("Child process ID: %d, Parent process ID: %d\n", getpid(), getppid());
	}


}
