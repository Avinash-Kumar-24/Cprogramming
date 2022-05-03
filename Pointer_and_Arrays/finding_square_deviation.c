#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int i;
    float n;
    float sum_for_mean = 0;
    float sum_for_sqr_dev = 0;
    float mean = 0;
    float sqr_deviation = 0;

    printf("Enter the value for n:");
    scanf("%f",&n);

    while(n == 0)
    {
        return 0;
    }

    float *ptr=malloc(sizeof(float)*n);

    for(i=0;i<n;i++)
    {
        printf("Enter the value:");
        scanf("%f",&ptr[i]);
    }

    for(i=0;i<n;i++)
    {
        sum_for_mean+=ptr[i];
    }

    mean = sum_for_mean/n;

    for(i=0;i<n;i++)
    {
        sum_for_sqr_dev+= pow((ptr[i]-mean),2);
    }

    sqr_deviation = sqrt(sum_for_sqr_dev/n);
    
    printf("The square deviation is:%f",sqr_deviation);
    return 0;
}