#include<stdio.h>
#include<dirent.h>

int main(int argc,char *argv[])
{
  struct dirent *link;
  DIR *dir;
  dir=opendir(argv[1]);
  printf("Content of directory %s are\n",argv[1]);
  while((link=readdir(dir))!=NULL)
  {
    printf("%s\n",link->d_name);
  }
   closedir(dir);
}

