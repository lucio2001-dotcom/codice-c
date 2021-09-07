#include <stdio.h>
int main()
{
    for(unsigned long int x=0;x<2000000000000;++x)
    {
        if(x%10000000==0)
        {
            printf("*\n\a");
        }
    }
}
 