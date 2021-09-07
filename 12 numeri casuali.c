#include <stdio.h>
#include <stdlib.h>
#include<time.h>
int main()
{
    int vett[12];
    srand(time(NULL));
    for(size_t i=0;i<12;i++)
    {
        vett[i]=rand()%100;
        printf("%d\n",vett[i]);
    }
}