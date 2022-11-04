// Shubham Verma
// MT2021132
#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <fcntl.h>
#include <stdlib.h>

int main()
{
	char rc1[11] = "Record1\n";
	char rc2[11] = "Record2\n";
	char rc3[11] = "Record3\n";
	char new[11] = "Recordnew\n";
	int fd = creat("file18.txt", 0777);
	if(fd==-1) {
		printf("Error opening file\n");
		exit(1);
	}
	int size = sizeof(rc1);
	write(fd, rc1, size);
	write(fd, rc2, size);
	write(fd, rc3 , size);

	int ch;
	printf("Enter the record no which you want to modify : ");
	scanf("%d", &ch);

	struct flock fl;
	fl.l_type = F_WRLCK;
	fl.l_whence = SEEK_SET;
	fl.l_start = ((ch-1)*size)+1;
	fl.l_len = size;
	fl.l_pid = getpid();

	printf("Locking.....\n"); 

	fcntl(fd, F_SETLKW, &fl);

	printf("Locked.\n");

	lseek(fd, ((ch-1)*size), SEEK_SET);
	int sz = read(fd, new, size);
	new[sz] = '\0';

	printf("Read content : %s\n", new);

	write(fd, new, size);
	printf("Press any key to unlock\n"); 

	getchar();
	getchar();

	fl.l_type = F_UNLCK;
	fcntl(fd, F_SETLKW, &fl);

	printf("Unlocked\n");
	close(fd);
	return 0;
}
