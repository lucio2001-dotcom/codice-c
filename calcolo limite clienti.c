#include<stdio.h>
int main()
{
    int clients;
    printf("numero clienti?\n");
    scanf("%d",&clients);
    for(unsigned int x=1;x<=clients;x++)
    {
        long int limite;
        printf("inserisci vecchio limite:\n");
        scanf("%ld",&limite);
        limite=limite/2;
        printf("conto\tnuovo limite\n\a");
        printf("000%u\t%ld\n",x,limite);
    }
}