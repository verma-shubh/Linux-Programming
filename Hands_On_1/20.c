// Shubham Verma
// MT2021132
#include <stdio.h>
#include <sys/time.h>
#include <sys/resource.h>
#include <unistd.h>

void main() {
	int d = getpriority(PRIO_PROCESS, 0);
	printf("Priority of the current process is %d\n", d);
	int n = nice(5);
	printf("Priority of the current process after using nice is %d\n", getpriority(PRIO_PROCESS, 0));
}
