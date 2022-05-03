#include<stdio.h>

int main()
{
    int arr1[2][3];
    int arr2[3][2];
    int mul[3][3];
    int i,j,k;
    int sum=0;
    
    printf("Enter the value for array 1:\n");
    
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&arr1[i][j]);
        }
        
    }
    
    printf("Enter the value for array 2:\n");
    
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&arr2[i][j]);
        }
    }
    
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            mul[i][j] = 0;
        }
    }
    
    printf("The multiplication of arrays are:\n");
    
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            for(k=0;k<3;k++)
            mul[i][j]+=arr1[i][k]*arr2[k][j];
            printf("  %d",mul[i][j]);
        }
        printf("\n");
    }
    return 0;
}