#include <stdio.h>
#include <ctype.h>
void convert(char *ptr);
int main()
{
    int a;
    char string[50];
    printf("inserire stringa minuscola,max 50 caratteri\n");
    scanf("%s",string);
    printf("la string è %s\n",string);
    printf("convertirla\n1)si\t2)no\n");
    scanf("%d",&a);
    if(a==1)
    {
        convert(string);
        printf("la stringa convertita è \n%s",string);
    }
    else;
    if(a==2)
    {
        return 0;
    }
}
void convert(char *ptr)
{
    while(*ptr!='\0')
    {
        *ptr=toupper(*ptr);
        *ptr++;
    }
}