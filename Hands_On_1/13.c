// Shubham Verma
// MT2021132
#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
#include <sys/types.h>
#include <unistd.h>

void main() {
	fd_set rfds;
	struct timeval tv;
	int i;
	FD_ZERO(&rfds);
	FD_SET(0,&rfds);
	tv.tv_sec = 10;
	tv.tv_usec = 0;

	i = select(1, &rfds, NULL, NULL, &tv);
	if(i)
		printf("Data is available within ten seconds.\n");
	else
		printf("No data within ten seconds.\n");
}

