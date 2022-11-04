// Shubham Verma
// MT2021132
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void main() {
	if(!fork()) {
		int fd1 = open("22_test.txt", O_CREAT|O_WRONLY|O_APPEND, S_IRWXU);
		char buf1[] = "This is written by child process.";
		write(fd1, buf1, sizeof(buf1));
		close(fd1);
	}
	else {	
		int fd2 = open("22_example.txt", O_WRONLY|O_APPEND, S_IRWXU);
		char buf2[] = "This is written by parent process.";
		write(fd2, buf2, sizeof(buf2));
		close(fd2);
	}
}
