#include<stdio.h>
#include<stdlib.h>

#define MAX 50

int main()
{
    int blocks[MAX], processes[MAX], allocation[MAX], i, j, nb, np, max;
    printf("Enter the number of memory blocks: ");
    scanf("%d", &nb);
    printf("Enter the size of each memory block: ");
    for(i = 0; i < nb; i++)
        scanf("%d", &blocks[i]);
    printf("Enter the number of processes: ");
    scanf("%d", &np);
    printf("Enter the size of each process: ");
    for(i = 0; i < np; i++)
        scanf("%d", &processes[i]);
    for(i = 0; i < np; i++)
    {
        max = -1;
        for(j = 0; j < nb; j++)
        {
            if(blocks[j] >= processes[i])
            {
                if(max == -1)
                    max = j;
                else if(blocks[max] < blocks[j])
                    max = j;
            }
        }
        if(max != -1)
        {
            allocation[i] = max;
            blocks[max] -= processes[i];
        }
    }
    printf("Process No.\tProcess Size\tBlock No.\n");
    for(i = 0; i < np; i++)
    {
        printf("%d\t\t%d\t\t", i+1, processes[i]);
        if(allocation[i] != -1)
            printf("%d\n", allocation[i]+1);
        else
            printf("Not Allocated\n");
    }
    return 0;
}

