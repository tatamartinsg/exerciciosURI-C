#include <stdio.h>
#include <stdlib.h>
int main ()
{
    int x=12,i,j;
    double M[x][x],soma=0.0,media=0.0,qntd=0.0;
    char ler;
    scanf("%c",&ler);

    for (i = 0; i < x; i++)
    {  for ( j = 0; j < x; j++)
        {
           scanf("%lf",&M[i][j]);
        }  
    }

     for (i = 0; i < x; i++)
    {  for ( j = 0; j < x; j++)
        {
            if(i<j)
                {
                    soma = soma + M[i][j];
                    qntd += 1;
                    media = soma/qntd;
                }
        }
        
    }
    if(ler=='S')
    {
        printf("%.1lf\n",soma);
    }

    else if(ler=='M')
    {
        printf("%.1lf\n",media); 
    }
    

    return 0;
}