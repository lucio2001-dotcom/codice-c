#include <stdio.h>
int verifica(int vet[],size_t size,int key);
int print_imb(int post,int ke);
int main()
{
    int static posti[10];
    int a;
    int b;
    int chiave;
    int posto;
    printf("opzioni:\n1)prenotare posto\t2)visualizza posti occupati\n");
    scanf("%d",&a);
    while((a=getchar())!=EOF)
    {
        switch(a)
        {
            case'1':
            {
                int class;
                printf("scegliere classe:1)economy\t2)first\n");
                scanf("%d",&class);
                if(class==1)
                {
                    chiave=0;
                    printf("ha scelto economy\n");
                    printf("verifica posti liberi...\n");
                    verifica(posti,10,chiave);
                    printf("inserire posto da prenotare:\n");
                    scanf("%d",&posto);
                    if(posto<1||posto>5)
                    {
                        printf("errore\n");
                        break;
                    }
                    else;
                    {
                        if(posti[posto]==0)
                        {
                            posti[posto]=1;
                            printf("prenotazione avvenuta con successo\n");
                            printf("stampa carta di imbarco...\n");
                            print_imb(posto,chiave);
                            printf("confermare?1)si\t2)no\n");
                            scanf("%d",&b);
                            if(b==1)
                            {
                                break;
                                printf("NUOVO BIGLIETTO\n");
                            }
                            else;
                            if(b==2)
                            {
                                posti[posto]=0;
                                printf("NUOVO BIGLIETTO\n");
                            }
                            break;
                        }
                        else;
                        if(posti[posto]==1)
                        {
                            printf("posto occupato\n");
                            break;
                        }
                    }
                }
                else;
                if(class==2)
                {
                    chiave=5;
                    printf("ha scelto luxury\n");
                    printf("verifica posti liberi...\n");
                    verifica(posti,10,chiave);
                    printf("inserire posto da prenotare:\n");
                    scanf("%d",&posto);
                    if(posto<6||posto>10)
                    {
                        printf("errore\n");
                        break;
                    }
                    else;
                    {
                        if(posti[posto]==0)
                        {
                            posti[posto]=1;
                            printf("prenotazione avvenuta con successo\n");
                            printf("stampa carta di imbarco...\n");
                            print_imb(posto,chiave);
                                   printf("confermare?1)si\t2)no\n");
                            scanf("%d",&b);
                            if(b==1)
                            {
                                break;
                            }
                            else;
                            if(b==2)
                            {
                                posti[posto]=0;
                                     printf("confermare?1)si\t2)no\n");
                            scanf("%d",&b);
                            if(b==1)
                            {
                                break;
                                printf("NUOVO BIGLIETTO\n");
                            }
                            else;
                            if(b==2)
                            {
                                posti[posto]=0;
                                printf("NUOVO BIGLIETTO\n");
                            }
                            }
                            break;
                            
                        }
                        else;
                        if(posti[posto]==1)
                        {
                            printf("posto occupato\n");
                            break;
                        }
                    }
                }
            }
            break;
            case'2':
            {
                printf("posti disponibili:\n");
                for(size_t j=0;j<10;j++)
                {
                    printf("posto n.%lu:",j+1);
                    if(posti[j]==0)
                    {
                        printf("libero\n");
                    }
                    else;
                    if(posti[j]==1)
                    {
                        printf("occupato");
                    }
                }
            }
            break;
        }
    }
}
int verifica(int vet[],size_t size,int key)
{
    for(size_t x=0+key;x<size/2+key;x++)
    {
        if(vet[x]==0)
        {
            printf("posto %lu libero\n",x+1);
        }
        else;
        if(vet[x]==1)
        {
            printf("posto %lu occupato\n",x+1);
        }
    }
}
int print_imb(int post,int ke)
{
    char nome[15];
    char cognome[15];
    char data_di_nascita[10];
    printf("inserire nome:");
    scanf("%s",nome);
    printf("inserire cognome:");
    scanf("%s",cognome);
    printf("inserire data di nascita(formato GG/MM/AAAA:");
    scanf("%s",data_di_nascita);
    printf("\n\n\n");
    printf("CARTA DI IMBARCO:\nnome:%s\tcognome:%s\tdata di nascita:%s\n",nome,cognome,data_di_nascita);
    printf("posto:%d\n",post);
    if(ke==0)
    {
        printf("classe:economy\n");
    }
    else;
    if(ke==1)
    {
        printf("classe:luxury\n");
    }
    return 0;
}