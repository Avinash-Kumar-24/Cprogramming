#include<stdio.h>
void print(int n)
{
    char *name = {"avi"};
    if(n == 0)
    return;
    else
    printf("%s\n",name);
    print(n-1);
}
int main()
{
    int n;
    scanf("%d",&n);
    print(n);
}