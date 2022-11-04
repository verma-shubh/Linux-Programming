// Shubham Verma
// MT2021132
#include <stdio.h>
#include <sched.h>

void main() {
	printf("Minimum real time priority : %d\n", sched_get_priority_min(SCHED_FIFO));
	printf("Maximum real time priority : %d\n", sched_get_priority_max(SCHED_FIFO));
}
