#include <stdio.h>
int main()
{
    int fmc;/*forza matt*/
    int pdtc;//pdt
    int kvc;//kentaro vivo
    int falc;//fr aex
    int voto;
    fmc=0;
    pdtc=0;
    kvc=0;
    falc=0;
    printf("1)vota fm\t2)vota pdt\t3)vota kv\t4)vota fra\t5)stats\n");
    while((voto=getchar())!=EOF)
    {
        switch(voto){
        case'1':
        {
            fmc++;
            printf("votazione avvenuta\n");
        }
        break;
        case'2':
        {
            pdtc++;
            printf("votazione avvenuta\n");
        }
        break;
        case'3':
        {
            kvc++;
            printf("votazione avvenuta\n");
        }
        break;
        case'4':
        {
            falc++;
            printf("votazione avvenuta\n");
        }
        break;
        case'5':
        {
            printf("partito\tnumero voti\n");
            printf("fm\t%d\npdt\t%d\nkv\t%d\nfra\t%d\n",fmc,pdtc,kvc,falc);
        }
        }
    }
    
}