// Shubham Verma
// MT2021132
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>

void main() {
	int i = 0;
	char file_name[10] = "file_no-";
	while(1) {
		if(i < 5) {
			file_name[8] = i+'1';
			file_name[9] = '\0';
			int fd = creat(file_name, 0777);
			if(fd == -1)
				printf("File number %d is created", i+1);
			++i;
		}
	}
}
/*
Output: 
total 0
lrwx------ 1 maverick maverick 64 Aug 28 19:25 0 -> /dev/pts/0
lrwx------ 1 maverick maverick 64 Aug 28 19:25 1 -> /dev/pts/0
lrwx------ 1 maverick maverick 64 Aug 28 19:25 2 -> /dev/pts/0
l-wx------ 1 maverick maverick 64 Aug 28 19:25 3 -> '/home/maverick/Downloads/3rd_Sem/Software Systems/Assignment_1/file_no-1'
l-wx------ 1 maverick maverick 64 Aug 28 19:25 4 -> '/home/maverick/Downloads/3rd_Sem/Software Systems/Assignment_1/file_no-2'
l-wx------ 1 maverick maverick 64 Aug 28 19:25 5 -> '/home/maverick/Downloads/3rd_Sem/Software Systems/Assignment_1/file_no-3'
l-wx------ 1 maverick maverick 64 Aug 28 19:25 6 -> '/home/maverick/Downloads/3rd_Sem/Software Systems/Assignment_1/file_no-4'
l-wx------ 1 maverick maverick 64 Aug 28 19:25 7 -> '/home/maverick/Downloads/3rd_Sem/Software Systems/Assignment_1/file_no-5'
*/
