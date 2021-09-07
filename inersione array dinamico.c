#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int swap(int *a,int *b);
int main()
{
    srand(time(NULL));
    int size;
    printf("inserisci dimensione:");
    scanf("%d",&size);
    int *ptr;
    ptr=(int*)malloc(size*sizeof(int));
    if(ptr!=NULL)
    {
        for(unsigned int i=0;i<size;i++)
        {
            *ptr=1+(rand()%100);
            printf("%d\n",*ptr);
            ptr++;
        }
        printf("inversione...\n");
        ptr=ptr-size;
        for(unsigned int k=0;k<size;k++)
        {
            swap(ptr,ptr+size-k);
            printf("%d\n",*ptr);
        }
    }
    else;
    if(ptr==NULL)
    {
        printf("NO MEM");
        return 0;
    }
}
int swap(int *a,int *b)
{
    int tmp;
    tmp=*a;
    *a=*b;
    *b=tmp;
}