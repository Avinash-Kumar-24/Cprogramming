#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i,j,k;
    int **matrix1;
    int **matrix2;
    int resultant[3][3];
    matrix1=(int**)malloc(sizeof(int)*2);
    
    for(i=0;i<2;i++)
    {
        *(matrix1+i)=(int*)malloc(sizeof(int)*3);
    }
    
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
           printf("Enter the values for matrix 1:");
           scanf("%d",&matrix1[i][j]);
        }
    }
    
    matrix2=(int**)malloc(sizeof(int)*3);
    
    for(i=0;i<3;i++)
    {
        *(matrix2+i)=(int*)malloc(sizeof(int)*2);
    }
    
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
           printf("Enter the values for matrix 2:");
           scanf("%d",&matrix2[i][j]);
        }
    }
    
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            resultant[i][j] = 0;
        }
    }
    
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            for(k=0;k<3;k++)
            {
                resultant[i][j] += matrix1[i][k]*matrix2[k][j];
            }
        }
    }
    for(i=0;i<2;i++)
    {
        for (j=0;j<2;j++)
        {
            printf("%d ",resultant[i][j]);
        }
        printf("\n");
    }
    return 0;
}