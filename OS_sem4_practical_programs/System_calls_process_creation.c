#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
void main()
{
    int pid=-1;
    pid=fork();
    if(pid<0)
    {
        printf("child process creation failed\n");

    }
    if (pid==0)
        printf("after fork,child process created with id =%d",getppid());
    if(pid>0)
        prinf("before fork ,parent id is %d",getppid());
}
