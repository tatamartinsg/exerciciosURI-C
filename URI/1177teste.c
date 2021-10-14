#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int T;
    scanf("%d",&T);

    int a=1,N[1000],i,j;

    while (a<1000)
    {   
        a++;
        for (i = 0; i < T; i++)
        { 
            for (j = 0; j < 1; j++)
            {
                N[a++] = i;
                printf("N[%d] = %d\n",i,N[a++]);
            }
        }

    }
   
    return 0;
}