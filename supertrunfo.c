#include <stdio.h>

int main() {
    // Declaração de variáveis para a primeira carta
    int populacao1, pontos_turisticos1;
    float area1, pib1, densidade_populacional1, pib_capita1;

    // Declaração de variáveis para a segunda carta
    int populacao2, pontos_turisticos2;
    float area2, pib2, densidade_populacional2, pib_capita2;

    // Leitura dos dados da primeira carta
    printf("Digite os dados da primeira carta:\n");
    printf("Populacao: ");
    scanf("%d", &populacao1);
    printf("Area: ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos1);

    // Cálculo após a entrada
    densidade_populacional1 = populacao1 / area1;
    pib_capita1 = pib1 / populacao1;

    // Leitura dos dados da segunda carta
    printf("\nDigite os dados da segunda carta:\n");
    printf("Populacao: ");
    scanf("%d", &populacao2);
    printf("Area: ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos2);

    // Cálculo após a entrada
    densidade_populacional2 = populacao2 / area2;
    pib_capita2 = pib2 / populacao2;

    // Exibição dos dados da primeira carta
    printf("\n--- Dados da Primeira Carta ---\n");
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos turisticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f\n", densidade_populacional1);
    printf("PIB per Capita: %.2f\n", pib_capita1);

    // Exibição dos dados da segunda carta
    printf("\n--- Dados da Segunda Carta ---\n");
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turisticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f\n", densidade_populacional2);
    printf("PIB per Capita: %.2f\n", pib_capita2);

    return 0;
}
