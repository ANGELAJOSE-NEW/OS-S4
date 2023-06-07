#include<stdio.h>
#include<stdlib.h>
int mutex=1,full=0,empty=3,x=0;
void main()
{
 int ch;
 void producer();
 void consumer();
 int wait(int);
 int signal(int);
 do{
  printf("\n1.PRODUCER\n2.CONSUMER\n3.EXIT\n");
  printf("Enter the choice\n");
  scanf("%d",&ch);
  switch(ch)
  {
   case 1:
    if(mutex==1 && (empty!=0) )
    {
     producer();
    }
    else
    {
     printf("Buffer is full");
    }
   break;
   case 2:
    if(mutex==1 && full!=0)
    {
     consumer();
    }
    else
    {
     printf("Buffer is empty");
     
    }
   break;
   case 3:
    exit(0);
    break;
  }
 }
 while(1);
 
 
}

int wait(int s)
{
 return(--s);
 }
int signal(int s)
{
 return(++s);
}
void producer(){
 mutex=wait(mutex);
 empty=wait(empty);
 full=signal(full);
 x++;
 printf("Producer produces the item %d",x);
 mutex=signal(mutex);
 }
 void consumer(){
 mutex=wait(mutex);
 full=wait(full);
 empty=signal(empty);
 printf("\nConsumer consumes item %d",x);
 x--;
 mutex=signal(mutex);
 }

