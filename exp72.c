#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<sys/shm.h>
#include<unistd.h>
void main(){
char buff[100];
void *shared_memory;
int shmid;
shmid=shmget((key_t)2345,1024,0666);
printf("Key of shared memory is %d\n",shmid);
shared_memory=shmat(shmid,NULL,0);
printf("Process attached to %p\n",shared_memory);
printf("Data read from shared memory is %s",(char *)shared_memory);
}
