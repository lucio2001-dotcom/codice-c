#include <stdio.h>
int main ()
{
    int var1;
    int var2;
    int var3;
    int var4;
    int num1;
    int num2;
    int ch;
printf("calcolatrice\n premi 1 per addizione\n premi 2 per sottrazione\n premi 3 per moltiplicazione\n premi 4 per divisione");
    while ((ch = getchar())  !=EOF)
    {
        switch (ch)
        {
        case '1':
           { printf ("inserisci il primo numero  ");
             scanf ("%d",&num1);
             printf ("inserisci il secondo numero  ");
             scanf ("%d",&num2);
             var1=num1+num2;
             printf ("la somma è:   %d",var1);
           }
            break;
        case '2':
            {
                printf ("inserisci il primo numero  ");
                scanf  ("%d",&num1);
                printf ("inserisci il secondo numero  ");
                scanf  ("%d",&num2);
                var2=num1-num2;
                printf ("la differenza è:   %d",var2);
            }
            break;
        case '3':
            {
                printf ("inserisci il primo numero  ");
                scanf  ("%d",&num1);
                printf ("inserisci il secondo numero  ");
                scanf  ("%d",&num2);
                var3=num1*num2;
                printf ("il prodotto è:   %d",var3);
            }
            break;
        case '4':
            {
                printf ("inserisci il primo numero  ");
                scanf  ("%d",&num1);
                printf ("inserisci il secondo numero  ");
                scanf  ("%d",&num2);
                var4=num1/num2;
                printf ("il risultato è:   %d",var4);


            }
        default:printf(".");
            break;
        }
    }
    return 0;
}
