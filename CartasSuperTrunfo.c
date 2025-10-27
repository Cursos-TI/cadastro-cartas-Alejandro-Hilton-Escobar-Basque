#include <stdio.h>
#include <string.h>

// Estrutura para representar uma carta
struct Carta {
    char estado[30];
    char codigo[10];
    char cidade[30];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidadePopulacional;
    float pibPerCapita;
};

int main() {
    // Cadastro da Carta 1
    struct Carta carta1;
    strcpy(carta1.estado, "São Paulo");
    strcpy(carta1.codigo, "SP01");
    strcpy(carta1.cidade, "São Paulo");
    carta1.populacao = 12300000;
    carta1.area = 1521.11;
    carta1.pib = 700000000000.0;
    carta1.pontosTuristicos = 25;
    carta1.densidadePopulacional = carta1.populacao / carta1.area;
    carta1.pibPerCapita = carta1.pib / carta1.populacao;

    // Cadastro da Carta 2
    struct Carta carta2;
    strcpy(carta2.estado, "Rio de Janeiro");
    strcpy(carta2.codigo, "RJ01");
    strcpy(carta2.cidade, "Rio de Janeiro");
    carta2.populacao = 6700000;
    carta2.area = 1182.3;
    carta2.pib = 350000000000.0;
    carta2.pontosTuristicos = 30;
    carta2.densidadePopulacional = carta2.populacao / carta2.area;
    carta2.pibPerCapita = carta2.pib / carta2.populacao;

    // Escolha do atributo para comparação: PIB per capita
    printf("Comparação de cartas (Atributo: PIB per capita):\n\n");

    printf("Carta 1 - %s (%s): %.2f\n", carta1.cidade, carta1.estado, carta1.pibPerCapita);
    printf("Carta 2 - %s (%s): %.2f\n\n", carta2.cidade, carta2.estado, carta2.pibPerCapita);

    // Lógica de comparação
    if (carta1.pibPerCapita > carta2.pibPerCapita) {
        printf("Resultado: Carta 1 (%s) venceu!\n", carta1.cidade);
    } else if (carta2.pibPerCapita > carta1.pibPerCapita) {
        printf("Resultado: Carta 2 (%s) venceu!\n", carta2.cidade);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}

