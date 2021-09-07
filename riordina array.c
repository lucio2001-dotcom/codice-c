#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define SIZE 12
int riordina(int vett[],int size);
int main()
{
    srand(time(NULL));
    int static arr[SIZE];
    for(size_t i=0;i<SIZE;i++)
    {
        arr[i]=rand()%100;
        printf("%d\n",arr[i]);
    }
    printf("\n\n");
    riordina(arr,SIZE);
    for(size_t k=0;k<SIZE;k++)
    {
        printf("%d\n",arr[k]);
    }
}
int riordina(int vett[],int size)
{   
    for(size_t l=0;l<size;l++)
    {
        if(vett[l]<vett[l-1])
        {
            int min;
            int max;
            min=vett[l];
            max=vett[l-1];
            vett[l-1]=min;
            vett[l]=max;
        }
        else;
        continue;
    }
}