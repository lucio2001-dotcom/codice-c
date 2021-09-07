#include <stdio.h>
int main()
{
    int value;
    puts("inserisci");
    scanf("%d",&value);
    int mat[10][20];
    for(size_t x=0;x<10;x++)
    {
        for(size_t k=0;k<20;k++)
        {
            mat[x][k]=((x)*value*20)+((k+1)*value);
        }
    }
    for(size_t a=0;a<10;a++)
    {
        printf("\n");
        for(size_t b=0;b<20;b++)
        {
            printf("%d  ",mat[a][b]);
        }
    }
}
