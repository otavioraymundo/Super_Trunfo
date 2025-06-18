#include <stdio.h>
#include <string.h>

int main() {
    // Declaração das variáveis
    char estado1, codigo1[30], nome1[30], estado2, codigo2[30], nome2[30];
    int pontos_turisticos1, pontos_turisticos2;
    float area1, pib1, area2, pib2;
    unsigned long int populacao1, populacao2;

    // Entrada de dados para as cartas
    printf("Carta 1\n");
    printf("Estado: ");
    scanf(" %c", &estado1);
    printf("Codigo da Cidade: ");
    scanf(" %s", codigo1);
    printf("Nome da Cidade: ");
    getchar(); // Limpa o buffer do teclado
    fgets(nome1, sizeof(nome1), stdin); // Usando fgets para ler o nome da cidade
    nome1[strlen(nome1) - 1] = '\0'; // Remove o newline adicionado pelo fgets
    printf("Populacao: ");
    scanf(" %lu", &populacao1);
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
    scanf(" %s", codigo2);
    printf("Nome da Cidade: ");
    getchar(); // Limpa o buffer do teclado
    fgets(nome2, sizeof(nome2), stdin); // Usando fgets para ler o nome da cidade
    nome2[strlen(nome2) - 1] = '\0'; // Remove o newline adicionado pelo fgets
    printf("Populacao: ");
    scanf(" %lu", &populacao2);
    printf("Area: ");
    scanf(" %f", &area2);
    printf("PIB: ");
    scanf(" %f", &pib2);
    printf("Numero de Pontos Turisticos: ");
    scanf(" %d", &pontos_turisticos2);

    // Cálculo densdade populacional, PIB per capita e super poder
    float densidade1 = (float)populacao1 / area1;
    float densidade2 = (float)populacao2 / area2;
    float pib_per_capita1 = pib1 / (float)populacao1;
    float pib_per_capita2 = pib2 / (float)populacao2;
    //float poder1 = (float)populacao1 + pib1 + area1 + (float)pontos_turisticos1 + (area1 / (float)populacao1) + pib_per_capita1;
    //float poder2 = (float)populacao2 + pib2 + area2 + (float)pontos_turisticos2 + (area2 / (float)populacao2) + pib_per_capita2;

    // Exibindo as cartas
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo da Cidade: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f Km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turisticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/Km²\n", densidade1);
    printf("PIB per Capita: %.2f\n", pib_per_capita1);
    //printf("Super Poder: %.2f\n", poder1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo da Cidade: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f Km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turisticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/Km²\n", densidade2);
    printf("PIB per Capita: %.2f\n", pib_per_capita2);
    //printf("Super Poder: %.2f\n", poder2);

    // Comparação de cartas
    printf("\nComparacao de Cartas (Atributo populacao):\n");
    printf("Carta 1 - %s: %lu\n", nome1, populacao1);
    printf("Carta 2 - %s: %lu\n", nome2, populacao2);
    if( populacao1 > populacao2) {
        printf("Resultado: Carta 1 venceu!\n");
    } else {
        printf("Resultado: Carta 2 venceu!\n");
    }

    return 0;
}