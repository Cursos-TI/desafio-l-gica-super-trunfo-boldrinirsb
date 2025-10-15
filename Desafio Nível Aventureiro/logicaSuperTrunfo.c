#include <stdio.h>

// Definicao de tipo para a Populacao
typedef unsigned long int PopulacaoType;

int main() {
    int opcao;
    
    // --- DADOS DAS CARTAS ---

    // Carta 1: São Paulo
    char nome_cidade1[] = "São Paulo";
    PopulacaoType populacao1 = 12325000;
    float area1 = 1521.11;
    float pib1 = 699.28;
    int pontos_turisticos1 = 50;

    // Carta 2: Rio de Janeiro
    char nome_cidade2[] = "Rio de Janeiro";
    PopulacaoType populacao2 = 6748000;
    float area2 = 1200.25;
    float pib2 = 300.50;
    int pontos_turisticos2 = 30;

    // Variáveis Calculadas 
    float densidade_populacional1;
    float pib_per_capita1;
    float densidade_populacional2;
    float pib_per_capita2;

    // --- EXECUÇÃO DOS CÁLCULOS ---

    // Calculo para Carta 1
    densidade_populacional1 = (float)populacao1 / area1;
    pib_per_capita1 = (pib1 * 1000000000.0f) / (float)populacao1;
    
    // Calculo para Carta 2
    densidade_populacional2 = (float)populacao2 / area2;
    pib_per_capita2 = (pib2 * 1000000000.0f) / (float)populacao2;

    // --- 1. EXIBIÇÃO DO MENU INTERATIVO ---
    printf("======================================\n");
    printf(" Super Trunfo de Cidades\n");
    printf("======================================\n");
    printf("Escolha o atributo para a batalha:\n");
    printf("1. População\n");
    printf("2. Área (km²)\n");
    printf("3. PIB (bilhões de reais)\n");
    printf("4. Número de Pontos Turísticos\n");
    printf("5. Densidade Populacional (hab/km²)\n");
    printf("6. PIB per Capita (reais)\n");
    printf("--------------------------------------\n");
    printf("Digite sua opção (1 a 6): ");
    scanf("%d", &opcao);

    // --- 2. ESTRUTURA SWITCH PARA A ESCOLHA E COMPARAÇÃO ---
    printf("\n");
    
    switch (opcao) {
        case 1:
            // População (unsigned long int) - MAIOR VENCE
            printf("Atributo: População\n");
            printf("Carta 1 (%s): %lu habitantes\n", nome_cidade1, populacao1);
            printf("Carta 2 (%s): %lu habitantes\n", nome_cidade2, populacao2);
            
            // Lógica de Comparação
            if (populacao1 > populacao2) {
                printf("VENCEDORA: Carta 1 (%s)!\n", nome_cidade1);
            } else if (populacao2 > populacao1) {
                printf("VENCEDORA: Carta 2 (%s)!\n", nome_cidade2);
            } else {
                printf("RESULTADO: Empate!\n");
            }
            break;

        case 2:
            // Área (float) - MAIOR VENCE
            printf("Atributo: Área\n");
            printf("Carta 1 (%s): %.2f km²\n", nome_cidade1, area1);
            printf("Carta 2 (%s): %.2f km²\n", nome_cidade2, area2);

            // Lógica de Comparação
            if (area1 > area2) {
                printf("VENCEDORA: Carta 1 (%s)!\n", nome_cidade1);
            } else if (area2 > area1) {
                printf("VENCEDORA: Carta 2 (%s)!\n", nome_cidade2);
            } else {
                printf("RESULTADO: Empate!\n");
            }
            break;

        case 3:
            // PIB (float) - MAIOR VENCE
            printf("Atributo: PIB\n");
            printf("Carta 1 (%s): %.2f bilhões de reais\n", nome_cidade1, pib1);
            printf("Carta 2 (%s): %.2f bilhões de reais\n", nome_cidade2, pib2);
            
            // Lógica de Comparação
            if (pib1 > pib2) {
                printf("VENCEDORA: Carta 1 (%s)!\n", nome_cidade1);
            } else if (pib2 > pib1) {
                printf("VENCEDORA: Carta 2 (%s)!\n", nome_cidade2);
            } else {
                printf("RESULTADO: Empate!\n");
            }
            break;

        case 4:
            // Pontos Turísticos (int) - MAIOR VENCE
            printf("Atributo: Número de Pontos Turísticos\n");
            printf("Carta 1 (%s): %d pontos\n", nome_cidade1, pontos_turisticos1);
            printf("Carta 2 (%s): %d pontos\n", nome_cidade2, pontos_turisticos2);

            // Lógica de Comparação
            if (pontos_turisticos1 > pontos_turisticos2) {
                printf("VENCEDORA: Carta 1 (%s)!\n", nome_cidade1);
            } else if (pontos_turisticos2 > pontos_turisticos1) {
                printf("VENCEDORA: Carta 2 (%s)!\n", nome_cidade2);
            } else {
                printf("RESULTADO: Empate!\n");
            }
            break;

        case 5:
            // Densidade Populacional (float) - MENOR VENCE (Regra Especial)
            printf("Atributo: Densidade Populacional\n");
            printf("Carta 1 (%s): %.2f hab/km²\n", nome_cidade1, densidade_populacional1);
            printf("Carta 2 (%s): %.2f hab/km²\n", nome_cidade2, densidade_populacional2);

            // Lógica de Comparação (Regra Invertida: MENOR VENCE)
            if (densidade_populacional1 < densidade_populacional2) { // Carta 1 vence se for MENOR
                printf("VENCEDORA: Carta 1 (%s)!\n", nome_cidade1);
            } else if (densidade_populacional2 < densidade_populacional1) { // Carta 2 vence se for MENOR
                printf("VENCEDORA: Carta 2 (%s)!\n", nome_cidade2);
            } else {
                printf("RESULTADO: Empate!\n");
            }
            break;

        case 6:
            // PIB per Capita (float) - MAIOR VENCE
            printf("Atributo: PIB per Capita\n");
            printf("Carta 1 (%s): %.2f reais\n", nome_cidade1, pib_per_capita1);
            printf("Carta 2 (%s): %.2f reais\n", nome_cidade2, pib_per_capita2);

            // Lógica de Comparação
            if (pib_per_capita1 > pib_per_capita2) {
                printf("VENCEDORA: Carta 1 (%s)!\n", nome_cidade1);
            } else if (pib_per_capita2 > pib_per_capita1) {
                printf("VENCEDORA: Carta 2 (%s)!\n", nome_cidade2);
            } else {
                printf("RESULTADO: Empate!\n");
            }
            break;

        default:
            // Tratamento de entrada inválida
            printf("Opção inválida! Por favor, escolha um número de 1 a 6.\n");
            break;
    }

    printf("===========================================\n");

    return 0;
}