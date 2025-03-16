#include <stdio.h>

// Estrutura que representa uma carta do Super Trunfo
struct Carta {
    char estado[50];
    int codigo;
    char nomeCidade[50];
    int populacao;
    float pib;
    float area;
    int pontosTuristicos;
    float densidadePopulacional;
    float pibPerCapita;
};

int main() {
    struct Carta carta;

    // Cadastro das informações básicas da cidade
    printf("=== Cadastro de Carta Super Trunfo - Países ===\n");

    printf("Digite o estado: ");
    fgets(carta.estado, sizeof(carta.estado), stdin);

    printf("Digite o código da cidade: ");
    scanf("%d", &carta.codigo);
    getchar(); // Limpa o buffer

    printf("Digite o nome da cidade: ");
    fgets(carta.nomeCidade, sizeof(carta.nomeCidade), stdin);

    printf("Digite a população: ");
    scanf("%d", &carta.populacao);

    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &carta.pib);

    printf("Digite a área (em km²): ");
    scanf("%f", &carta.area);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &carta.pontosTuristicos);

    // Cálculo de propriedades derivadas
    carta.densidadePopulacional = carta.populacao / carta.area;
    carta.pibPerCapita = (carta.pib * 1000000000) / carta.populacao;

    // Exibição das informações
    printf("\n=== Carta Registrada ===\n");
    printf("Estado: %s", carta.estado);
    printf("Código: %d\n", carta.codigo);
    printf("Cidade: %s", carta.nomeCidade);
    printf("População: %d\n", carta.populacao);
    printf("PIB: %.2f bilhões\n", carta.pib);
    printf("Área: %.2f km²\n", carta.area);
    printf("Pontos Turísticos: %d\n", carta.pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta.densidadePopulacional);
    printf("PIB per capita: %.2f R$\n", carta.pibPerCapita);

    return 0;
}
