#include<stdio.h>
#include<stdlib.h>
void Enterdata1(int **pt1[2])
{
    int i,j;
    pt1 = (int**)malloc(sizeof(int)*2);
    for(i=0;i<2;i++)
    {
        *(pt1+i) = (int*)malloc(sizeof(int)*3);
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Enter the data for %d%d:",i+1,j+1);
            scanf("%d",&pt1[i][j]);
        }
    }
}
void Enterdata2(int **pt2[3])
{
    int i,j;
    pt2 = (int**)malloc(sizeof(int)*3);
    for(i=0;i<3;i++)
    {
        *(pt2+i) = (int*)malloc(sizeof(int)*2);
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("Enter the data for %d%d:",i+1,j+1);
            scanf("%d",&pt2[i][j]);
        }
    }
}
void multiply(int **pt1[2],int **pt2[3],int resultant[3][3])
{
    int i,j,k;
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
                resultant[i][j] += pt1[i][k]*pt2[k][j]; 
            }
        }
    }
}
void display(int resultant[3][3])
{
    int i,j;
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d",resultant[i][j]);
        }
        printf("\n");
    }
}
int main()
{

    int i,j,k;
    int **pt1[2];
    int **pt2[3];
    int resultant[3][3];

    Enterdata1(pt1[2]);
    Enterdata2(pt2[3]);
    multiply(**pt1[2],**pt2[3],resultant[3][3]);
    display(resultant[3][3]);
    return 0;
}