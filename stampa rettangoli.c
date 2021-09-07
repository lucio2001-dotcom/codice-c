#include<stdio.h>
int stampa(int l1,int l2);
int main()
{
    int s1;
    int s2;
    printf("lunghezza primo lato:\n");
    scanf("%d",&s1);
    printf("lunghezza secondo lato\n");
    scanf("%d",&s2);
    stampa(s1,s2);
}
int stampa(int l1,int l2)
{
    int area;
    area=l1*l2;
    for(unsigned int x=1;x<=area;x++)
    {
        if(x%l1==1)
        {
            printf("\n*");
        }
        else;
        {
            printf("\t*");
        }
    }
}