#include <stdio.h> // Biblioteca padrão para entrada e saída (input/output)

// Função principal do programa.
int main() {
    // === DESAFIO SUPER TRUNFO: NÍVEL MESTRE ===
    // Objetivo: Cadastro, Cálculos Avançados (Super Poder) e Comparação de Cartas.

    // ==========================================================
    // DECLARAÇÃO DE VARIÁVEIS
    // ==========================================================
    
    // --- Variáveis da Carta 1 ---
    char estado1;           
    char codigo1[4];        
    char nomeCidade1[50];   
    unsigned long int populacao1; // Alterado para 'unsigned long int' para suportar números grandes
    float area1;            
    float pib1;             
    int pontosTuristicos1;  
    
    // Variáveis calculadas da Carta 1
    float densidadePopulacional1; 
    float pibPerCapita1;          
    float superPoder1; // Soma de todos os atributos (com lógica especial para densidade)

    // --- Variáveis da Carta 2 ---
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    unsigned long int populacao2; // Alterado para 'unsigned long int'
    float area2;
    float pib2;
    int pontosTuristicos2;
    
    // Variáveis calculadas da Carta 2
    float densidadePopulacional2;
    float pibPerCapita2;
    float superPoder2;

    printf("=== SISTEMA DE CARTAS SUPER TRUNFO (NÍVEL MESTRE) ===\n\n");

    // ==========================================================
    // CARTA 1: ENTRADA DE DADOS
    // ==========================================================
    printf("--- Digite os dados da Carta 1 ---\n");
    
    printf("Estado (A-H): ");
    scanf(" %c", &estado1); 

    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade1); 

    printf("População: ");
    scanf("%lu", &populacao1); // Alterado para %lu (unsigned long)

    printf("Área (km²): ");
    scanf("%f", &area1);

    printf("PIB (bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // --- CÁLCULOS DA CARTA 1 ---
    densidadePopulacional1 = (float)populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / (float)populacao1; // Convertendo PIB para reais
    
    // Cálculo do Super Poder: Soma de todos os atributos.
    // Para a densidade, usamos o inverso (1/densidade), pois menor densidade é "melhor" para o Super Poder neste cálculo.
    superPoder1 = (float)populacao1 + area1 + pib1 + (float)pontosTuristicos1 + pibPerCapita1 + (1.0f / densidadePopulacional1);


    // ==========================================================
    // CARTA 2: ENTRADA DE DADOS
    // ==========================================================
    printf("\n--- Digite os dados da Carta 2 ---\n");
    
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Código da Carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade2);

    printf("População: ");
    scanf("%lu", &populacao2); // Alterado para %lu

    printf("Área (km²): ");
    scanf("%f", &area2);

    printf("PIB (bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // --- CÁLCULOS DA CARTA 2 ---
    densidadePopulacional2 = (float)populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / (float)populacao2;
    superPoder2 = (float)populacao2 + area2 + pib2 + (float)pontosTuristicos2 + pibPerCapita2 + (1.0f / densidadePopulacional2);


    // ==========================================================
    // EXIBIÇÃO DOS DADOS DAS CARTAS
    // ==========================================================
    printf("\n\n=== RESUMO DAS CARTAS ===\n");
    
    printf("Carta 1 (%s): Pop: %lu, Super Poder: %.2f\n", nomeCidade1, populacao1, superPoder1);
    printf("Carta 2 (%s): Pop: %lu, Super Poder: %.2f\n", nomeCidade2, populacao2, superPoder2);


    // ==========================================================
    // COMPARAÇÃO DE CARTAS (A BATALHA)
    // ==========================================================
    // Aqui usamos operadores relacionais (> ou <).
    // O resultado será 1 (Verdadeiro/True) se a Carta 1 vencer, ou 0 (Falso/False) se perder.
    
    printf("\n=== COMPARAÇÃO DE CARTAS (Resultado: 1 = Carta 1 Venceu | 0 = Carta 2 Venceu) ===\n");

    // 1. População (Maior vence)
    printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);

    // 2. Área (Maior vence)
    printf("Área: Carta 1 venceu (%d)\n", area1 > area2);

    // 3. PIB (Maior vence)
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);

    // 4. Pontos Turísticos (Maior vence)
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontosTuristicos1 > pontosTuristicos2);

    // 5. Densidade Populacional (MENOR vence - Regra Invertida)
    // Aqui verificamos se a densidade da Carta 1 é MENOR (<) que a da Carta 2.
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidadePopulacional1 < densidadePopulacional2);

    // 6. PIB per Capita (Maior vence)
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibPerCapita1 > pibPerCapita2);

    // 7. Super Poder (Maior vence)
    printf("Super Poder: Carta 1 venceu (%d)\n", superPoder1 > superPoder2);

    return 0;
}
