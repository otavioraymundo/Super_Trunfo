#include <stdio.h>
int main() {
    // Declaração das variáveis
    char estado1, codigo1[30], nome1[30], estado2, codigo2[30], nome2[30];
    int populacao1, pontos_turisticos1, populacao2, pontos_turisticos2;
    float area1, pib1, area2, pib2;

    // Entrada de dados para as cartas
    printf("Carta 1\n");
    printf("Estado: ");
    scanf(" %c", &estado1);
    printf("Codigo da Cidade: ");
    scanf(" %s", &codigo1);
    printf("Nome da Cidade: ");
    getchar(); // Limpa o buffer do teclado
    fgets(nome1, 30, stdin); // Usando fgets para ler o nome da cidade
    printf("Populacao: ");
    scanf(" %d", &populacao1);
    printf("Area: ");
    scanf(" %f", &area1);
    printf("PIB: ");
    scanf(" %f", &pib1);
    printf("Numero de Pontos Turisticos: ");
    scanf(" %d", &pontos_turisticos1);

    printf("\nCarta 2\n");
    printf("Estado: ");
    scanf(" %c", &estado2);
    printf("Codigo da Cidade: ");
    scanf(" %s", &codigo2);
    printf("Nome da Cidade: ");
    getchar(); // Limpa o buffer do teclado
    fgets(nome2, 30, stdin); // Usando fgets para ler o nome da cidade
    printf("Populacao: ");
    scanf(" %d", &populacao2);
    printf("Area: ");
    scanf(" %f", &area2);
    printf("PIB: ");
    scanf(" %f", &pib2);
    printf("Numero de Pontos Turisticos: ");
    scanf(" %d", &pontos_turisticos2);

    float densidade1 = (float)populacao1 / area1;
    float densidade2 = (float)populacao2 / area2;
    float pib_per_capita1 = pib1 / (float)populacao1;
    float pib_per_capita2 = pib2 / (float)populacao2;

    // Exibindo as cartas
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo da Cidade: %s\n", codigo1);
    printf("Nome da Cidade: %s", nome1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f Km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turisticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/Km²\n", densidade1);
    printf("PIB per Capita: %.2f\n", pib_per_capita1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo da Cidade: %s\n", codigo2);
    printf("Nome da Cidade: %s", nome2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f Km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turisticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/Km²\n", densidade2);
    printf("PIB per Capita: %.2f\n", pib_per_capita2);
    return 0;
}