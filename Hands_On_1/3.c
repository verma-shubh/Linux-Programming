// Shubham Verma
// MT2021132
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

void main() {
	const char *pathname = "created_file.txt";
	mode_t m = S_IRWXU|S_IRWXG|S_IRWXO;
	int x = creat(pathname, m);
	printf("File descriptor value - %d\n", x);
}
