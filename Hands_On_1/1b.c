// Shubham Verma
// MT2021132
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

void main() {
	const char *oldpath = "test.txt";
	const char *newpath = "test_hard.txt";
     	int l = link(oldpath, newpath);

	if(l==0)
		printf("Hard link created\n");
	else
		printf("Failed\n");
}
