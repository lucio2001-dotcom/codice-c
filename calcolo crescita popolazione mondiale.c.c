#include <stdio.h>
int main()
{
    float cap;
    float r;
    int anni;
    float tot;
    float tax;
    printf("inserisci capitale:\n");
    scanf("%f",&cap);
    printf("inserisci numero anni:\n");
    scanf("%d",&anni);
    printf("inserisci tasso annuale:\n");
    scanf("%f",&r);
    tax=1;
    for(unsigned int c=1;c<=anni;++c)
    {
        tax=tax*(tax+r);
    }
    tot=cap*tax;
    printf("il capitale finale è:\t%f",tot);
}