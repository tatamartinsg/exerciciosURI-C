#include <stdio.h>
#include <stdlib.h>
int main ()
{
    /* [0][1][2][3][4][5][6][7] [8] [9] [10] [11][12]   posicao[i]
        0  1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987, 1597, 2584…  n
        i = n-2 +  n-1
    */
   int i,valor,num,F[64];
   scanf("%d",&valor);
   for (i = 2; i < 60; i++)
   {
       F[0]=0;
       F[1]=1;
       F[i] = F[i-1] + F[i-2]; //formula de fibonacci
   }
   for ( i = 0; i < valor; i++)
   {
       scanf("%d",&num);
       printf("Fib(%d) = %d\n",num,F[num]);
   }

    return 0;
}