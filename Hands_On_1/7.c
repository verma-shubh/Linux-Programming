// Shubham Verma
// MT2021132
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>


void main() {
	char c;
	int fd1 = open("file_to_read.txt", O_RDWR);
	int fd2 = open("file_to_write.txt", O_CREAT|O_RDWR);
	if(fd1 == -1 || fd2 == -1)
		printf("Error opening file");
	while(read(fd1, &c, 1))
		write(fd2, &c, 1);
	printf("File is copied\n");
}
