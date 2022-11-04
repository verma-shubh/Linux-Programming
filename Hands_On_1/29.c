// Shubham Verma
// MT2021132
#include <stdio.h>
#include <sched.h>
#include <unistd.h>

// This has to be executed in root mode.
int main() {
	printf("Current policy's value : %d\n", sched_getscheduler(getpid()));
	struct sched_param prm;
	prm.sched_priority = 1;
	int sched_policy = sched_setscheduler(getpid(), SCHED_FIFO, &prm);
	printf("Updated policy's value : %d\n", sched_getscheduler(getpid()));
	return 0;
}
