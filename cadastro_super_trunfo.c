#include <stdio.h>

int main(void) {
    // Carta 1
    int populacao_carta1;
    float area_carta1;
    float pib_carta1;
    int pontos_turisticos_carta1;

    // Carta 2
    int populacao_carta2;
    float area_carta2;
    float pib_carta2;
    int pontos_turisticos_carta2;

    // --- Cadastro da Carta 1 ---
    printf("--- Cadastro da Carta 1 ---\n");
    printf("Digite a populacao: ");
    scanf("%d", &populacao_carta1);

    printf("Digite a area (em km2): ");
    scanf("%f", &area_carta1);

    printf("Digite o PIB (em trilhoes): ");
    scanf("%f", &pib_carta1);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos_carta1);

    // --- Cadastro da Carta 2 ---
    printf("\n--- Cadastro da Carta 2 ---\n");
    printf("Digite a populacao: ");
    scanf("%d", &populacao_carta2);

    printf("Digite a area (em km2): ");
    scanf("%f", &area_carta2);

    printf("Digite o PIB (em trilhoes): ");
    scanf("%f", &pib_carta2);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos_carta2);
    
    // --- Exibir ---
    printf("\n--- Dados da Carta 1 ---\n");
    printf("Populacao: %d\n", populacao_carta1);
    printf("Area: %.2f km2\n", area_carta1);
    printf("PIB: %.2f trilhoes\n", pib_carta1);
    printf("Pontos Turisticos: %d\n", pontos_turisticos_carta1);

    printf("\n--- Dados da Carta 2 ---\n");
    printf("Populacao: %d\n", populacao_carta2);
    printf("Area: %.2f km2\n", area_carta2);
    printf("PIB: %.2f trilhoes\n", pib_carta2);
    printf("Pontos Turisticos: %d\n", pontos_turisticos_carta2);

    return 0;
}