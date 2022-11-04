// Shubham Verma
// MT2021132
#include <stdio.h>
#include <unistd.h>

int main() {
	char pathname[] = "/bin/ls";
	int ex = execl(pathname, "ls", "-l", "-R", NULL);
	perror("execl");
	return 0;
}
