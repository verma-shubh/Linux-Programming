// Shubham Verma
// MT2021132
#include <stdio.h>
#include <unistd.h>

void main() {
	char buf[100];
	int n = read(0, buf, sizeof(buf));
	write(1, buf, n);
}
