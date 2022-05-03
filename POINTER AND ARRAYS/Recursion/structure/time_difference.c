#include<stdio.h>

struct time
{
    int hour;
    int min;
    int sec;
}t1,t2,dif;

int main()
{
    printf("Enter the Time in hour for first time period:");
    scanf("%d",&t1.hour);
    printf("Enter the time in minute for first time period:");
    scanf("%d",&t1.min);
    printf("Enter the time in second for first time period:");
    scanf("%d",&t1.sec);
    
    printf("Enter the Time in hour for second time period:");
    scanf("%d",&t2.hour);
    printf("Enter the time in minute for second time period:");
    scanf("%d",&t2.min);
    printf("Enter the time in second for second time period:");
    scanf("%d",&t2.sec);
    
    dif.hour = t2.hour - t1.hour;
    dif.min = t2.min - t1.min;
    dif.sec = t2.sec - t1.sec;
    
    printf("The time difference is %d hour %d minute %d second",dif.hour,dif.min,dif.sec);
    
    return 0;
}