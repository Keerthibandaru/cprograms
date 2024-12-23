#include <stdio.h>
void main()
{
    int i,n=0;
    printf("enter the value of n:");
    scanf("%d",&n);
    long int fact=1;
    for(i=1;i<=n;++i)
    {
    fact=fact*i;
    }
    printf("the factorial is %ld",fact);
}
    
