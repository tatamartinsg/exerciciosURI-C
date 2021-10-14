#include <stdio.h>
#include <stdlib.h>
int main ()
{
    int N,i,S,B,A,S1,B1,A1;
    int saque=0,saque_certo=0,block=0,block_certo=0,ataq=0,ataq_certo=0;
    double pt_saque,pt_ataq,pt_block;
    scanf("%d",&N);

    for (i = 0; i < N; i++)
    {
        char *nome;
        scanf(" %s",&nome); //erro foi usar %c ao inves de %s
        fflush(stdin); //sem isso, nao tava pegando as entradas direito, tentei ate com o getchar(), mas tbm continuava com o mesmo erro!
        scanf("\n%d%d%d",&S,&B,&A);
        scanf("\n%d%d%d",&S1,&B1,&A1);
        saque = saque + S;
        saque_certo = saque_certo + S1;
        block = block + B;
        block_certo = block_certo + B1;
        ataq = ataq + A;
        ataq_certo = ataq_certo + A1;
    }

    // printf("saque = %d\n saque_certo = %d\n",saque,saque_certo);
    // printf("block = %d\n block_certo = %d\n",block,block_certo);
    // printf("ataq = %d\n ataq_certo = %d\n",ataq,ataq_certo);

    pt_saque = (double)((double)saque_certo/(double)saque)*100;
    pt_block = (double)((double)block_certo/(double)block)*100;
    pt_ataq = (double)((double)ataq_certo/(double)ataq)*100;

    printf("Pontos de Saque: %.2lf %%.\n",pt_saque);
    printf("Pontos de Bloqueio: %.2lf %%.\n",pt_block);
    printf("Pontos de Ataque: %.2lf %%.\n",pt_ataq);

    return 0;
}