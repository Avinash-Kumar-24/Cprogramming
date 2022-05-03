#include<stdio.h>
#include<math.h>
int pow_n(int base,int exponent)
{
    if(exponent == 0)
    return 1;
    else
    return 2 * pow_n(base,exponent-1);
}
int main()
{
    int store_pow_n = 0;
    int exponent = 10,base = 2;
    
    store_pow_n = pow_n(2,10);
    printf("%d",store_pow_n);
    return 0;
}