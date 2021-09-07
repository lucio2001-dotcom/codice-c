#include<stdio.h>
long double factorial (int x);
int main()
{
    FILE *ptr;
    int k;
    printf("inserire numero:\n");
    scanf("%d",&k);
    printf("%d)factorial:%llf\n",k,factorial(k));
    if((ptr=fopen("file.dat","w"))==NULL)
    {
        printf("errore");
    }
    else;
    {
        for(unsigned int m=0;m<k;m++)
        {
            fprintf(ptr,"%d)factorial:%llf\n",k,factorial(k));
            k--;
            m--;
        }
        fclose(ptr);
    }
}
long double factorial(int x)
{
    if(x<=1)
    {
        return 1;
    }
    else;
    if(x>=2)
    {
        return x*factorial(x-1);
    }
}