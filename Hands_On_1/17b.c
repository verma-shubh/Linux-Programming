// Shubham Verma
// MT2021132
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <string.h>

void main() {
	int fd = open("ticket_reservation.txt", O_RDWR, 0777);
	struct flock fl;
	int ticket;
	fl.l_type = F_WRLCK;
	fl.l_whence = SEEK_CUR;
	fl.l_start = 0;
	fl.l_len = 0;
	fl.l_pid = getpid();

	printf("\nLocking the file.....\n");

	fcntl(fd, F_SETLKW, &fl);

	printf("File locked...Entered critical section\n");

	read(fd, &ticket, sizeof(int));

	printf("Ticket number alloted is : %d\n", ticket);
	++ticket;
	lseek(fd, 0, SEEK_SET);
	write(fd, &ticket, sizeof(int));
	printf("Next Available ticket number is : %d\n", ticket);

	lseek(fd, 0, SEEK_SET);
	printf("\nPress a key to exit\n");
	getchar();
	fl.l_type = F_UNLCK;
	fcntl(fd, F_SETLKW, &fl);

	printf("Out of critical section. Next booking is available\n"); 
}
