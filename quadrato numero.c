#include <stdio.h>
int square(int x);
int main()
{
    int num;
    printf("inserisci numero\n");
    scanf("%d",&num);
    printf("%d\n\a",square(num));
}
int square(int x)
{
    x=x*x;
    return x;
}
