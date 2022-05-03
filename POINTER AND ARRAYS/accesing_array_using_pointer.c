#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,i;
  
    printf("Enter the Value for n:");
    scanf("%d",&n);
    
    while(n == 0)
    {
        return 0;
    }
  
    int *ptr=malloc(sizeof(int)*n);
    
    for(i=0;i<n;i++)
    {
        printf("Enter the value in array:");
        scanf("%d",&ptr[i]);
    }
  
    printf("printing The values of array using pointer\n");
  
    for(i=0;i<n;i++)
    {
        printf("%d\n",ptr[i]);
    }
    return 0;
}