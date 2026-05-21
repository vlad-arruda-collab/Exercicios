#include <stdio.h>

int main(){

int dia;
printf ("Digite com o dia: ");
scanf("%d", &dia);

switch (dia){

case 1: {
    if (dia == 1);
    printf("Domingo");
    break;
}
case 2: {
    if (dia == 2);
    printf("Segunda-feira");
    break;
}
case 3: {
    if (dia == 3);
    printf("Terca-feira");
    break;
}
case 4: {
    if (dia == 4);
    printf("Quarta-feira");
    break;
}
case 5: {
    if (dia == 5);
    printf("Quinta-feira");
    break;
}
case 6: {
    if (dia == 6);
    printf("Sexta-feira");
    break;
}
case 7: {
    if (dia == 7);
    printf("Sabado");
    break;
}
default :
    printf("Opcao invalida");
    break;
}

return 0;
}