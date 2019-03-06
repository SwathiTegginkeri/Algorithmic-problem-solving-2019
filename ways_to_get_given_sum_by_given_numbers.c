#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int sum,num,i,j,k;
    printf("Enter the required sum: ");
    scanf("%d",&sum);
    printf("\nEnter number of integers: ");
    scanf("%d",&num);
    int intgs[num];
    printf("\nEnter %d integers:",num);
    for(i=0;i<num;i++)
        scanf("%d",&intgs[i]);
    int table[sum+1];
    memset(table,0, (sum+1)*sizeof(int));
    table[0]=1;
    for(i=0;i<num;i++)
    {
       for(j=0,k=intgs[i];j<=(sum-intgs[i]);j++,k++)
       {
            if(table[j]>0)
            {
                (table[k])++;
            }

        }
    }
    printf("\nTable:\n");
    for(i=0;i<=sum;i++)
    {
        printf("%d ",table[i]);
    }
    printf("\nResult=%d",table[sum]);
}

