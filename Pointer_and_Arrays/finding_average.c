#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,n;
    float sum_of_number = 0;
    float average=0;
    
    printf("Enter the value for n:");
    scanf("%d",&n);
    
    while(n == 0)
    {
        return 0;
    }

    float *ptr = malloc(sizeof(float) * n);
    
    for(i=0;i<n;i++)
    {
        printf("Enter the numbers for finding average:");
        scanf("%f",&ptr[i]);
    }
    
    for(i=0;i<n;i++)
    {
        sum_of_number+=ptr[i];
    }
    
    average=sum_of_number/ (n * 1.0);
    
    printf("The Average is:%f",average);
    
    return 0;
}