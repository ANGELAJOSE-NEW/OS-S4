#include<stdio.h>
#include<string.h>
#include<sys/shm.h>
void main(){
 void *shared_memory;
 int shmid;
 char s[100];
 shmid=shmget((key_t)2345,1024,0666|IPC_CREAT);
 printf("Key of shared memory is %d\n",shmid);
 shared_memory=shmat(shmid,NULL,0);
 printf("Shared memory attached at %p\n",shared_memory);
 printf("Enter the data to be written in the shared memory\n");
 gets(s);
 strcpy(shared_memory,s);
 printf("Data written is %s\n",s);
 }