#include <stdio.h>
#include <stdlib.h>
int main ()
{
    int N,i,menor=0,guardaposicao=0;
    scanf("%d",&N);
    int X[N];

    for ( i = 0; i < N; i++)
    {
        scanf("%d",&X[i]);
        if (i == 0)
        {
            menor = X[i];
        }
        else
        {
            if(X[i]<menor)
            {
                menor = X[i];
                guardaposicao = i;
            }
        }
    }
    printf("Menor valor: %d\n",menor);
    printf("Posicao: %d\n",guardaposicao);
    


    return 0;
}