#include<stdio.h>
#include<unistd.h>
#include <fcntl.h>
#include<string.h>
void main(){
FILE *F,*F1;
 char f1[100],f2[100];
 printf("Enter the name of file to copy from");
 gets(f1);
 printf("Enter the name of file to copy to");
 gets(f2);
 F=fopen(f1,"r");
 F1=fopen(f2, "w");
 if(F==NULL){
  printf("File does not exist");
  }
  while(!feof(F)){
   char c=fgetc(F);
   fputc(c,F1);
   }
   fclose(F);
   fclose(F1);
   }
   