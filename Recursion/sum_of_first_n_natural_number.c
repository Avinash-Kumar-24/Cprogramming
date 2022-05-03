#include<stdio.h>
int adding(int n)
{
    if(n==0)
    return n;
    else 
    return n + adding(n-1);
}
int main()
{
    int store_adding = 0; 
    int n;
    scanf("%d",&n);
    store_adding = adding(n);
    printf("%d",store_adding);
}