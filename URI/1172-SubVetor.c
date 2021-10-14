#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int a=10,X[a],i;

    for (i = 0; i < a; i++)
    {
        scanf("%d",&X[i]);
        if (X[i] <=0 )
        {
            X[i] = 1;
        }
    }

    for ( i = 0; i < a; i++)
    {
        printf("X[%d] = %d\n",i,X[i]);
    }

    return 0;
}