#include <stdio.h>
#include <stdlib.h>
struct strutt 
{
    int v1;
    int v2;
    int v3;
    char id [7];
};
int main()
{
    printf("%lu\n",sizeof(struct strutt));
    typedef struct strutt gruppo;
    gruppo var;
    scanf("%d%d%d%s",&var.v1,&var.v2,&var.v3,var.id);
    printf("%d%d%d%s\n",var.v1,var.v2,var.v3,var.id);
    gruppo *ptr=&var;
    printf("%d%d%d%s\n",ptr->v1,ptr->v2,ptr->v3,ptr->id);
    printf("%d%d%d%s\n",(*ptr).v1,(*ptr).v2,(*ptr).v3,(*ptr).id);
}