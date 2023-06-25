#include<stdio.h>
#include<string.h>

void main(){
 char filename[100],patt[50],temp[1000];
 FILE *f;
 printf("Enter the file name");
 gets(filename);
 printf("Enter the pattern to be searched");
 gets(patt);
 f=fopen(filename, "r");
 while(!feof(f)){
  fgets(temp,1000,f);
  if(strstr(temp,patt)){
   printf("%s",temp);
   }
  }
 }