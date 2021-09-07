#include <stdio.h>
int main()
{
    int grandezza;
    int counter;
    counter=1;
    printf("inserisci grandezza tabella\n");
    scanf("%d",&grandezza);
    while(counter<=grandezza)
    {
        printf("%d\t%d\t%d\t%d\t%d\n",counter,counter*counter,counter*counter*counter,counter*counter*counter*counter,counter*counter*counter*counter*counter);
        counter++;
    }
}