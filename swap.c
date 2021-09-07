#include<stdio.h>
int scambio(int *ptr1,int *ptr2);
int main()
{
    int a;
    int b;
    printf("insert\n1)");
    scanf("%d",&a);
    printf("2)");
    scanf("%d",&b);
    printf("prima\n");
    printf("%d\t%d\n",a,b);
    scambio(&a,&b);
    printf("dopo\n");
    printf("%d\t%d\n",a,b);
}
int scambio(int *ptr1,int *ptr2)
{
    int *ptr3;
    *ptr3=*ptr1;
    *ptr1=*ptr2;
    *ptr2=*ptr3;
    printf("scambio...\n");
}