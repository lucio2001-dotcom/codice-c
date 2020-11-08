#include <stdio.h>
int main ()
{
    float var1;
    float var2;
    float var3;
    float var4;
    float num1;
    float num2;
    int ch;
printf("calcolatrice\n premi 1 per addizione\n premi 2 per sottrazione\n premi 3 per moltiplicazione\n premi 4 per divisione\n");
    while ((ch = getchar())  !=EOF)
    {
        switch (ch)
        {
        case '1':
           { printf ("inserisci il primo numero  ");
             scanf ("%f",&num1);
             printf ("inserisci il secondo numero  ");
             scanf ("%f",&num2);
             var1=num1+num2;
             printf ("la somma è:   %f",var1);
           }
            break;
        case '2':
            {
                printf ("inserisci il primo numero  ");
                scanf  ("%f",&num1);
                printf ("inserisci il secondo numero  ");
                scanf  ("%f",&num2);
                var2=num1-num2;
                printf ("la differenza è:   %f",var2);
            }
            break;
        case '3':
            {
                printf ("inserisci il primo numero  ");
                scanf  ("%f",&num1);
                printf ("inserisci il secondo numero  ");
                scanf  ("%f",&num2);
                var3=num1*num2;
                printf ("il prodotto è:   %f",var3);
            }
            break;
        case '4':
            {
                printf ("inserisci il primo numero  ");
                scanf  ("%f",&num1);
                printf ("inserisci il secondo numero  ");
                scanf  ("%f",&num2);
                var4=num1/num2;
                printf ("il risultato è:   %f",var4);


            }
        default:printf(".");
            break;
        }
    }
    return 0;
}
