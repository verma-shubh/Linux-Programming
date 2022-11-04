// Shubham Verma
// MT2021132
#include <sys/time.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>

int main() {
	struct itimerval timer;
	timer.it_value.tv_sec = 10;
	timer.it_value.tv_usec = 10;
	timer.it_interval = timer.it_value;    
	printf("Interval timer successfully set to 10 sec and 10 microseconds.");
	setitimer(ITIMER_REAL, &timer, NULL);
    while(1);
	exit(EXIT_SUCCESS);
}