#include<stdio.h>


#define max 25
void main()
{
int frag[max],b[max],f[max],i,j,nb,nf,temp;
static int bf[max],ff[max];

printf("\n\tMemory Management Scheme - First Fit");
printf("\nEnter the number of blocks:");
scanf("%d",&nb);
printf("Enter the number of files:");
scanf("%d",&nf);
printf("\nEnter the size of the blocks:-\n");
for(i=1;i<=nb;i++)
{
printf("Block %d:",i);
scanf("%d",&b[i]);
}
printf("Enter the size of the files :-\n");
for(i=1;i<=nf;i++)
{
printf("File %d:",i);
scanf("%d",&f[i]);



}
for(i=1;i<=nf;i++)
{
    for(j=1;j<=nb;j++)
    {
        if(bf[j]!=1)//if that block is already allocated to some file the next block is chosen
        {
            temp=b[j]-f[i];
            if(temp>=0)
            {
                ff[i]=j;//marks that the ith file is allocated to jth block
                bf[j]=1;//marks that the jth block is allocated
                frag[i]=temp;//marks that the ith block has temp space left
                break;//breaks from inner for loop
            }
        }
    }
}
printf("\nFile_no:\tFile_size :\tBlock_no:\tBlock_size:\tFragement");
for(i=1;i<=nf;i++)
printf("\n%d\t\t%d\t\t%d\t\t%d\t\t%d",i,f[i],ff[i],b[ff[i]],frag[i]);

}
