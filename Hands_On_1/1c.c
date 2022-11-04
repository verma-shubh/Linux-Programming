// Shubham Verma
// MT2021132
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>

void main() {
	const char *a = "test.txt";
	unlink(a);
	int r = mknod(a, S_IFIFO, 0);
	if(r == -1)
		perror("mknod");
}
