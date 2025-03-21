#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Nível Aventureiro - Comparação com Menu Interativo

int main() {
    // Definindo as variáveis para cada carta
    int codigo1, populacao1, pontosTuristicos1;
    char nome1[50];
    float area1, pib1;

    int codigo2, populacao2, pontosTuristicos2;
    char nome2[50];
    float area2, pib2;

    int opcao;

    // Cadastro da Carta 1
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Digite o código da cidade: ");
    scanf("%d", &codigo1);
    getchar();
    printf("Digite o nome da cidade: ");
    fgets(nome1, sizeof(nome1), stdin);
    printf("Digite a população: ");
    scanf("%d", &populacao1);
    printf("Digite a área (em km²): ");
    scanf("%f", &area1);
    printf("Digite o PIB (em bilhões de R$): ");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    getchar(); // Limpeza do buffer

    // Cadastro da Carta 2
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Digite o código da cidade: ");
    scanf("%d", &codigo2);
    getchar();
    printf("Digite o nome da cidade: ");
    fgets(nome2, sizeof(nome2), stdin);
    printf("Digite a população: ");
    scanf("%d", &populacao2);
    printf("Digite a área (em km²): ");
    scanf("%f", &area2);
    printf("Digite o PIB (em bilhões de R$): ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Menu interativo
    printf("\n=== Escolha o atributo para comparar ===\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("Digite a opção: ");
    scanf("%d", &opcao);

    // Comparação simples usando if-else
    printf("\n=== Resultado ===\n");

    if (opcao == 1) {
        printf("Comparando População...\n");
        if (populacao1 > populacao2)
            printf("Vencedora: %s", nome1);
        else if (populacao2 > populacao1)
            printf("Vencedora: %s", nome2);
        else
            printf("Empate!\n");
    }
    else if (opcao == 2) {
        printf("Comparando Área...\n");
        if (area1 > area2)
            printf("Vencedora: %s", nome1);
        else if (area2 > area1)
            printf("Vencedora: %s", nome2);
        else
            printf("Empate!\n");
    }
    else if (opcao == 3) {
        printf("Comparando PIB...\n");
        if (pib1 > pib2)
            printf("Vencedora: %s", nome1);
        else if (pib2 > pib1)
            printf("Vencedora: %s", nome2);
        else
            printf("Empate!\n");
    }
    else if (opcao == 4) {
        printf("Comparando Pontos Turísticos...\n");
        if (pontosTuristicos1 > pontosTuristicos2)
            printf("Vencedora: %s", nome1);
        else if (pontosTuristicos2 > pontosTuristicos1)
            printf("Vencedora: %s", nome2);
        else
            printf("Empate!\n");
    }
    else {
        printf("Opção inválida.\n");
    }

    return 0;
}
