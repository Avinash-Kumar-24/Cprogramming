#include<stdio.h>
int fib(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        return(fib(n - 1) + fib(n - 2));
    }
}
int main()
{
    int store_fib = 0;
    int n;
    scanf("%d",&n);
    store_fib = fib(n);
    printf("%d",store_fib);
}