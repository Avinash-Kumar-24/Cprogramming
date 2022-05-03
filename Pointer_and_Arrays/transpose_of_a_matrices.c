#include<stdio.h>
#include<stdlib.h>

int main()
{
    int **pt;
    int **transpose;
    int i,j;
    pt = (int**)malloc(sizeof(int)*2);
    for(i=0;i<2;i++)
    {
        *(pt+i) = (int *)malloc (sizeof(int)*3);
    }

    transpose = (int**)malloc(sizeof(int)*3);
    for(i=0;i<3;i++)
    {
        *(transpose +i) = (int*)malloc(sizeof(int)*2);
    }

    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Enter the value in pt %d%d: ",i+1,j+1);
            scanf("%d",&pt[i][j]);
        }
    }

    printf("Entered Matrix\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",pt[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            transpose[j][i] = pt[i][j];
        }
    }
    printf("The transpose matrix\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d ",transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}