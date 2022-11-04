// Shubham Verma
// MT2021132
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

void main() {
	char fname[50];
	printf("enter the file name:");
	scanf("%s",fname);
	struct stat s;
	int i = lstat(fname,&s);
	printf("The file type is:");
	if(S_ISREG(s.st_mode))
		printf("Regular file\n");
	else if(S_ISDIR(s.st_mode))
		printf("Directory file\n");
        else if(S_ISBLK(s.st_mode))
                printf("Block Special file\n");
        else if(S_ISCHR(s.st_mode))
                printf("Character Special file\n");
        else if(S_ISFIFO(s.st_mode))
                printf("FIFO file\n");
        else if(S_ISLNK(s.st_mode))
                printf("Symbolic link file\n");
}

