#include <stdio.h>

int main() {
    // === DESAFIO SUPER TRUNFO: NÍVEL NOVATO ===
    // Objetivo: Cadastro e Exibição de duas cartas sem loops ou condicionais.

    // --- Variáveis da Carta 1 ---
    char estado1;           // Tipo: char (Ex: 'A')
    char codigo1[4];        // Tipo: char[] (Ex: "A01")
    char nomeCidade1[50];   // Tipo: char[] (Nome com espaços)
    int populacao1;         // Tipo: int
    float area1;            // Tipo: float
    float pib1;             // Tipo: float
    int pontosTuristicos1;  // Tipo: int

    // --- Variáveis da Carta 2 ---
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    printf("=== CADASTRO SUPER TRUNFO ===\n\n");

    // ==========================================================
    // LEITURA DOS DADOS: CARTA 1
    // ==========================================================
    printf("--- Digite os dados da Carta 1 ---\n");
    
    printf("Estado (uma letra de A-H): ");
    scanf(" %c", &estado1); // O espaço antes de %c limpa o buffer

    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade1); // Lê string com espaços

    printf("População (número de habitantes): ");
    scanf("%d", &populacao1);

    printf("Área (km²): ");
    scanf("%f", &area1);

    printf("PIB (bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);


    // ==========================================================
    // LEITURA DOS DADOS: CARTA 2
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


    // ==========================================================
    // EXIBIÇÃO DOS DADOS
    // ==========================================================
    // O formato segue estritamente o exemplo solicitado no desafio
    
    printf("\n\n=== DADOS CADASTRADOS ===\n");

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0;
}
