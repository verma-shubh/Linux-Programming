// Shubham Verma
// MT2021132
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void main() {
	int i1, i2, i3;
	if(!(i1=fork())) {
	    printf("Child 1 pid : %d\n", getpid());
	    sleep(3);
	   // printf("Child 1");
	}
	else {   
		if(!(i2=fork())) {
			printf("Child 2 pid : %d\n", getpid());
			sleep(5);
			// printf("Child 2");
		}
		else {
			if(!(i3=fork())) {
				printf("Child 3 pid : %d\n", getpid());
				sleep(10);
				//  printf("Child 3");
			}
			else {
				pid_t p = waitpid(i3, NULL, 0);
				printf("Child pid: %d\n", p);
			}
		}
	}
}
