#include <stdio.h>

int main (){

float nota1, nota2, media;
int opcao;

printf("---GERENCIAMENTO DE ESTUDANTE---\n");
printf("1. Calcular Media\n");
printf("2. Determinar Status\n");
printf("3. Sair\n");
printf("ESCOLHA UMA OPCAO: \n");
scanf ("%d", &opcao);

switch (opcao){
    case 1:

    //Entrada das notas
    printf ("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf ("Digite a segunda nota: ");
    scanf("%f", &nota2);

    //Cálculo das notas
    media = (nota1+nota2)/2;
    printf ("Media do aluno: %.2f \n", media);

    break;

    case 2:
    // Status , verifica se a aluno foi aprovado, reprovado ou está em recuperação

    printf ("Digite a media: ");
    scanf("%f", &media);
    
media >= 7 ? printf ("Aprovado") : printf("Reprovado");
break;


case 3:
printf("Saindo...\n");
break; 

default:
printf("Opcao invalida");
break;

}
return 0;




}