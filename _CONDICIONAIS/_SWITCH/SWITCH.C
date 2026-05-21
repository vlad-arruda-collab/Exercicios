#include <stdio.h> 

int main () {

    int menu;

    printf( "Escolha uma opcao: ");
    scanf( "%d", &menu);

    switch (menu) {
        case 1:
        printf ("Foi acionado a opcao 1 ");
        break;

        case 2:
        printf("Foi acionado a opcao 2");
        break;

        default:
        printf("As escolhas são apenas 1 ou 2");
   
    return 0;
}


}