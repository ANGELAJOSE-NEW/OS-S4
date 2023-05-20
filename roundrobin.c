#include<stdio.h>
#include<stdlib.h>
struct rr
{
 int pno,btime,sbtime,wtime,lst;
}p[10];
int main(){
int n,ts,i,flag,pp=-1,ptm=0,count;
printf("Round Robin Scheduling\n");
printf("Enter number of process: ");
scanf("%d",&n);
printf("Enter time slice: ");
scanf("%d",&ts);
printf("Enter the burst time\n");
for(i=0;i<n;i++)
{
  printf("Process %d",i+1);
  scanf("%d",&p[i].btime);
  p[i].wtime=p[i].lst=0;
  p[i].pno=i+1;
  p[i].sbtime=p[i].btime;
}

printf("Scheduling\n");
do
{
  flag=0;
  for(i=0;i<n;i++)
  {
    count=p[i].btime;
    if(count>0)
    {
      flag=-1;
      count=(count>=ts)?ts:count;
      printf("\nprocess %d",p[i].pno);
      printf("from %d",ptm);
      ptm=ptm+count;
      printf("to %d",ptm);
      p[i].btime-=count;
      if(pp!=i)
      {
        pp=i;
        p[i].wtime+=ptm-p[i].lst-count;
        p[i].lst=ptm;
      }
    }
  }
}
while(1);
}
