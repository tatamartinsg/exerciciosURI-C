#include <stdio.h>
#include <stdlib.h>
int main ()
{
    //quando     i vai de 1 a 10,
    //           j de  7 a 11
    // valores   acima da diag principal
    // velores   abaixo da diag secundaria

    int x=12,i,j,N;
    char ler;
    double M[x][x],aux[x][x],soma=0.0,media=0.0;
    scanf("%d %c",&N,&ler);

    for (i = 0; i < x; i++)
    {  for ( j = 0; j < x; j++)
        {
           scanf("%lf",&M[i][j]);
        }  
    }

    // for (i = 0; i < x; i++)
    // {  for ( j = 0; j < x; j++)
    //     {
    //         printf("%.2f ",M[i][j]);
    //     }
    //     printf("\n\n");
    // }

    //printf("---------------\n");

     for (i = 0; i < x; i++)
    {  for ( j = 0; j < x; j++)
        {
            if((i<j)&&(j+i>11))
                {
                    aux[i][j] = M[i][j];
                    soma = soma + aux[i][j];
                    media = soma/30;
                }
        }
        
    }
    if(ler=='S')
    {
        printf("%.1lf\n",soma);
    }

    else if(ler=='M')
    {
        printf("%.1lf\n",media); //nesse codigo tava dando apresentation error porque esqueci o \n na hora de printar
    }
    


    return 0;
}