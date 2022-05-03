#include<stdio.h>
#include<stdlib.h>
typedef struct info
    {
        int marks;
        char grade;
    }info;
    
int main()
{
    int size,i,buffer;
    info temp;
    printf("Enter the number of student: ");
    scanf("%d",&size);
    scanf("%d",&buffer);
    info *arr = (info*)malloc(sizeof(info)*size);
    for(i=0;i<size;i++)
    {
        printf("Enter the marks of student %d",i+1);
        scanf("%d",&temp.marks);
        printf("Enter the grade of student %d",i+1);
        scanf("%c",&temp.grade);
        arr[i] = temp;
    }
    for(i=0;i<size;i++)
    {
        printf("The marks of student %d is %d and the grade is %c ",i+1,arr[i].marks,arr[i].grade);
    }
    return 0;
}