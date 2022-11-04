// Shubham Verma
// MT2021132
#include <stdio.h>
#include <unistd.h>

int main() {
	int ex = execlp("ls", "ls", "-l", "-R", NULL);
	perror("execl");
	return 0;
}
