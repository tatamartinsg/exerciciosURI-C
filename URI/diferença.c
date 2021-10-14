#include <stdio.h>
 
int main() {
 
    int A,B,C,D,formula;
    scanf("%d",&A);
    scanf("%d",&B);
    scanf("%d",&C);
    scanf("%d",&D);

    formula = ((A * B) - (C * D));

    printf("DIFERENCA = %d\n",formula);
 
    return 0;
}