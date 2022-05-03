#include<stdio.h>

int main()
{
    int arr1[3][3];
    int arr2[3][3];
    int add[3][3];
    int i,j;
    
    printf("Enter the value for array 1:\n");
    
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&arr1[i][j]);
        }
        
    }
    
    printf("Enter the value for array 2:\n");
    
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&arr2[i][j]);
        }
    }
    
    printf("The sum of two matrices are:\n");
    
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            add[i][j]=arr1[j][j]+arr2[i][j];  
            printf(" %d",add[i][j]);
        }
        printf("\n");
    }
    return 0;
}