// Shubham Verma
// MT2021132
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>

void main() {
	const char *pathname = "test.txt";
	int fd = open(pathname, O_RDWR);
	if(fd == -1)
		printf("Error\n");
	else
		printf("%d", fd);
}
