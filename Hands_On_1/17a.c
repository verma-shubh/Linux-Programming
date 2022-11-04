// Shubham Verma
// MT2021132
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

void main() {
	int ticket_reservation = 0;
	int fd = open("ticket_reservation.txt", O_CREAT | O_RDWR | O_TRUNC, 0777);
	write(fd, &ticket_reservation, sizeof(int));
	close(fd);
}
