#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.

int main() {
    // Definindo as variáveis para cada atributo da cidade
    int codigo;
    char nome[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;

    // Cadastro das Cartas:
    printf("=== Cadastro de Carta Super Trunfo - Países ===\n");

    printf("Digite o código da cidade: ");
    scanf("%d", &codigo);
    getchar(); // Limpeza do buffer do teclado após o scanf

    printf("Digite o nome da cidade: ");
    fgets(nome, sizeof(nome), stdin);

    printf("Digite a população: ");
    scanf("%d", &populacao);

    printf("Digite a área (em km²): ");
    scanf("%f", &area);

    printf("Digite o PIB (em bilhões de R$): ");
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos);

    // Exibição dos Dados das Cartas:
    printf("\n=== Dados da Carta Cadastrada ===\n");
    printf("Código da cidade: %d\n", codigo);
    printf("Nome da cidade: %s", nome);
    printf("População: %d habitantes\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de R$\n", pib);
    printf("Número de pontos turísticos: %d\n", pontosTuristicos);

    return 0;
}