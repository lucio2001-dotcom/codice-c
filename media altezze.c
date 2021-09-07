#include <stdio.h>
#define SIZE 10
int media(int group [],int size);
int main()
{
    int altezze[SIZE];
    for(size_t i=0;i<SIZE;i++)
    {
        printf("inserisci altezza %lu in centimetri:\n",i+1);
        scanf("%d",&altezze[i]);
    }
    printf("l'altezza media è:%d",media(altezze,SIZE));
}
int media(int group [],int size)
{
    int tot;
    tot=0;
    for(size_t k=0;k<size;k++)
    {
        tot=tot+group[k];
    }
    return tot/size;
}