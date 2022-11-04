// Shubham Verma
// MT2021132
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

void main()
{
	char c;
	char buf[100];
	int i = 0;

	int fd1 = open("test.txt", O_CREAT|O_RDONLY); // READ-ONLY MODE

	if(fd1 == -1)
		printf("Error opening file");

	while(read(fd1, &c, 1))
	{
		if(c == '\n')
			sleep(1);

		printf("%c", c);  // acts as write sys call with file descriptor 0
	} 
}
