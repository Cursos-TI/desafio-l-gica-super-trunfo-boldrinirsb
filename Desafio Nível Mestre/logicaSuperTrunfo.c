#include <stdio.h>

int main() {
    
    typedef unsigned long int PopulacaoType;

    // --- DADOS DAS CARTAS E VARIÁVEIS DE CONTROLE ---
    
    int atributo1 = 0; 
    int atributo2 = 0; 
    int escolha_valida = 0; 
    
    // Carta 1: Portugal
    char nome_cidade1[] = "Portugal";
    PopulacaoType populacao1 = 10700000;
    float area1 = 921.52; 
    float pib1 = 308.7;
    int pontos_turisticos1 = 50;

    // Carta 2: Chile
    char nome_cidade2[] = "Chile";
    PopulacaoType populacao2 = 19760000;
    float area2 = 7566.26;
    float pib2 = 330.3;
    int pontos_turisticos2 = 30;

    // Variáveis Calculadas
    float densidade_populacional1;
    float pib_per_capita1;
    float densidade_populacional2;
    float pib_per_capita2;

    // A soma final será float 
    float soma_valores1 = 0.0;
    float soma_valores2 = 0.0; 
    
    // --- 1. EXECUÇÃO DOS CÁLCULOS ---
    densidade_populacional1 = (float)populacao1 / area1;
    pib_per_capita1 = (pib1 * 1000000000.0f) / (float)populacao1;
    densidade_populacional2 = (float)populacao2 / area2;
    pib_per_capita2 = (pib2 * 1000000000.0f) / (float)populacao2;

    // --- 2. MENU INTERATIVO (ESCOLHA DO 1º ATRIBUTO) ---
    printf("===========================================\n");
    printf("        SUPER TRUNFO       \n");
    printf("===========================================\n");
    
    printf("\n--- Escolha o 1º Atributo ---\n");
    printf("1. População\n");
    printf("2. Área (km²)\n");
    printf("3. PIB (bilhões de reais)\n");
    printf("4. Número de Pontos Turísticos\n");
    printf("5. Densidade Populacional (hab/km²)\n");
    printf("6. PIB per Capita (reais)\n");
    printf("------------------------------\n");
    printf("Digite sua opção (1 a 6): ");
    scanf("%d", &atributo1);

    // --- 3. MENU INTERATIVO (ESCOLHA DO 2º ATRIBUTO) ---
    printf("\n--- Escolha o 2º Atributo ---\n");
    printf("Opções disponíveis (exceto a escolha anterior):\n");
    printf("1. População\n");
    printf("2. Área (km²)\n");
    printf("3. PIB (bilhões de reais)\n");
    printf("4. Número de Pontos Turísticos\n");
    printf("5. Densidade Populacional (hab/km²)\n");
    printf("6. PIB per Capita (reais)\n");
    printf("------------------------------\n");
    printf("Digite sua opção (1 a 6): ");
    scanf("%d", &atributo2);

    // --- 4. VALIDAÇÃO DAS ESCOLHAS (USANDO IF/ELSE) ---
    if (atributo1 >= 1 && atributo1 <= 6 && atributo2 >= 1 && atributo2 <= 6 && atributo1 != atributo2) {
        escolha_valida = 1;
    } else {
        printf("\nERRO: Uma ou ambas as opções são inválidas ou repetidas.\n");
    }

    // --- 5. EXECUÇÃO DA LÓGICA DE COMPARAÇÃO (USANDO SWITCH) ---
    if (escolha_valida) {
        
        printf("\n--- Detalhes da Rodada ---\n");
        printf("Carta 1: %s | Carta 2: %s\n", nome_cidade1, nome_cidade2);
        printf("--------------------------------\n");

        // Lógica para o PRIMEIRO ATRIBUTO
        switch (atributo1) {
            case 1: 
                soma_valores1 += (float)populacao1; // Converte para float na soma
                soma_valores2 += (float)populacao2;
                printf("1º Atributo: População\n");
                printf("  C1: %lu | C2: %lu\n", populacao1, populacao2);
                break;
            case 2: 
                soma_valores1 += area1;
                soma_valores2 += area2;
                printf("1º Atributo: Área\n");
                printf("  C1: %.2f | C2: %.2f\n", area1, area2);
                break;
            case 3: 
                soma_valores1 += pib1;
                soma_valores2 += pib2;
                printf("1º Atributo: PIB\n");
                printf("  C1: %.2f | C2: %.2f\n", pib1, pib2);
                break;
            case 4: 
                soma_valores1 += (float)pontos_turisticos1;
                soma_valores2 += (float)pontos_turisticos2;
                printf("1º Atributo: Pontos Turísticos\n");
                printf("  C1: %d | C2: %d\n", pontos_turisticos1, pontos_turisticos2);
                break;
            case 5: 
                soma_valores1 += densidade_populacional1;
                soma_valores2 += densidade_populacional2;
                printf("1º Atributo: Densidade Populacional\n");
                printf("  C1: %.2f | C2: %.2f\n", densidade_populacional1, densidade_populacional2);
                break;
            case 6: 
                soma_valores1 += pib_per_capita1;
                soma_valores2 += pib_per_capita2;
                printf("1º Atributo: PIB per Capita\n");
                printf("  C1: %.2f | C2: %.2f\n", pib_per_capita1, pib_per_capita2);
                break;
        }

        // Lógica para o SEGUNDO ATRIBUTO
        switch (atributo2) {
            case 1: 
                soma_valores1 += (float)populacao1;
                soma_valores2 += (float)populacao2;
                printf("2º Atributo: População\n");
                printf("  C1: %lu | C2: %lu\n", populacao1, populacao2);
                break;
            case 2: 
                soma_valores1 += area1;
                soma_valores2 += area2;
                printf("2º Atributo: Área\n");
                printf("  C1: %.2f | C2: %.2f\n", area1, area2);
                break;
            case 3: 
                soma_valores1 += pib1;
                soma_valores2 += pib2;
                printf("2º Atributo: PIB\n");
                printf("  C1: %.2f | C2: %.2f\n", pib1, pib2);
                break;
            case 4: 
                soma_valores1 += (float)pontos_turisticos1;
                soma_valores2 += (float)pontos_turisticos2;
                printf("2º Atributo: Pontos Turísticos\n");
                printf("  C1: %d | C2: %d\n", pontos_turisticos1, pontos_turisticos2);
                break;
            case 5: 
                soma_valores1 += densidade_populacional1;
                soma_valores2 += densidade_populacional2;
                printf("2º Atributo: Densidade Populacional\n");
                printf("  C1: %.2f | C2: %.2f\n", densidade_populacional1, densidade_populacional2);
                break;
            case 6: 
                soma_valores1 += pib_per_capita1;
                soma_valores2 += pib_per_capita2;
                printf("2º Atributo: PIB per Capita\n");
                printf("  C1: %.2f | C2: %.2f\n", pib_per_capita1, pib_per_capita2);
                break;
        }

        // --- 6. DETERMINAÇÃO DO VENCEDOR FINAL (USANDO IF/ELSE) ---
        
        printf("\nSOMA TOTAL DOS ATRIBUTOS:\n");
        printf("Carta 1 (%s): %.2f\n", nome_cidade1, soma_valores1); 
        printf("Carta 2 (%s): %.2f\n", nome_cidade2, soma_valores2);
        
        if (soma_valores1 > soma_valores2) {
            printf("\nRESULTADO FINAL: Carta 1 (%s) VENCEU A RODADA!\n", nome_cidade1);
        } else if (soma_valores2 > soma_valores1) {
            printf("\nRESULTADO FINAL: Carta 2 (%s) VENCEU A RODADA!\n", nome_cidade2);
        } else {
            printf("\nRESULTADO FINAL: EMPATE!\n");
        }

    } // Fim do if (escolha_valida)

    printf("===========================================\n");
    return 0;
}