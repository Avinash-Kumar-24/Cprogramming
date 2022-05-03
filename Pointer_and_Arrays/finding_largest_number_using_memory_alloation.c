#include<stdio.h>
#include<stdlib.h>

int main()
{

    int n,i;
    printf("Enter the value for n:");
    scanf("%d",&n);
    int *pt =(int*)malloc(sizeof(int)*n);

    for(i=0;i<n;i++)
    {
        printf("Enter the value in pt:\n");
        scanf("%d",&pt[i]);
    }

    for(i=0;i<n;i++)
    {
        if(pt[0]<pt[i+1])
        {
            pt[0] = pt[i + 1];
        }
    }

    printf("The largest number is : %d",pt[0]);

}