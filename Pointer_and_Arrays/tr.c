#include <stdio.h>
#include<stdlib.h>
int main() {
	// your code goes here
	int T,i,f1=0,f2=1,n;
	int next =f1+f2;
	int a=0;
	scanf("%d",&T);
	// int *n = (int *)malloc(sizeof(int)*T);
	
	
		for(i=0;i<T;i++)
	{
		scanf("%d\n",&n);
	
		printf("%d %d ",f1,f2);
        for(i=3;i<n;i++)
        {
        printf("%d ",next);
		f1 = f2;
   		f2 = next;
    	next = f1 + f2;
        }	
		printf("\n");
    }
    
	return 0;
}
