#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    ptr=(int*)malloc(1000000000);
    if (ptr!=NULL)
    {
        printf("allocazione avvenuta");
        while(0!=1)
        {
            printf("NULL\n");
        }
    }
    else
    {
        printf("failed");
    }
    ptr=NULL;
    free(ptr);
}