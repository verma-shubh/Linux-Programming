// Shubham Verma
// MT2021132
#include <stdio.h>
#include <unistd.h>

int main() {
	char *pathname = "/bin/ls";
	char *envp[] = {NULL};
	execle(pathname, "ls" , "-l", "-R", NULL, envp);
	perror("execl");
	return 0;
}
