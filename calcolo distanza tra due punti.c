#include<stdio.h>
#include<math.h>
double distance(double x1,double x2,double y1,double y2);
int main()
{
    double l1v;
    double l2v;
    double l1o;
    double l2o;
    printf("inserire le coordinate dei due punti;\n");
    printf("punto 1 verticale:");
    scanf("%lf",&l1v);
    printf("punto 2 verticale:");
    scanf("%lf",&l2v);
    printf("punto 1 orizzontale:");
    scanf("%lf",&l1o);
    printf("punto 2 orizzontale:");
    scanf("%lf",&l2o);
    printf("la distanza tra i due punti è:%f",distance(l1v,l2v,l1o,l2o));
}
double distance(double x1,double x2,double y1,double y2)
{
    double c1;
    double c2;
    double ca1;
    double ca2;
    c1=fabs(x1-x2);
    c2=fabs(y1-y2);
    ca1=c1*c1;
    ca2=c2*c2;
    return sqrt(ca1+ca2);
}

