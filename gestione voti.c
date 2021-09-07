#include <stdio.h>
int stampa(int vot[][stu],int stu,int mat);
int modificavoto(int vot[mat2][],int mat2,int stu2);
int main()
{
    int st;
    int ma;
    int a;
    int b;
    int c;
    int d;
    puts("n.studenti:");
    scanf("%d",&st);
    puts("n.materie:");
    scanf("%d",&ma);
    int voti[ma][st];
    printf("1)inseire voti\t2)visual voti\n");
    scanf("%d",&a);
    if(a==1)
    {
        for(size_t x=0;x<ma;x++)
        {
            printf("studente %lu\n",x+1);
            for(size_t y=0;y<st;y++)
            {
                printf("materia %lu\n",y+1);
                printf("inseire voto:");
                scanf("%d",&voti[x][y]);
            }
        }
        puts("azioni disponibili:");
        printf("1)visualizza\n2)modifica\n3)esci\n");
        scanf("%d",&b);
        if(b==1)
        {
            stampa(voti[ma][st],ma,st);
            printf("modificare i voti?\n1)si\t2)no\n");
            scanf("%d",&c);
            if(c==1)
            {
                modificavoto(voti[ma][st],ma,st);
            }
            else;
            if(c==2)
            {
                return 0;
            }
        }
        else;
        if(b==2)
        {
            modificavoto(voti[ma][st],ma,st);
            printf("visualizzare i voti?\n1)si\t2)no\n");
            scanf("%d",&d);
            if(d==1)
            {
                stampa(voti[ma][st],ma,st);
            }
            else;
            if(d==2)
            {
                return 0;
            }
        }
        else;
        if(b==3)
        {
            return 0;
        }
    }
    else;
    if(a==2)
    {
         stampa(voti[ma][st],ma,st);
    }
}
int stampa(int vot[mat][],size_t stu,size_t mat)
{
    for(unsigned int i=0;i<mat;i++)
    {
        printf("materia %u\t",i+1);
    }
    printf("\n");
    for(size_t z=0;z<mat;z++)
    {
        printf("studente %lu\t",z+1);
        for(size_t w=0;w<stu;w++)
        {
            printf("%d\t",&vot[mat][stu]);
        }
        printf("\n");
    }
}
int modificavoto(int vot[mat2][],size_t stu2,size_t mat2)
{
    int key1;
    int key2;
    printf("inserisci numero studente\n");
    scanf("%d",&key1);
    printf("inserisci numero materia\n");
    scanf("%d",&key2);
    printf("inserisci nuovo voto\n");
    scanf("%d",&vot[key1][key2]);
}