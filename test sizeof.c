#include <stdio.h>
struct record
{
    char nome[20000];
    char cognome[20000];
    unsigned int eta[20000];
};
typedef struct record lol;
lol deck[20000];
int main()
{
    printf("%lu\n",sizeof(lol));
    printf("%lu\n",sizeof(deck));
    FILE *ptr;
    if((ptr=fopen("file.dat","wb+"))==NULL)
    {
        printf("error");
    }
    else;
    {
        lol blank={"ciao","mondo",999};
        for(size_t i=0;i<20000;i++)
        {
            deck[i]=blank;
            fwrite(&deck[i],sizeof(lol),1,ptr);
            fread(&deck[i],sizeof(lol),1,ptr);
            fprintf(ptr,"\n");
        }
        fclose(ptr);
    }
}