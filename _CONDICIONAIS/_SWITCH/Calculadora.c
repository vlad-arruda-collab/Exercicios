#include <stdio.h>

int main (){

    float numero1, numero2,resultado;
    int operacoes;

    printf("Digite o primeiro numero: ");
    scanf("%f", &numero1);

    printf("Digite o segundo numero: ");
    scanf("%f", &numero2);

    printf(" \n 1 - Adicao \n 2 - Subtracao \n 3 - Multiplicacao \n 4 - Divisao \n Escolha o tipo de operacao: ");
    scanf("%d", &operacoes);

switch (operacoes) {

case 1 :
resultado = numero1 + numero2;
printf("Resultado: %f", resultado);
break;

case 2 :
resultado = numero1 - numero2;
printf("Resultado: %f", resultado);
break;

case 3 :
resultado = numero1 * numero2;
printf("Resultado: %f", resultado);
break;

case 4 :
resultado = numero1 / numero2;
printf("Resultado: %f", resultado);
break;

default:
printf("Operação invalida");
}
return 0;
}