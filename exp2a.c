#include<stdio.h>
#include<stdlib.h>

#include<dirent.h>
struct dirent *dptr;

void main(){
  DIR *dirp;
  char filename[100];
  printf("Enter directory name\n");
  scanf("%s",&filename);
  if((dirp=opendir(filename))==NULL)
   {
     printf("The given directory does not exist\n");
     exit(1);
   }
  while((dptr=readdir(dirp))!=NULL)
  {
    printf("%s\n",dptr->d_name);
    
  }
  closedir(dirp);
  
}
