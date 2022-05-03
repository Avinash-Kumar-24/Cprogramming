#include<stdio.h>
void swap(int*num1,int*num2,int*num3);
int main()

{
    int number1,number2,number3;
    printf("Enter the numbers:");
    scanf("%d %d %d",&number1,&number2,&number3);

    printf("The numbers Before swaping:\n");

    printf("%d %d %d",number1,number2,number3);

    swap(&number1,&number2,&number3);

    printf("\nThe numbers after swaping:\n");

    printf("%d %d %d",number1,number2,number3);

    return 0;
}
void swap(int *num1,int *num2,int *num3)
{
    int temp;
    temp=*num2;
    *num2=*num1;
    *num1=*num3;
    *num3=temp;
}