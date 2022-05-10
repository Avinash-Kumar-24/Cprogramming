#include<stdio.h>
#include<stdlib.h>
int max(int *a,int size)
{
    int i;
    int max = a[0];
    for(i=0;i<size;i++)
    {
        if(max < a[i])
        max = a[i];
    }
    return max;
}
void sort(int *a,int size)
{
    int i,j;
    int m =  max(a,size); 
    int *count = (int*)malloc(sizeof(int)*m+1);
    for(i = 0;i < m+1;i++)
    {
        count[i] = 0;
    }
    for(i = 0;i < size; i++)
    {
        count[a[i]] = count[a[i]] + 1;
    }

    i = 0;
    j = 0;
    while(i<=m)
    {
        if(count[i]>0)
        {
            a[j] = i;
            count[i] = count[i] - 1;
            j++;
        }
        else
        {
            i++;
        }
    }

    for(i=0;i<size;i++)
    {
        printf("%d",a[i]);
    }
}
int main()
{
    int n,i;
    printf("Enter the size of array");
    scanf("%d",&n);

    int *arr = (int *)malloc(sizeof(int)*n);
    printf("Enter the element in the array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    sort(arr,n);
    return 0;
}