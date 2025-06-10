#include <stdio.h>
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
    fgets(nome1, 30, stdin); // Usando fgets para ler o nome da cidade
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
    fgets(nome2, 30, stdin); // Usando fgets para ler o nome da cidade
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
    float poder1 = (float)populacao1 + pib1 + area1 + (float)pontos_turisticos1 + (area1 / (float)populacao1) + pib_per_capita1;
    float poder2 = (float)populacao2 + pib2 + area2 + (float)pontos_turisticos2 + (area2 / (float)populacao2) + pib_per_capita2;

    // Exibindo as cartas
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo da Cidade: %s\n", codigo1);
    printf("Nome da Cidade: %s", nome1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f Km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turisticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/Km²\n", densidade1);
    printf("PIB per Capita: %.2f\n", pib_per_capita1);
    printf("Super Poder: %.2f\n", poder1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo da Cidade: %s\n", codigo2);
    printf("Nome da Cidade: %s", nome2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f Km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turisticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/Km²\n", densidade2);
    printf("PIB per Capita: %.2f\n", pib_per_capita2);
    printf("Super Poder: %.2f\n", poder2);

    // Comparação e exibição dos resultados
    printf("\nComparacao de Cartas:\n");
    if (populacao1 > populacao2) {
        printf("Populacao: Carta 1 venceu (1)\n");
    } else if(populacao1 < populacao2) {
        printf("Populacao: Carta 2 venceu (0)\n");
    }
    if (area1 > area2) {
        printf("Area: Carta 1 venceu (1)\n");
    } else if(area1 < area2) {
        printf("Area: Carta 2 venceu (0)\n");
    }
    if (pib1 > pib2) {
        printf("PIB: Carta 1 venceu (1)\n");
    } else if(pib1 < pib2) {
        printf("PIB: Carta 2 venceu (0)\n");
    }
    if (pontos_turisticos1 > pontos_turisticos2) {
        printf("Pontos Turisticos: Carta 1 venceu (1)\n");
    } else if(pontos_turisticos1 < pontos_turisticos2) {
        printf("Pontos Turisticos: Carta 2 venceu (0)\n");
    }
    if (densidade1 > densidade2) {
        printf("Densidade Populacional: Carta 2 venceu (0)\n");
    } else if(densidade1 < densidade2) {
        printf("Densidade Populacional: Carta 1 venceu (1)\n");
    }
    if (pib_per_capita1 > pib_per_capita2) {
        printf("PIB per Capita: Carta 1 venceu (1)\n");
    } else if(pib_per_capita1 < pib_per_capita2) {
        printf("PIB per Capita: Carta 2 venceu (0)\n");
    }
    if (poder1 > poder2) {
        printf("Super Poder: Carta 1 venceu (1)\n");
    } else if(poder1 < poder2) {
        printf("Super Poder: Carta 2 venceu (0)\n");
    }
    
    return 0;
}