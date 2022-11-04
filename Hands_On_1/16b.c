// Shubham Verma
// MT2021132
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>

void main() {
	char buf[100], c;
	int fd = open("test.txt", O_CREAT | O_RDWR | O_APPEND); 
	struct flock fl;
	fl.l_type = F_RDLCK;
	fl.l_whence = SEEK_CUR;
	fl.l_start = 0;
	fl.l_len = 0;
	fl.l_pid = getpid();

	printf("Locking file....Please wait\n");

	if(fcntl(fd, F_SETLKW, &fl)==-1) {
		perror("fcntl");
	}

	printf("File Locked\n");


	printf("\n\nContents of file :- \n");
	while(read(fd, &c, 1)) { 
		write(1, &c, 1);
	}

	printf("\n\nPress any key to unlock file\n");
	getchar();

	fl.l_type = F_UNLCK;

	printf("Unlocking file....\n");
	fcntl(fd, F_SETLKW, &fl);
	printf("File Unlocked\n");
}
