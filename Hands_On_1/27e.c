// Shubham Verma
// MT2021132
#include <stdio.h>
#include <unistd.h>

int main() {
	char *args[] = {"ls", "-l", "-R", NULL};
	execvp(args[0], args);
	perror("execl");
	return 0;
}
