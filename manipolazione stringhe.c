#include <stdio.h>
#include <string.h>
int main()
{
    char s1[20];
    char s2[10];
    int s;
    printf("append?\n1)si\t2)no\n");
    scanf("%d",&s);
    if(s==1)
    {
        printf("insert s1\n");
        scanf("%s",s1);
        printf("insert s2\n");
        scanf("%s",s2);
        strcat(s1,s2);
        printf("nuova stringa=%s",s1);
    }
    else;
    if(s==2)
    {
        printf("insert string\n");
        scanf("%s",s2);
        strcpy(s1,s2);
        printf("la stringa è %s",s1);
    }
}