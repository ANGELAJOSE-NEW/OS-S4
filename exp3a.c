
#include<fcntl.h>
#include<unistd.h>
#include<stdio.h>
#include<string.h>
void main()
{
FILE *fp,*fp2;
char ch;
int sc=0;
char f1[100],f2[100];
printf("Enter the path of file to copy from ");

gets(f1);
printf("Enter the path of file to copy to ");
gets(f2);
fp=fopen(f1,"r");
fp2=fopen(f2,"w");
if(fp==NULL)
printf("unable to open a file",f1);
else
{
while(!feof(fp))
{
ch=fgetc(fp);
fputc(ch,fp2);

}}


fclose(fp);
}
