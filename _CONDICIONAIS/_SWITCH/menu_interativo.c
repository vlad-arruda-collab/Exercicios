#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){

int opcao;
int numeroSecreto, palpite;

printf("Menu Principal \n");
printf("1. Iniciar Jogo \n");
printf ("2. Ver regras \n");
printf ("3.Sair \n");
printf("Escolha uma opção \n");


switch (opcao)
{
    case 1:
    srand(time(0));  /*Inicializa o jogo com um número aleatório com base no tempo*/
    numeroSecreto = rand() %10 +1;
    printf("Adivinhe o numero  enrre 1 e 10 : \n");
    scanf ("%d", &palpite);

    if (palpite == numeroSecreto) {
        printf  ("Você acertou \n");
    } else  {
        printf ("Você errou!\n", numeroSecreto);
    }
    break;

    case 2:
    printf ("regras do Jogo \n");
    printf ("1. Escolha uma opção no menu \n" );
    printf( "2. Se escolher 'Iniciar jogo', adivinhe o numero. \n");
    printf("3. O Jogo termina quando você escolhe 'Sair'. \n");
    break;

    case 3:
    printf("Saindo");
    break;

    default:
    printf("Opcao invalida \n");
    break;
}

    return 0;

}

