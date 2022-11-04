// Shubham Verma
// MT2021132
#include <stdio.h>
#include <unistd.h>

int main() {
	char *args[] = {"/bin/ls", "-l", "-R", NULL};
	execv(args[0], args);
	perror("execl");
	return 0;
}
