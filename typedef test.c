#include <stdio.h>
#include <stdlib.h>
  struct i
    {
        int a;
        char b;
        struct i *ptr;
    };
int main()
{
    typedef struct i yoyo;
    typedef yoyo yo;
    printf("%lu",sizeof(yo));
}