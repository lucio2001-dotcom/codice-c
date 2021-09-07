#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    ptr=(int*)malloc(100*sizeof(int));
    if (ptr!=NULL)
    {
        printf("allocazione avvenuta");
    }
    else
    {
        printf("failed");
    }
    ptr=NULL;
    free(ptr);
}