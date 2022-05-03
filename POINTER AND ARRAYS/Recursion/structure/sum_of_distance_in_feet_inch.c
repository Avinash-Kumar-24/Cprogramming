#include<stdio.h>

struct dis
{
    int feet;
    int inch;
}dis1,dis2,sum;

int main()
{
    printf("Enter the distance in feet for dis1:");
    scanf("%d",&dis1.feet);
    printf("Enter the distance in inch for dis1:");
    scanf("%d",&dis1.inch);
    
    printf("Enter the distance in feet for dis2:");
    scanf("%d",&dis2.feet);
    printf("Enter the distance in inch for dis2:");
    scanf("%d",&dis2.inch);
    
    sum.feet = dis1.feet + dis2.feet;
    sum.inch = dis1.inch + dis2.inch;
    
    sum.feet += sum.inch / 12;
    sum.inch = sum.inch % 12;
    printf("The distance between two distance is %d feet and %d inch",sum.feet,sum.inch);
    return 0;
}