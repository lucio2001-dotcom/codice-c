#include <stdio.h>
#define MAX 50
float avg(float vett[],size_t size,int n);
int main()
{
    float min=10;
    float max=0;
    float media=0;
    int num;
    float arr[MAX];
    printf("inserire numero voti:\n");
    scanf("%d",&num);
    printf("inserire voti:\n");
    for(size_t i=0;i<num;i++)
    {
        printf("voto %lu:\n",i+1);
        scanf("%f",&arr[i]);
        if(arr[i]>max)
        {
            max=arr[i];
        }
        else;
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    printf("il minimo è:%f\n",min);
    printf("il massimo è:%f\n",max);
    printf("la media è:%f\n",avg(arr,MAX,num));
}
float avg(float vett[],size_t size,int n)
{
    float tot=0;
    for(size_t k=0;k<n;k++)
    {
        tot=tot+vett[k];
    }
    return tot/n;
}