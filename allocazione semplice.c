#include <stdio.h>
#include <stdlib.h>
int main()
{
    int yo[1000000];
    void *ptr;
    ptr=(int*)malloc(sizeof(yo));
    printf("%p",ptr);
    printf("%lu",sizeof(yo));
}