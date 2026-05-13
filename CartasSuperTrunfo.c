#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    char estado, estado2;
    char codigoCarta [4],codigoCarta2 [4] ;
    char nomeCidade [50], nomeCidade2 [50];
    int populacao, pontosTuristicos, populacao2, pontosTuristicos2;
    float area, area2;
    float pib, pib2;
           
  // Área para entrada de dados 
  //Carta 1
    printf("------Entre com os dados da carta 1------");
    printf("\n");
    printf("Escolha uma letra entre A e H para o Estado: ");
    scanf (" %c", &estado);

    printf("Entre com o código da carta com números entre 01 e 04: ");
    scanf("%s", codigoCarta);

    printf("Entre com o nome da cidade: ");
  
    scanf(" %49[^\n]", nomeCidade); // Elimina a erro de pular linha , limita a leitura a 49 caracteres,  lê tudo que não seja \n
    
    printf("Entre com a população da cidade: ");
    scanf( "%d", &populacao);

    printf("Entre com a área: ");
    scanf("%f", &area);

    printf("Entre com o PIB: ");
    scanf("%f", &pib);

    printf("Entre com o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos);

    //carta 2
     printf("------Entre com os dados da carta 2------ \n");
    printf("Escolha uma letra entre A e H para o Estado: ");
    scanf (" %c", &estado2);

    printf("Entre com o código da carta com números entre 01 e 04: ");
    scanf("%s", codigoCarta2);

    printf("Entre com o nome da cidade: ");
  
    scanf(" %49[^\n]", nomeCidade2); // Elimina a erro de pular linha , limita a leitura a 49 caracteres,  lê tudo que não seja \n
    
    printf("Entre com a população da cidade: ");
    scanf( "%d", &populacao2);

    printf("Entre com a área: ");
    scanf("%f", &area2);

    printf("Entre com o PIB: ");
    scanf("%f", &pib2);

    printf("Entre com o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);
    printf ("\n");
    printf ("\n");
   

  // Área para exibição dos dados da cidade
    printf("------Carta 1------");
    printf ("\n");
    printf( "Estado:  %c \n", estado);
    printf("Código: %c%s \n",estado, codigoCarta);
    printf("Nome da Cidade: %s \n", nomeCidade);
    printf("População: %d \n", populacao);
    printf("Área: %.2f km2\n", area);
    printf("PIB: %.2f bilhões de reais \n", pib);
    printf("Número de Pontos Turísticos: %d \n", pontosTuristicos);
    printf ("\n");
    printf ("\n");

    printf("------Carta 2------");
    printf ("\n");
    printf( "Estado:  %c \n", estado2);
    printf("Código: %c%s \n",estado2, codigoCarta2);
    printf("Nome da Cidade: %s \n", nomeCidade2);
    printf("População: %d \n", populacao2);
    printf("Área: %.2f km2\n", area2);
    printf("PIB: %.2f bilhões de reais \n", pib2);
    printf("Número de Pontos Turísticos: %d \n", pontosTuristicos2);
    printf ("\n");

return 0;
} 