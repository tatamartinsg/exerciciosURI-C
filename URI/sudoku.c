#include <stdio.h>
#include <stdlib.h>
int main ()
{
    int n, i,j,k,x=9,somalinha=0;
    int matriz[x][x];
    int linha_repet[x];
    int col_repet[x];
    scanf("%d",&n);

    for ( k = 0; k < x; k++)
    {
        for (i = 0; i < x; i++)
        {  for ( j = 0; j < x; j++)
            {
                scanf("%d",&matriz[i][j]);
            }
        }
        
        for (i = 0; i < x; i++)
        {
            linha_repet[i] = 0;
        }
        for (i = 0; i < x; i++)
        {  
            somalinha=0;
            for ( j = 0; j < x; j++)
            {
                linha_repet[matriz[i][j-1] = 1;
            }
            for (n = 0; n < x; n++)
            {
                somalinha = linha_repet[n];

            }
            if (somalinha!=9)
            {
                printf("Instancia %d\n",k+1);
                printf("NAO\n");
            }
            else 
            {
                printf("Instancia %d\n",k+1);
                printf("SIM\n");
            }
        }

    } //nao consegui entender muito bem o exercicio
    

    


    return 0;
}