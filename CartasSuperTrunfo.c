#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

  // Área para entrada de dados

  // Área para exibição dos dados da cidade

return 0;
} 

#include <stdio.h>

int main() {
    // Dados da Carta 1
    char estado1[3];       // Exemplo: "RJ"
    char codigo1[5];       // Exemplo: "0021"
    char cidade1[50];      // Exemplo: "Rio de Janeiro"
    int populacao1;
    float area1;
    float pib1;
    int pontos1;

    // Dados da Carta 2
    char estado2[3];       // Exemplo: "SP"
    char codigo2[5];       // Exemplo: "0011"
    char cidade2[50];      // Exemplo: "São Paulo"
    int populacao2;
    float area2;
    float pib2;
    int pontos2;

    // Entrada de dados da Carta 1
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Estado (ex: RJ): ");
    scanf("%s", estado1);

    printf("Código (ex: 0021): ");
    scanf("%s", codigo1);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade1);

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área (em mil m²): ");
    scanf("%f", &area1);

    printf("PIB (em mil reais): ");
    scanf("%f", &pib1);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos1);

    // Entrada de dados da Carta 2
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Estado (ex: SP): ");
    scanf("%s", estado2);

    printf("Código (ex: 0011): ");
    scanf("%s", codigo2);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área (em mil m²): ");
    scanf("%f", &area2);

    printf("PIB (em mil reais): ");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos2);

    // Exibição dos dados da Carta 1
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f mil m²\n", area1);
    printf("PIB: %.2f mil reais\n", pib1);
    printf("Pontos turísticos: %d\n", pontos1);

    // Exibição dos dados da Carta 2
    printf("\n--- Carta 2 ---\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f mil m²\n", area2);
    printf("PIB: %.2f mil reais\n", pib2);
    printf("Pontos turísticos: %d\n", pontos2);

    return 0;
}
