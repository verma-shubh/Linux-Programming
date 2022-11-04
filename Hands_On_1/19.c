// Shubham Verma
// MT2021132
#include <sys/time.h>
#include <stdio.h>
#include <unistd.h>

unsigned long long rdtsc() {
	unsigned long long dst;
	__asm__ __volatile__("rdtsc":"=A"(dst));
	return dst;
}

void main() {
	long long int start, end;
	start = rdtsc();
	for(int i=0; i<=10000; i++)
		getpid();
	end = rdtsc();
	int nano = (end-start)/2.5;
	printf("The function took %d nano seconds.\n", nano);
}
