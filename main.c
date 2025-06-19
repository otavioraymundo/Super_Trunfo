#include <stdio.h>
#include <string.h>

int main() {
    // Declaração das variáveis
    char estado1, codigo1[30], nome1[30], estado2, codigo2[30], nome2[30];
    int pontos_turisticos1, pontos_turisticos2;
    float area1, pib1, area2, pib2;
    unsigned long int populacao1, populacao2;
    int options = 0;

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

    // Menu de opcões para comparação de atributos
    printf("\nSelecione o atributo para comparar:\n");
    printf("1. Area\n");
    printf("2. PIB\n");
    printf("3. Populacao\n");
    printf("4. Pontos Turisticos\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB per Capita\n");
    scanf("%d", &options);

    // Comparação e exibição do resultado
    switch(options) {
        case 1:
            printf("%s vs %s - comparacao Area\n", nome1, nome2);
            printf("Carta 1 - %.2f, Carta 2 - %.2f\n", area1, area2);
            if(area1 > area2) {
                printf("Resultado: Carta 1 venceu! %.2f", area1);
            } else if(area2 > area1) {
                printf("Resultado: Carta 2 venceu! %.2f", area2);
            } else {
                printf("Resultado: Empate.");
            }
            break;
        case 2:
            printf("%s vs %s - comparacao PIB\n", nome1, nome2);
            printf("Carta 1 - %.2f, Carta 2 - %.2f\n", pib1, pib2);
            if(pib1 > pib2) {
                printf("Resultado: Carta 1 venceu! %.2f", pib1);
            } else if(pib2 > pib1) {
                printf("Resultado: Carta 2 venceu! %.2f", pib2);
            } else {
                printf("Resultado: Empate.");
            }
            break;
        case 3:
            printf("%s vs %s - comparacao Populacao\n", nome1, nome2);
            printf("Carta 1 - %lu, Carta 2 - %lu\n", populacao1, populacao2);
            if(populacao1 > populacao2) {
                printf("Resultado: Carta 1 venceu! %lu", populacao1);
            } else if(populacao2 > populacao1) {
                printf("Resultado: Carta 2 venceu! %lu", populacao2);
            } else {
                printf("Resultado: Empate.");
            }
            break;
        case 4:
            printf("%s vs %s - comparacao Numero de pontos turisticos\n", nome1, nome2);
            printf("Carta 1 - %d, Carta 2 - %d\n", pontos_turisticos1, pontos_turisticos2);
            if(pontos_turisticos1 > pontos_turisticos2) {
                printf("Resultado: Carta 1 venceu! %d", pontos_turisticos1);
            } else if(pontos_turisticos2 > pontos_turisticos1) {
                printf("Resultado: Carta 2 venceu! %d", pontos_turisticos2);
            } else {
                printf("Resultado: Empate.");
            }
            break;
        case 5:
            printf("%s vs %s - comparacao Densidade Populacional\n", nome1, nome2);
            printf("Carta 1 - %.2f, Carta 2 - %.2f\n", densidade1, densidade2);
            if(densidade1 < densidade2) {
                printf("Resultado: Carta 1 venceu! %.2f", densidade1);
            } else if(densidade2 < densidade1) {
                printf("Resultado: Carta 2 venceu! %.2f", densidade2);
            } else {
                printf("Resultado: Empate.");
            }
            break;
        case 6:
            printf("%s vs %s - comparacao PIB per capita\n", nome1, nome2);
            printf("Carta 1 - %.2f, Carta 2 - %.2f\n", pib_per_capita1, pib_per_capita2);
            if(pib_per_capita1 > pib_per_capita2) {
                printf("Resultado: Carta 1 venceu! %.2f", pib_per_capita1);
            } else if(pib_per_capita2 > pib_per_capita1) {
                printf("Resultado: Carta 2 venceu! %.2f", pib_per_capita2);
            } else {
                printf("Resultado: Empate.");
            }
            break;
        default:
            printf("Opcao invalida.\n");    
    }

    return 0;
}