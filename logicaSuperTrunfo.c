#include <stdio.h>

#include <stdio.h>

int main() {
    // Definicoes de tipo para a tarefa avancada
    typedef unsigned long int PopulacaoType;

    // --- 1. DEFINICAO DAS ESTRUTURAS DE DADOS (Hardcoded) ---

    // Carta 1: Sao Paulo (Configurada para ter mais Pontos Turisticos: 50)
    char estado1 = 'A';
    char codigo1[] = "A01";
    char nome_cidade1[] = "Sao Paulo";
    PopulacaoType populacao1 = 12325000;
    float area1 = 1521.11;
    float pib1 = 699.28;
    int pontos_turisticos1 = 50; // Atributo de comparacao

    // Carta 2: Rio de Janeiro (Configurada para ter menos Pontos Turisticos: 30)
    char estado2 = 'B';
    char codigo2[] = "B02";
    char nome_cidade2[] = "Rio de Janeiro";
    PopulacaoType populacao2 = 6748000;
    float area2 = 1200.25;
    float pib2 = 300.50;
    int pontos_turisticos2 = 30; // Atributo de comparacao
    
    // --- 2. VARIAVEIS DE CALCULO ---

    float densidade_populacional1;
    float pib_per_capita1;
    float densidade_populacional2;
    float pib_per_capita2;
    
    // Variavel que define qual atributo sera comparado (escolha direta no codigo)
    const char *atributo_comparacao = "Número de Pontos Turísticos";


    // --- 3. EXECUCAO DOS CALCULOS ---

    // Calculo para Carta 1
    densidade_populacional1 = (float)populacao1 / area1;
    pib_per_capita1 = (pib1 * 1000000000.0f) / (float)populacao1;

    // Calculo para Carta 2
    densidade_populacional2 = (float)populacao2 / area2;
    pib_per_capita2 = (pib2 * 1000000000.0f) / (float)populacao2;


    // --- 4. EXIBICAO DOS DADOS E CALCULOS (Requisito Básico/Intermediário) ---
    
    printf("--- Dados Cadastrados ---\n");
    printf("Carta 1 (%s - %s):\n", nome_cidade1, codigo1);
    printf("  População: %lu\n", populacao1);
    printf("  Área: %.2f km²\n", area1);
    printf("  PIB: %.2f bilhões de reais\n", pib1);
    printf("  Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("  Densidade Populacional: %.2f hab/km²\n", densidade_populacional1);
    printf("  PIB per Capita: %.2f reais\n", pib_per_capita1);
    
    printf("\nCarta 2 (%s - %s):\n", nome_cidade2, codigo2);
    printf("  População: %lu\n", populacao2);
    printf("  Área: %.2f km²\n", area2);
    printf("  PIB: %.2f bilhões de reais\n", pib2);
    printf("  Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("  Densidade Populacional: %.2f hab/km²\n", densidade_populacional2);
    printf("  PIB per Capita: %.2f reais\n", pib_per_capita2);
    
    printf("\n-------------------------------------------------\n");
    
    
    // --- 5. LOGICA CENTRAL DE COMPARACAO (USANDO IF/IF-ELSE) ---
    
    printf("Comparacao de cartas (Atributo: %s):\n\n", atributo_comparacao);
    
    // Atribuicao dos valores do atributo escolhido
    // Para Pontos Turisticos, usamos o tipo int.
    int valor_carta1 = pontos_turisticos1;
    int valor_carta2 = pontos_turisticos2;
    
    // Variaveis auxiliares para formatacao da saida
    char *cidade_vencedora;
    char *codigo_vencedor;
    
    // -------------------------------------------------------------
    // LOGICA IF / IF-ELSE: Compara os valores
    // PONTOS TURÍSTICOS: MAIOR valor vence
    // -------------------------------------------------------------

    // 1. Verifica se a Carta 1 vence (MAIOR valor vence)
    if (valor_carta1 > valor_carta2) {
        // Carta 1 venceu
        cidade_vencedora = nome_cidade1;
        codigo_vencedor = codigo1;
        
        // Exibe os detalhes da comparacao e o resultado
        printf("Carta 1 - %s (%s): %d\n", nome_cidade1, codigo1, valor_carta1);
        printf("Carta 2 - %s (%s): %d\n", nome_cidade2, codigo2, valor_carta2);
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade_vencedora);
    } 
    // 2. Se a Carta 1 nao venceu, verifica se a Carta 2 vence
    else if (valor_carta2 > valor_carta1) {
        // Carta 2 venceu
        cidade_vencedora = nome_cidade2;
        codigo_vencedor = codigo2;
        
        // Exibe os detalhes da comparacao e o resultado
        printf("Carta 1 - %s (%s): %d\n", nome_cidade1, codigo1, valor_carta1);
        printf("Carta 2 - %s (%s): %d\n", nome_cidade2, codigo2, valor_carta2);
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade_vencedora);
    } 
    // 3. Caso nao haja vencedor (empate)
    else {
        // Houve um empate
        printf("Carta 1 - %s (%s): %d\n", nome_cidade1, codigo1, valor_carta1);
        printf("Carta 2 - %s (%s): %d\n", nome_cidade2, codigo2, valor_carta2);
        printf("Resultado: Empate entre as cartas!\n");
    }

    return 0; // Finaliza o programa
}
