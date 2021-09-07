#include <stdio.h>
int max(int p,int s,int t);
int main()
{
    int n1;
    int n2;
    int n3;
    printf("il massimo è %d",max(n1,n2,n3));
}
int max(int p,int s,int t)
{
    printf("inserisci i numeri:\n");
    scanf("%d%d%d",&p,&s,&t);
    int m;
    m=p;
    if(s>m)
    {
        m=s;
    }
    if(t>m)
    {
        m=t;
    }
    return m;
}