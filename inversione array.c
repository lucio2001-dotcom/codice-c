#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int swap(int *a,int *b);
int main()
{
    srand(time(NULL));
    int array[10];
    for(size_t i=0;i<10;i++)
    {
        array[i]=1+(rand()%10);
        printf("%d\n",array[i]);
    }
    printf("inversione...\n");
    for(size_t k=0;k<10;k++)
    {
        swap(&array[k],&array[9-k]);
        printf("%d\n",array[k]);
    }
}
int swap(int *a,int *b)
{
    int *tmp;
    *tmp=*a;
    *a=*b;
    *b=*tmp;
}