#include <stdio.h>

int main() {
    // Dados da Carta 1
    char estado1[3];
    char codigo1[5];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos1;
    float densidade1;
    float pibPerCapita1;

    // Dados da Carta 2
    char estado2[3];
    char codigo2[5];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos2;
    float densidade2;
    float pibPerCapita2;

    // Entrada da Carta 1
    printf("Digite o estado da Carta 1: ");
    scanf("%s", estado1);

    printf("Digite o código da Carta 1: ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade da Carta 1: ");
    scanf(" %[^\n]", cidade1);

    printf("Digite a população da Carta 1: ");
    scanf("%d", &populacao1);

    printf("Digite a área da Carta 1 (em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB da Carta 1 (em bilhões): ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos da Carta 1: ");
    scanf("%d", &pontos1);

    // Cálculos da Carta 1
    densidade1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / populacao1;

    // Entrada da Carta 2
    printf("\nDigite o estado da Carta 2: ");
    scanf("%s", estado2);

    printf("Digite o código da Carta 2: ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade da Carta 2: ");
    scanf(" %[^\n]", cidade2);

    printf("Digite a população da Carta 2: ");
    scanf("%d", &populacao2);

    printf("Digite a área da Carta 2 (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB da Carta 2 (em bilhões): ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos da Carta 2: ");
    scanf("%d", &pontos2);

    // Cálculos da Carta 2
    densidade2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;

    // Exibição da Carta 1
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos turísticos: %d\n", pontos1);
    printf("Densidade: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: %.2f reais\n", pibPerCapita1);

    // Exibição da Carta 2
    printf("\n--- Carta 2 ---\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos turísticos: %d\n", pontos2);
    printf("Densidade: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: %.2f reais\n", pibPerCapita2);

    return 0;
}
