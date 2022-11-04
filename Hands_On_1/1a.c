// Shubham Verma
// MT2021132
#include <fcntl.h>  
#include <unistd.h>
#include <stdio.h>

void main() {
	const char *src="test.txt";
	
	const char *dest="shortcut_test.txt";

	int x = symlink(src, dest);

	if(x == 0)
		printf("Soft link is created\n");
	else
		printf("Failed\n");
}
