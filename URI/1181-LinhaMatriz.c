#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int num,x=12,i,j;
    char ler;
    double M[x][x],soma=0.0,media=0.0;

    scanf("%d",&num);
    scanf(" %c",&ler);
    getchar();

    for (i = 0; i < x; i++)
    {  for ( j = 0; j < x; j++)
        {
           scanf("%lf",&M[i][j]);
            if(num==i){
                soma = soma + M[i][j];
                media = soma/12;
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