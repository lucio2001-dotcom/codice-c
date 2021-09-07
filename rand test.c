#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main()
{
    srand(time(NULL));
    printf("%d\n",1+rand()%1);
    printf("%d\n",1+rand()%100);
    printf("%d\n",rand()%10);
    printf("%d\n",1000+rand()%113);
    printf("%d\n",-1+rand()%2);
    printf("%d\n",-3+rand()%15);
}