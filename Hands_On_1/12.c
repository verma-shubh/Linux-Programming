// Shubham Verma
// MT2021132
#include<stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>


void main() {
	int fd = open("test.txt", O_RDWR);
	int r = fcntl(fd, F_GETFL) & O_ACCMODE;
	if(r == 0) 
		printf("Read only mode");
	else if(r == 1)
		printf("Write only mode");
	else 
		printf("Read write mode");
	printf("\n%d\n", r);	
}
