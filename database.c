#include <stdio.h>
struct record
{
    char nome[20];
    char cognome[20];
    unsigned int eta;
    double conto;
};
struct record deck[50];
typedef struct record var;
int main()
{
    FILE *ptr;
    if((ptr=fopen("file.dat","wb+"))==NULL)
    {
        printf("errore\n");
    }
    else;
    {
        var vuoto={"","",0,0.0};
        for(size_t i=0;i<50;i++)
        {
            scanf("%s%s%u%lf",deck[i].nome,deck[i].cognome,&deck[i].eta,&deck[i].conto);
            fprintf(ptr,"%lu)",i+1);
            fwrite(&deck[i],sizeof(struct record),1,ptr);
            fprintf(ptr,"\n");
            fread(&deck[i],sizeof(struct record),1,ptr);
            printf("input:\n%s\t%s\t%u\t%lf\t\a\n",deck[i].nome,deck[i].cognome,deck[i].eta,deck[i].conto);
        }
        fclose(ptr);
    }

}