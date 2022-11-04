// Shubham Verma
// MT2021132
#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <time.h>

void main() {
	int fd = open("test.txt", O_RDONLY);
	struct stat info;

	fstat(fd, &info);

	printf("Inode no: %lu\n", info.st_ino);
	printf("Hardlink: %lu\n", info.st_nlink);
	printf("uid : %u\n", info.st_uid);
	printf("gid : %u\n", info.st_gid);
	printf("Size : %ld\n", info.st_size);
	printf("Block size : %lu\n", info.st_blksize);
	printf("Number of blocks : %lu\n", info.st_blocks);
	printf("Time of last access : %s\n", ctime(&info.st_atim.tv_sec));
	printf("Time of last modification : %s\n", ctime(&info.st_mtim.tv_sec));
	printf("Time of last change : %s\n", ctime(&info.st_ctim.tv_sec));
}
