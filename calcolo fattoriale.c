#include <stdio.h>
long long int factorial(long long int x);
int main()
{
    long long int fact;
    printf("ins fact:\n");
    scanf("%lld",&fact);
    while(fact>0)
    {
    printf("fact of %lld is:%lld",fact,factorial(fact));
    printf("\n");
    fact--;
    }
}
long long int factorial(long long int x)
{
    long long int f;
    f=1;
    for(unsigned int c=0;c<x;c++)
    {
        f=f*x;
        x=x-1;
    }
    return f;
}