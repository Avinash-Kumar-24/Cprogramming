#include<stdio.h>
#include<stdlib.h>

void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}

int main()
{
    int i,n,j;
    
    printf("Enter the Value for n:");
    scanf("%d",&n);
    
    while(n == 0)
    {
        return 0;
    }
    int *ptr = malloc(sizeof(int)*n);
    
    for(i=0;i<n;i++)
    {
        printf("Enter the values in array:");
        scanf("%d",&ptr[i]);
    }
     for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(ptr[j]<ptr[j+1])
            {
                swap(&ptr[j],&ptr[j+1]);
            }
           
        }
    }
    
    printf("%d",ptr[0]);
    return 0;
}