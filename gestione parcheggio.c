#include <stdio.h>
float park(float ore);
int main()
{
    float c1;
    float c2;
    float c3;
    printf("inserire ore:\n");
    printf("1:\t");
    scanf("%f",&c1);
    printf("2:\t");
    scanf("%f",&c2);
    printf("3:\t");
    scanf("%f",&c3);
    printf("1:\t%f\n",park(c1));
    printf("2:\t%f\n",park(c2));
    printf("3:\t%f\n",park(c3));
}
float park(float ore)
{
    if(ore<=0)
    {
        printf("errore");
    }
    else;
    if(ore>0&&ore<=3)
    {
        return 2;
    }
    else;
    if(ore>3&&ore<=19)
    {
        return((ore-3)/2)+2;
    }
    else;
    if(ore>19)
    {
        return 10;
    }
}