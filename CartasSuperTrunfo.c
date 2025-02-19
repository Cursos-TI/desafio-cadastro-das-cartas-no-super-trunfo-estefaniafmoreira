#include <stdio.h>

int main() {
    // Declaração das variáveis para armazenar os dados das cartas
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char nomeCidade1[50], nomeCidade2[50];
    int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;

    // Entrada de dados da primeira carta
    printf("Cadastro da Carta 1:\n");

    printf("Estado (A-H):\n ");
    scanf(" %c", &estado1);

    printf("Código da Carta (ex: A01)\n: ");
    scanf("%s", codigo1);

    printf("Nome da Cidade:\n ");
    scanf(" %[^\n]", nomeCidade1); 

    printf("População:\n ");
    scanf("%d", &populacao1);

    printf("Área em km²:\n ");
    scanf("%f", &area1);

    printf("PIB em bilhões de reais:\n ");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos:\n ");
    scanf("%d", &pontosTuristicos1);

    printf("\n");

    // Entrada de dados da segunda carta
    printf("Cadastro da Carta 2:\n");

    printf("Estado (A-H):\n ");
    scanf(" %c", &estado2);

    printf("Código da Carta (ex: B02)\n: ");
    scanf("%s", codigo2);

    printf("Nome da Cidade:\n ");
    scanf(" %[^\n]", nomeCidade2);

    printf("População: \n");
    scanf("%d", &populacao2);

    printf("Área em km²:\n ");
    scanf("%f", &area2);

    printf("PIB em bilhões de reais: \n");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos:\n ");
    scanf("%d", &pontosTuristicos2);

    printf("\n");

    // Exibição das informações cadastradas
    printf("=== Carta 1 ===\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    printf("\n");

    printf("=== Carta 2 ===\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0;
}