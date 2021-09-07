#include<stdio.h>
#include<stdlib.h>
struct nodo
{
    int n;
    struct nodo *ptr;
};
int add(struct nodo *start,int var);
int del(struct nodo *start,int var);
int print(void *start);
int ver(void *start);
int main()
{
    typedef struct nodo nodo;
    typedef nodo *nodoptr;
    struct nodo *sptr;
    int action;
    printf("azioni\n1)aggiungi\t2)rimuovi\t3)visualizza\n");
    scanf("%d",&action);
    while(action>0&&action<4)
    {
        switch(action)
        {
            case 1:
            {
                printf("lista:\n");
                print(sptr);
                int valore;
                printf("inserisci valore:");
                scanf("%d",&valore);
                add(sptr,valore);
                printf("lista:\n");
                print(sptr);
            }
            break;
            case 2:
            {
                if(ver(sptr)==0)
                {
                    return 0;
                }
                else;
                if(ver(sptr)==1)
                {
                    printf("lista:\n");
                    print(sptr);
                    int valore2;
                    printf("inserisci valore:");
                    scanf("%d",&valore2);
                    del(sptr,valore2);
                    printf("lista:\n");
                    print(sptr);
                }
            }
            break;
            case 3:
            {
                print(sptr);
            }
            break;
            default:
            {
                printf("NO DATA");
            }
        }
    }
}
int add(struct nodo *start,int var)
{
    struct nodo *new;
    new=malloc(sizeof(struct nodo));
    if(new!=NULL)
    {
        new->n=var;
        new->ptr=NULL;
    }
    else;
    if(new==NULL)
    {
        printf("NO MEM\n");
        return 0;
    }
    struct nodo *prev=NULL;
    struct nodo *cur=start;
    while(cur!=NULL)
    {
        prev=cur;
        cur=cur->ptr;
    }
    if(prev=NULL)
    {
        
        *start=new;
    }
    else;
    if(prev!=NULL)
    {
        prev->ptr=new;
        new->ptr=cur;
    }
}
int del(struct nodo *start,int var)
{
    if(ver(start)!=0)
    {
        if(start->n==var)
        {
            struct nodo *temp;
            temp=start;
            start=start->ptr;
            free(temp);
        }
        else;
        if(start->n!=var)
        {
            struct nodo *prev=start;
            struct nodo *cur=start->ptr;
            while(cur!=NULL&&cur->n!=var)
            {
                prev=cur;
                cur=cur->ptr;
            }
            if(cur!=NULL)
            {
                struct nodo *temp;
                temp=cur;
                prev->ptr=cur->ptr;
                free(temp);
            }
            else;
            {
                printf("valore non trovato\n");
            }
            
        }
    }
}
int print(void *start)
{
    if(ver(start)!=0)
    {
        struct nodo *cur=start;
        while(cur!=NULL)
        {
            printf("%d\n",cur->n);
            cur=cur->ptr;
        }
    }
    else;
    {
        return 0;
    }
}
int ver(void *start)
{
    if(start==NULL)
    {
        printf("LISTA VUOTA\n");
        return 0;
    }
    else;
    {
        return 1;
    }
}