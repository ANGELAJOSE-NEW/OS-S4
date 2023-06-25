#include<stdio.h>
#include<stdlib.h>
#include<dirent.h>
void main(int argc , char *argv[]){ 
 struct dirent *dptr;
 DIR *dirp;
 if((dirp=opendir(argv[1]))!=NULL){
  while( (dptr=readdir(dirp))!=NULL){
   printf("%s",dptr->d_name);
   }
  }
 }
 

