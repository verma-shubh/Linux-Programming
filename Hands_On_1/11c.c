// Shubham Verma
// MT2021132
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

void main() {
	  int fd1 = open("11_test_fcntl.txt", O_CREAT | O_RDWR | O_TRUNC, 0700);
	  int fd2 = fcntl(fd1, F_DUPFD, 9);
	  if(fd1 == -1 || fd2 == -1)
	  	printf("Error in opening the file\n");	  
	  write(fd1, "This is a new line\n", 19);
	  write(fd2, "Software\n", 9);	  
	  printf("File descriptors used are : %d %d\n", fd1, fd2); 
	  close(fd1);
	  close(fd2);
}
