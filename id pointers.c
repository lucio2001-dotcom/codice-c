#include <stdio.h>
int main()
{
    int a=5;
    int *ptr=&a;
    printf("valore:%d\t%d\n",a,*ptr);
    printf("indirizzo:%d\t%d\n",&a,ptr);
    printf("indirizzo puntatore:%d",&ptr);
}