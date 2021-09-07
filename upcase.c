#include <stdio.h>
#include <stdlib.h>
char convert(char *ptr,int size);
int main()
{
    int n;
    char *c_ptr;
    c_ptr=(char*)malloc(10*(sizeof(char)));
    if(c_ptr!=NULL)
    {
        printf("*\n");
    }
    printf("lunghezza parola da convertire:");
    scanf("%d",&n);
    if(n==10)
    {
        printf("OK\n");
    }
    else;
    if(n!=10)
    {
        c_ptr=(char*)realloc(c_ptr,n*(sizeof(char)));
        if(c_ptr!=NULL)
        {
            printf("OK\n");
        }
    }
    printf("inserire parola:\n");
    for(unsigned int i=0;i<n;i++)
    {
        scanf("%c",c_ptr);
        c_ptr++;
    }
    convert(c_ptr,n);
}
char convert(char *ptr,int size)
{
    ptr=ptr-size;
    for(unsigned int k=0;k<size;k++)
    {
        printf("%c",*ptr+1);
        ptr++;
    }
}