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
    int escolha, resultado1, resultado2;
  
           
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
    
    printf("Entre com a densidade populacional: ");
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
    
    printf("Entre densidade populacional: ");
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
  
  
    printf("------Carta 2------");
    printf ("\n");
    printf( "Estado:  %c \n", estado2);
    printf("Código: %c%s \n",estado2, codigoCarta2);
    printf("Nome da Cidade: %s \n", nomeCidade2);
    printf("População: %d \n", populacao2);
    printf("Área: %.2f km2\n", area2);
    printf("PIB: %.2f bilhões de reais \n", pib2);
    printf("Número de Pontos Turísticos: %d \n", pontosTuristicos2);
<<<<<<< HEAD:cadastro-cartas-Vlad-Arruda-main/cadastro-cartas-Vlad-Arruda-main/CartasSuperTrunfo.c
  
 //MENU PARA ESCOLHER A COMPARAÇÃO DE DADOS 

printf("--- ESCOLHA O PRIMEIRO ATRIBUTO PARA COMPARAÇÃO ---\n");
printf("1. Densidade Populacional \n");
printf("2. Área \n");
printf("3. Pib \n");
printf("4. Pontos Turísticos\n");
=======
    printf ("\n");
  
 //MENU PARA ESCOLHER A COMPARAÇÃO DE DADOS 

printf("+++++Escolha uma opção+++++");
printf("1. Populacao \n");
printf("2. Area \n");
printf("3. Pib \n");
printf("4. Pontos turísticos\n");
>>>>>>> f19b2ab78327a7705a34dc9617c229dec311c9c6:CartasSuperTrunfo.c
scanf("%d", &escolha);

    switch (escolha)
    {
    case 1:
<<<<<<< HEAD:cadastro-cartas-Vlad-Arruda-main/cadastro-cartas-Vlad-Arruda-main/CartasSuperTrunfo.c
    resultado1 = populacao < populacao2 ? 1:0;  //Ganha quem tiver a menor densidade populacional.
    break;

    case 2:
    resultado1 = area > area2 ?  1: 0; 
    break;

    case 3:
    resultado1 = pib > pib2 ? 1: 0;
    break;

    case 4:
    resultado1 = pontosTuristicos > pontosTuristicos2 ? 1 : 0;
    break;

    default:
    printf("Opcao invalida");
    break;
    }

printf("--- ESCOLHA O SEGUNDO ATRIBUTO PARA COMPARAÇÃO ---\n");
printf("1. Densidade Populacional \n");
printf("2. Área \n");
printf("3. Pib \n");
printf("4. Pontos Turísticos\n");
scanf("%d", &escolha);

if (resultado1 == resultado2){
printf("Escolha de atributo inválida, escolha um atri8buto diferente do anterior\n\n");
printf("--- ESCOLHA O SEGUNDO ATRIBUTO PARA COMPARAÇÃO ---\n");
printf("1. Densidade Populacional \n");
printf("2. Área \n");
printf("3. Pib \n");
printf("4. Pontos Turísticos\n");
scanf("%d", &escolha);


switch (escolha)
    {
    case 1:
    resultado2 = populacao < populacao2 ? 1:0;  //Ganha quem tiver a menor densidade populacional.
    break;

    case 2:
    resultado2 = area > area2 ?  1: 0; 
    break;

    case 3:
    resultado2 = pib > pib2 ? 1: 0;
    break;

    case 4:
    resultado2 = pontosTuristicos > pontosTuristicos2 ? 1 : 0;
    break;

    default:
    printf("Opcao invalida");
    break;
    }

    

=======
      if (populacao > populacao2){
        printf("Carta 1 venceu!");
      }else if (populacao < populacao2){
        printf("Carta 2 venceu!");
      }else {
        printf ("Foi um empate");
        break;
      }
      
     

    default:
    printf("Opcao invalida");
      break;
>>>>>>> f19b2ab78327a7705a34dc9617c229dec311c9c6:CartasSuperTrunfo.c
    }

  

return 0;
} 
