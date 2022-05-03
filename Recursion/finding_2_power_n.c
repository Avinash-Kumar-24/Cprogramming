#include<stdio.h>
#include<math.h>
int pow_n(int base,int n)
{
    if(n == 0)
    return 1;
    else
    return 2 * pow_n(2,n-1);
}
int main()
{
    int store_pow_n = 0;
    int n;
    scanf("%d",&n);
    store_pow_n = pow_n(2,n);
    printf("%d",store_pow_n);
    return 0;
}