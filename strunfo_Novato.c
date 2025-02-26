#include <stdio.h>

// Definindo uma estrutura para armazenar os dados de uma carta
struct Carta {
    char estado;
    char codigo[5];
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int pontos;
};

int main() {
    // Criando um array de 4 cartas
    struct Carta cartas[4];

    // Leitura dos dados para as 4 cartas
    for (int i = 0; i < 4; i++) {
        printf("\nInforme os dados da Carta %d:\n", i + 1);

        printf("Estado: ");
        scanf(" %c", &cartas[i].estado);  // Espaco antes de %c para consumir o '\n' anterior

        printf("Codigo da Carta: ");
        scanf("%s", cartas[i].codigo);

        printf("Nome da Cidade: ");
        scanf(" %[^\n]%*c", cartas[i].cidade);  // Para ler a string com espaços

        printf("Populacao: ");
        scanf("%d", &cartas[i].populacao);

        printf("Area (em km²): ");
        scanf("%f", &cartas[i].area);

        printf("PIB: ");
        scanf("%f", &cartas[i].pib);

        printf("Numero de Pontos Turisticos: ");
        scanf("%d", &cartas[i].pontos);
    }

    // Exibindo os dados das cartas
    for (int i = 0; i < 4; i++) {
        printf("\nCarta %d:\n", i + 1);
        printf("Estado: %c\n", cartas[i].estado);
        printf("Codigo: %s\n", cartas[i].codigo);
        printf("Nome da Cidade: %s\n", cartas[i].cidade);
        printf("Populacao: %d\n", cartas[i].populacao);
        printf("Area: %.2f km²\n", cartas[i].area);
        printf("PIB: %.2f bilhões de reais\n", cartas[i].pib);
        printf("Numero de Pontos Turisticos: %d\n", cartas[i].pontos);
    }

    return 0;
}
