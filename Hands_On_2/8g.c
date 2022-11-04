// Shubham Verma
// MT2021132
#include <sys/time.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>


void signal_handler(int signal_number) {
    printf("Received SIGPROF.\n");
}



int main(int argc, char const *argv[]) {
	struct itimerval it_val;
	if(signal(SIGPROF, signal_handler) == SIG_ERR)
	{
		perror("signal()");
		exit(EXIT_FAILURE);
	}
	// timer will expire intially after 1 second and 250 microseconds
	it_val.it_value.tv_sec = 1;
	it_val.it_value.tv_usec = 250;
	// and then at interval of 1 second and 10 microseconds
	it_val.it_interval.tv_sec = 1;
	it_val.it_interval.tv_usec = 10;

	if(setitimer(ITIMER_PROF, &it_val, NULL) == -1)
	{
		perror("setitimer()");
		exit(EXIT_FAILURE);
	}
	while(1);
	exit(EXIT_SUCCESS);
}