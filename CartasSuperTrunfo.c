#include <stdio.h> // Biblioteca padrão para entrada e saída (input/output)

// Função principal do programa.
// A execução do código começa sempre por aqui.
int main() {
    // === DESAFIO SUPER TRUNFO: NÍVEL AVENTUREIRO ===
    // Objetivo: Cadastro, Cálculos Automáticos e Exibição de duas cartas.

    // ==========================================================
    // DECLARAÇÃO DE VARIÁVEIS
    // ==========================================================
    
    // --- Variáveis da Carta 1 ---
    char estado1;           // Letra do estado (A-H)
    char codigo1[4];        // Código da carta (ex: A01)
    char nomeCidade1[50];   // Nome da cidade
    int populacao1;         // População em número de habitantes
    float area1;            // Área em km²
    float pib1;             // PIB em bilhões de reais
    int pontosTuristicos1;  // Quantidade de pontos turísticos
    
    // Variáveis para armazenar os cálculos da Carta 1
    float densidadePopulacional1; // Será calculado: População / Área
    float pibPerCapita1;          // Será calculado: PIB / População

    // --- Variáveis da Carta 2 ---
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    
    // Variáveis para armazenar os cálculos da Carta 2
    float densidadePopulacional2;
    float pibPerCapita2;

    printf("=== SISTEMA DE CARTAS SUPER TRUNFO (NÍVEL AVENTUREIRO) ===\n\n");

    // ==========================================================
    // CARTA 1: ENTRADA DE DADOS E CÁLCULOS
    // ==========================================================
    printf("--- Digite os dados da Carta 1 ---\n");
    
    // Leitura dos dados básicos
    printf("Estado (uma letra de A-H): ");
    scanf(" %c", &estado1); 

    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade1); 

    printf("População (número de habitantes): ");
    scanf("%d", &populacao1);

    printf("Área (km²): ");
    scanf("%f", &area1);

    printf("PIB (bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // --- CÁLCULOS DA CARTA 1 ---
    
    // 1. Densidade Populacional = População / Área
    // Usamos (float) antes de populacao1 para garantir que a divisão considere as casas decimais.
    densidadePopulacional1 = (float)populacao1 / area1;

    // 2. PIB per Capita = PIB / População
    // O enunciado pede o PIB em "bilhões", mas o per capita em "reais".
    // Então, convertemos o PIB de bilhões para reais multiplicando por 1.000.000.000
    // Se o professor pedir o cálculo simples sem conversão, basta remover o "* 1000000000".
    pibPerCapita1 = (pib1 * 1000000000) / (float)populacao1;


    // ==========================================================
    // CARTA 2: ENTRADA DE DADOS E CÁLCULOS
    // ==========================================================
    printf("\n--- Digite os dados da Carta 2 ---\n");
    
    printf("Estado (uma letra de A-H): ");
    scanf(" %c", &estado2);

    printf("Código da Carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade2);

    printf("População (número de habitantes): ");
    scanf("%d", &populacao2);

    printf("Área (km²): ");
    scanf("%f", &area2);

    printf("PIB (bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // --- CÁLCULOS DA CARTA 2 ---
    densidadePopulacional2 = (float)populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / (float)populacao2;


    // ==========================================================
    // EXIBIÇÃO DOS RESULTADOS
    // ==========================================================
    printf("\n\n=== RESULTADOS FINAIS ===\n");

    // Exibição da Carta 1 com os novos campos calculados
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    // Exibição da Carta 2 com os novos campos calculados
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    return 0; // Indica que o programa finalizou com sucesso
}
