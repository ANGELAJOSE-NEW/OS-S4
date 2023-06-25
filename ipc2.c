#include<stdio.h>
#include<string.h>
#include<sys/shm.h>
void main(){
 int shmid;
 void *shared_memory;
 shmid=shmget((key_t)2345,1024,0666|IPC_CREAT);
 printf("The id of shared memory id %d\n",shmid);
 shared_memory=shmat(shmid,NULL,0);
 printf("Shared memory is attached at %p\n",shared_memory);
 printf("Data read from shared memory is %s\n",(char *)shared_memory);
 }
 