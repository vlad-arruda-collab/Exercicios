#include <stdio.h>
#include <locale.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas

int main() {

    setlocale(LC_ALL, "Portuguese");

    // Variáveis carta 1
    char estado;
    char codigoCarta[4];
    char nomeCidade[50];
    int populacao;
    int pontosTuristicos;
    float area;
    float pib;

    // Variáveis carta 2
    char estado2;
    char codigoCarta2[4];
    char nomeCidade2[50];
    int populacao2;
    int pontosTuristicos2;
    float area2;
    float pib2;

    // Variáveis auxiliares
    int escolha, escolha2;
    int resultado1, resultado2;

    // Densidade populacional
    float densidade, densidade2;

    // =========================
    // CADASTRO CARTA 1
    // =========================

    printf("------ ENTRE COM OS DADOS DA CARTA 1 ------\n");

    printf("Escolha uma letra entre A e H para o Estado: ");
    scanf(" %c", &estado);

    printf("Entre com o código da carta (01 a 04): ");
    scanf("%s", codigoCarta);

    printf("Entre com o nome da cidade: ");
    scanf(" %49[^\n]", nomeCidade);

    printf("Entre com a população: ");
    scanf("%d", &populacao);

    printf("Entre com a área: ");
    scanf("%f", &area);

    printf("Entre com o PIB: ");
    scanf("%f", &pib);

    printf("Entre com o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos);

    // =========================
    // CADASTRO CARTA 2
    // =========================

    printf("\n------ ENTRE COM OS DADOS DA CARTA 2 ------\n");

    printf("Escolha uma letra entre A e H para o Estado: ");
    scanf(" %c", &estado2);

    printf("Entre com o código da carta (01 a 04): ");
    scanf("%s", codigoCarta2);

    printf("Entre com o nome da cidade: ");
    scanf(" %49[^\n]", nomeCidade2);

    printf("Entre com a população: ");
    scanf("%d", &populacao2);

    printf("Entre com a área: ");
    scanf("%f", &area2);

    printf("Entre com o PIB: ");
    scanf("%f", &pib2);

    printf("Entre com o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // =========================
    // CÁLCULO DENSIDADE
    // =========================

    densidade = populacao / area;
    densidade2 = populacao2 / area2;

    // =========================
    // EXIBIÇÃO DAS CARTAS
    // =========================

    printf("\n\n------ CARTA 1 ------\n");
    printf("Estado: %c\n", estado);
    printf("Código: %c%s\n", estado, codigoCarta);
    printf("Nome da Cidade: %s\n", nomeCidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Pontos Turísticos: %d\n", pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade);

    printf("\n------ CARTA 2 ------\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %c%s\n", estado2, codigoCarta2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);

    // =========================
    // MENU PRIMEIRO ATRIBUTO
    // =========================

    printf("\n--- ESCOLHA O PRIMEIRO ATRIBUTO ---\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Populacional\n");

    printf("Digite sua escolha: ");
    scanf("%d", &escolha);

    switch (escolha) {

        case 1:
            resultado1 = populacao > populacao2 ? 1 : 0;
            break;

        case 2:
            resultado1 = area > area2 ? 1 : 0;
            break;

        case 3:
            resultado1 = pib > pib2 ? 1 : 0;
            break;

        case 4:
            resultado1 = pontosTuristicos > pontosTuristicos2 ? 1 : 0;
            break;

        case 5:
            resultado1 = densidade < densidade2 ? 1 : 0;
            break;

        default:
            printf("Opção inválida!\n");
            return 0;
    }

    // =========================
    // MENU SEGUNDO ATRIBUTO
    // =========================

    printf("\n--- ESCOLHA O SEGUNDO ATRIBUTO ---\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Populacional\n");

    printf("Digite sua escolha: ");
    scanf("%d", &escolha2);

    // Verifica se escolheu o mesmo atributo
    if (escolha == escolha2) {

        printf("\nERRO: Escolha atributos diferentes!\n");
        return 0;
    }

    switch (escolha2) {

        case 1:
            resultado2 = populacao > populacao2 ? 1 : 0;
            break;

        case 2:
            resultado2 = area > area2 ? 1 : 0;
            break;

        case 3:
            resultado2 = pib > pib2 ? 1 : 0;
            break;

        case 4:
            resultado2 = pontosTuristicos > pontosTuristicos2 ? 1 : 0;
            break;

        case 5:
            resultado2 = densidade < densidade2 ? 1 : 0;
            break;

        default:
            printf("Opção inválida!\n");
            return 0;
    }

    // =========================
    // RESULTADO FINAL
    // =========================

    printf("\n------ RESULTADO FINAL ------\n");

    if (resultado1 && resultado2) {

        printf("Carta 1 venceu!\n");

    } else if (!resultado1 && !resultado2) {

        printf("Carta 2 venceu!\n");

    } else {

        printf("Empate!\n");
    }

    return 0;
}
