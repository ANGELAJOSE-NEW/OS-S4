#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
void main(){
 int pid,pid1,pid2;
 pid=fork();
 if(pid==-1)
  {
    printf("No child process created\n");
    exit(1);
  }
 if(pid!=0)
  {
    pid1=getpid();
    printf("The parent process id is %d\n",pid1);
  }
 else
  {
    pid2=getpid();
    printf("The child process id is %d",pid2);
  }
  
  
}
//in parent process the pid will print the process id of child process because in parent process fork() will return the process id of child process.
