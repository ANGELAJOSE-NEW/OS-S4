#include<stdio.h>
#include<fcntl.h>
#include<string.h>

void main()

{

char fn[100],pat[10],temp[1000];

FILE *fp;

printf("\n Enter file name : ");

gets(fn);

printf("Enter the pattern to be searched : ");

gets(pat);

fp=fopen(fn,"r");

while(!feof(fp))

{

fgets(temp,1000,fp);

if(strstr(temp,pat))

printf("%s",temp);

}

fclose(fp);

}
