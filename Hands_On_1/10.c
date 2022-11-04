// Shubham Verma
// MT2021132
#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>


void main() {
	int fd = open("10_test.txt", O_CREAT|O_EXCL|O_RDWR,S_IRWXU|S_IRWXG|S_IRWXO);

	if(fd < 0) 
		printf("Error\n");
	else {	
		char buf[] = "0123456789abcd";
		int cou = write(fd, buf, 10);
		int l_seek_return = lseek(fd, 10, SEEK_CUR);
		printf("lseek return value : %d\n", l_seek_return);
		write(fd, buf, 10);
	}
}
