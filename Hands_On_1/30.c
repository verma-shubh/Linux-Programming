// Shubham Verma
// MT2021132
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <string.h>
#include <fcntl.h>
#include <time.h>
#include <stdbool.h>

bool compare_string(char *s1, char *s2)
{
    int n= sizeof(s1)/sizeof(s1[0]);
    
    for(int i=0;i<=n;i++)
    {
        if(s1[i]!=s2[i]) 
            return false;
    }
    return true;
}

int main(int argc, char* argv[])
{
        pid_t pid = 0;
        pid_t sid = 0;

        pid = fork();
   
        if (pid < 0)
        {
           printf("Could not create a child process!\n");
           exit(1);
        }
        if (pid > 0)
        {
           printf("Terminating the parent process\n");
           exit(0);
        }
        
        umask(0);
        sid = setsid();

        if(sid < 0)
        {
          exit(1);
        }

        int count = 0;

        while(1)
        {
                
           sleep(1);

           time_t curtime;
           time(&curtime);
           char *curr_time = ctime(&curtime);
           char *time_at_exec = "Sun Aug 28 23:06:00 2022";

           printf("\nCurrent Time is : %s",curr_time);

           if(compare_string(curr_time, time_at_exec) == true)
           {
             char *args[] = {NULL};
             execv("hello.sh", args);
       	   }
 		 
           if(count==60) 
           {
             printf("Enter time within 1 minute of system time.");
             break;
           }
   
          count++;
        }
        return 0;
}
