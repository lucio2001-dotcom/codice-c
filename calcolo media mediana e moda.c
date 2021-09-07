#include <stdio.h>
#define siz 100
int media(int vet1[],int size);
int mediana(int vet2[],int size2);
int moda(int vet3[],int size3);
int main()
{
    int a;
    int b;
    int c;
    int d;
    int e;
    int f;
    int vet[siz];
    for(size_t v=0;v<siz;v++)
    {
        vet[v]=0;
    }
    printf("PER CHIUDERE CNTRL C|Z\n1)menu\n2)esci\n");
    scanf("%d",&a);
    if(a==1)
    {
        printf("1)inserire dati\n2)visualizzare dati\n");
        scanf("%d",&b);
        if(b==1)
        {
            for(size_t i=0;i<siz;i++)
            {
                printf("1)inseire dato %lu\t2)interrompere l'inserimento\n",i+1);
                scanf("%d",&e);
                if(e==1)
                {
                    printf(":\a");
                    scanf("%d",&vet[i]);
                }
                else;
                if(e==2)
                {
                    break;
                }
            }
            printf("dati inseriti\n");
            printf("visualizzare dati?\n1)si\t2)no\n");
            scanf("%d",&c);
            if(c==1)
            {
                printf("quali dati visualizzare?\n1)dati\t2)media\t3)mediana\t4)moda\n");
                while((d=getchar())!=EOF)
                {
                    switch(d)
                    {
                        case'1':
                        {
                            printf("n.dato\tdato\n");
                            for(size_t r=0;r<siz;r++)
                            {
                                printf("%lu\t%d\n",r+1,vet[r]);
                            }
                        }
                        break;
                        case'2':
                        {
                            printf("la media è:%d\n",media(vet,siz));
                        }
                        break;
                        case'3':
                        {
                            printf("la mediana è:%d\n",mediana(vet,siz));
                        }
                        break;
                        case'4':
                        {
                            printf("la moda è:%d\n",moda(vet,siz));
                        }
                        break;
                    }
                }
                return 0;
            }
            else;
            if(c==2)
            {
                return 0;
            }
            
        }
        else;
        if (b==2)
        {
            {
                printf("quali dati visualizzare?\n1)dati\t2)media\t3)mediana\t4)moda\n");
                while((f=getchar())!=EOF)
                {
                    switch(f)
                    {
                        case'1':
                        {
                            for(size_t u=0;u<siz;u++)
                            {
                                printf("n.dato\tdato\n");
                                printf("%lu\t%d",u+1,vet[u]);
                            }
                        }
                        break;
                        case'2':
                        {
                            printf("la media è:%d\n",media(vet,siz));
                        }
                        break;
                        case'3':
                        {
                            printf("la mediana è:%d\n",mediana(vet,siz));
                        }
                        break;
                        case'4':
                        {
                            printf("la moda è:%d\n",moda(vet,siz));
                        }
                        break;
                    }
                }
                return 0;
            }
        }
        
    }
    else;
    if(a==2)
    {
        return 0;
    }
}
int media(int vet1[],int size)
{
    int count;
    for(size_t z=0;z<size;z++)
    {
        if(vet1[z]!=0)
        {
            count++;
        }
    }
    int tot;
    tot=0;
    for(size_t x=0;x<size;x++)
    {
        tot=tot+vet1[x];
    }
    return tot/count;
}
int mediana(int vet2[],int size2)
{
    int counter;
    counter=0;
    for(size_t g=0;g<size2;g++)
    {
        if(vet2[g]!=0)
        {
            counter++;
        }
        else;
        {
            continue;
        }
    }
    if(counter%2==1)
    {
        return(vet2[size2/2]);
    }
    else;
    if(counter%2==0)
    {
        return((vet2[size2/2]+vet2[size2/2-1])/2);
    }
}
int moda(int vet3[],int size3)
{
    int corrente;
    int risultati[size3];
    int max;
    for(size_t y=0;y<size3;y++)
    {
        corrente=vet3[y];
        for(size_t o=0;o<size3;o++)
        {
            if(vet3[o]==corrente)
            {
                risultati[y]++;
            }
        }
        max=risultati[0];
        for(size_t w=0;w<size3;w++)
        {
            if(risultati[w>max])
            {
                max=risultati[w];
            }
        }
    }
    return max;
}