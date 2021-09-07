#include <stdio.h>
long int fib(long int x);
int main()
{
    long int fibon;
    long int fib2;
    printf("insert fib:\n");
    scanf("%ld",&fibon);
    fib2=fibon;
    for(int x=0;x<fibon;x++)
    {
        printf("fib di %ld è:%ld\n",fib2,fib(fib2));
        fib2--;
    }
}
long int fib(long int x)
{
    if(x>=2)
    {
        x=(x-1)+(x-2);
        return x;
    }
    else;
    if(x=1)
    {
        x=1;
        return x;
    }
    else;
    if (x<=0)
    {
        printf("errore\a");
    }
}