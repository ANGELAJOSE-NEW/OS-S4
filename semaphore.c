#include<stdio.h>
#include<stdlib.h>

void main(){
 
 
int ch,n;
 int mutex=1,full=0,x=0;

 int empty=3;
  int wait(int a)
 {
  return(--a);
 }
 
 int signal(int a)
 {
  return(++a);
 }
 
 void producer(){
  mutex=wait(mutex);
  full=signal(full);
  empty=wait(empty);
   x++;
  printf("The producer produced item no %d\n",x);
 
  mutex=signal(mutex);
  }
  
 void consumer(){
  mutex=wait(mutex);
 empty= signal(empty);
  full=wait(full);
  
  printf("The consumer consumed item no %d\n",x);
  x--;
mutex=  signal(mutex);
  }
 do{
 printf("1.PRODUCER\n2.CONSUMER\n3.EXIT\n");
 printf("Enter your choice\n");
 scanf("%d",&ch);

  switch(ch)
   {
    case 1:
     if(mutex==1 && (empty!=0))
      {
       producer();
      }
      else
       printf("The buffer is full\n");
       break;
     case 2:
      if(mutex==1 && full!=0)
       {
        consumer();
       }
      else
       printf("The buffer is empty\n");
       break;
      case 3:
       exit(1);
       break;
   }
 }
 while(1);
 

 }
  