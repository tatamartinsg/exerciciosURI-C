#include <stdio.h>
 
int main() {
    int num, hora;
    double valor,salario;

    scanf("%d",&num);
    scanf("%d",&hora);
    scanf("%lf",&valor);

    salario = hora*valor;

    printf("NUMBER = %d\n",num);
    printf("SALARY = U$ %.2lf\n",salario);


 
    return 0;
}