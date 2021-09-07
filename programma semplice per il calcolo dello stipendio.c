//calcolo stipendio
#include <stdio.h>
int main()
{
    float orario;
    int ore;
    float stipendio;
    printf("inserisci numero di ore\n");
    scanf("%d",&ore);
    printf("inserisci stipendio orario\n");
    scanf("%f",&orario);
    if(ore<=40)
    stipendio=ore*orario;
    else;
    if(ore>40)
    {
        stipendio=orario*40+((ore-40)*(orario*1.5));
    }
    printf("lo stipendio è:%f\n",stipendio);
}