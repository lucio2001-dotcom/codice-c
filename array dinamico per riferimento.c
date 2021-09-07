#include <stdio.h>
#include<stdlib.h>
float avg(float *ptr,size_t size);
int main()
{
    int num;
    float min=10;
    float max=0;
    float media=0;
    float *ptr;
    ptr=(float*)malloc(40*(sizeof(float)));
    if(ptr!=NULL)
    {
        printf("MEMORY OK\n");
    }
    printf("numero voti:\n");
    scanf("%d",&num);
    while(num!=40)
    {
        ptr=(void*)realloc(ptr,num*(sizeof(float)));
        if(ptr!=NULL)
            {
            printf("MEMORY OK\n");
            }
        else;
        if(ptr==NULL)
        {
            printf("MEMORIA NON DISPONIBILE");
            return 0;
        }
        break;    
    }
    printf("inserimento voti\n");
    for(unsigned int i=0;i<num;i++)
    {
        printf("voto %u:",i+1);
        scanf("%f",ptr);
        if(*ptr>max)
        {
            max=*ptr;
        }
        else;
        if(*ptr<min)
        {
            min=*ptr;
        }
        ptr++;
    }
    printf("il minimo è: %f\n",min);
    printf("il massimo è: %f\n",max);
    printf("la media è:%f\n",avg(ptr,num));
}
float avg(float *ptr,size_t size)
{
    ptr-=size;
    float tot=0;
    for(size_t i=0;i<size;i++)
    {
        tot=tot+*ptr;
        ptr++;
    }
    return tot/size;
}