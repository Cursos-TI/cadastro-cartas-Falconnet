#include <stdio.h> // Biblioteca padrão para entrada e saída (input/output)

// Função principal do programa. 
// A execução do código começa sempre por aqui.
int main() {
    // === DESAFIO SUPER TRUNFO: NÍVEL NOVATO ===
    // Objetivo: Cadastro e Exibição de duas cartas de cidades.
    
    // ==========================================================
    // DECLARAÇÃO DE VARIÁVEIS
    // ==========================================================
    // Aqui reservamos espaço na memória para armazenar os dados das cartas.
    
    // --- Variáveis da Carta 1 ---
    char estado1;           // 'char' armazena um único caractere (letra A-H)
    char codigo1[4];        // 'char[]' é um array de caracteres (string) para texto curto (ex: "A01")
    char nomeCidade1[50];   // Array maior para o nome da cidade (até 49 caracteres + terminador)
    int populacao1;         // 'int' armazena números inteiros (sem casas decimais)
    float area1;            // 'float' armazena números reais (com casas decimais) para a área
    float pib1;             // 'float' para o Produto Interno Bruto (valores monetários)
    int pontosTuristicos1;  // 'int' para contagem simples de pontos turísticos

    // --- Variáveis da Carta 2 ---
    // Repetimos os mesmos tipos para a segunda carta
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // Cabeçalho inicial do programa
    printf("=== CADASTRO SUPER TRUNFO ===\n\n");

    // ==========================================================
    // LEITURA DOS DADOS: CARTA 1
    // ==========================================================
    printf("--- Digite os dados da Carta 1 ---\n");
    
    // Leitura do Estado
    printf("Estado (uma letra de A-H): ");
    // O espaço antes de %c (" %c") é um truque para limpar o buffer do teclado (enter/espaços anteriores)
    scanf(" %c", &estado1); 

    // Leitura do Código
    printf("Código da Carta (ex: A01): ");
    // %s lê uma string (sequência de caracteres) até encontrar um espaço em branco
    scanf("%s", codigo1);

    // Leitura do Nome da Cidade
    printf("Nome da Cidade: ");
    // %[^\n] é um especificador avançado que lê tudo até encontrar uma quebra de linha (Enter).
    // Isso permite ler nomes compostos como "São Paulo" ou "Rio de Janeiro".
    scanf(" %[^\n]", nomeCidade1); 

    // Leitura da População
    printf("População (número de habitantes): ");
    // %d é usado para ler inteiros (int)
    scanf("%d", &populacao1);

    // Leitura da Área
    printf("Área (km²): ");
    // %f é usado para ler números de ponto flutuante (float)
    scanf("%f", &area1);

    // Leitura do PIB
    printf("PIB (bilhões de reais): ");
    scanf("%f", &pib1);

    // Leitura dos Pontos Turísticos
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);


    // ==========================================================
    // LEITURA DOS DADOS: CARTA 2
    // ==========================================================
    printf("\n--- Digite os dados da Carta 2 ---\n");
    
    // Repetição do processo para a segunda carta
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
    // EXIBIÇÃO DOS DADOS (SAÍDA)
    // ==========================================================
    // Aqui usamos printf para mostrar os valores armazenados nas variáveis.
    // Usamos os mesmos especificadores (%d, %f, %s, %c) para formatar a saída.
    
    printf("\n\n=== DADOS CADASTRADOS ===\n");

    // --- Exibição Carta 1 ---
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    // %.2f formata o número float para mostrar apenas 2 casas decimais
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    // --- Exibição Carta 2 ---
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    // Retorna 0 para o sistema operacional, indicando que o programa terminou com sucesso.
    return 0;
}
