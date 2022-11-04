// Shubham Verma
// MT2021132
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>

int main(){
    int fd = mkfifo("myfifo_mkfifo", 0744);
    perror("mkfifo()");
    printf("FD of pipe = %d\n", fd);
    return 0;
}