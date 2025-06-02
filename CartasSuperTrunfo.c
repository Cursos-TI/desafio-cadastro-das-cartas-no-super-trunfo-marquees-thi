#include <stdio.h>

// Criando as cartas do super trunfo

int main(){
    // Variáveis da primeira carta
    char estado_1[1];
    char code_1[4]; // Refere-se ao código das cartas
    char cidade_1[20];
    int populacao_1;
    float area_1;
    float pib_1;
    int pontos_turisticos_1;
    float densidade_1;
    float pib_cap_1; // Refere-se ao PIB per capita da cidade

    // Variáveis da segunda carta
    char estado_2[1];
    char code_2[4];
    char cidade_2[20];
    int populacao_2;
    float area_2;
    float pib_2;
    int pontos_turisticos_2;
    float densidade_2;
    float pib_cap_2; // Refere-se ao PIB per capita da cidade

    // Guardar informações da primeira carta
    printf("Preenchendo as informações da primeira carta\n");
    printf("Digite um dos oito estados (A-H): \n");
    scanf("%s", &estado_1);
    printf("Digite um código para a carta (ex: A01, B03): \n");
    scanf("%s", &code_1);
    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade_1);
    printf("Digite a população da cidade: \n");
    scanf("%d", &populacao_1);
    printf("Digite a área da cidade em km²: \n");
    scanf("%f", &area_1);
    printf("Digite o Produto Interno Bruto da cidade: \n");
    scanf("%f", &pib_1);
    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf("%d", &pontos_turisticos_1);
    densidade_1 = populacao_1 / area_1;
    pib_cap_1 = pib_1 / populacao_1;
    

    // Guardar informações da segunda carta
    printf("\nPreenchendo as informações da segunda carta \n");

    printf("Digite um dos oito estados (A-H): \n");
    scanf("%s", &estado_2);
    printf("Digite um código para a carta (ex: A01, B03): \n");
    scanf("%s", &code_2);
    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade_2);
    printf("Digite a população da cidade: \n");
    scanf("%d", &populacao_2);
    printf("Digite a área da cidade em km²: \n");
    scanf("%f", &area_2);
    printf("Digite o Produto Interno Bruto da cidade: \n");
    scanf("%f", &pib_2);
    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf("%d", &pontos_turisticos_2);
    densidade_2 = populacao_2 / area_2;
    pib_cap_2 = pib_2 / populacao_2;

    // Exibir informações da primeira carta
    printf("\nCarta 1: \n");
    printf("Estado: %s\n", estado_1);
    printf("Código: %s\n", code_1);
    printf("Nome da cidade: %s\n", cidade_1);
    printf("População da cidade: %d\n", populacao_1);
    printf("Área da cidade: %.2fkm²\n", area_1);
    printf("PIB: %.2f bilhões de reais\n", pib_1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos_1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_1);
    printf("PIB per Capita: %.2f reais\n", pib_cap_1);

    // Exibir informações da segunda carta
    printf("\nCarta 2: \n");
    printf("Estado: %s\n", estado_2);
    printf("Código: %s\n", code_2);
    printf("Nome da cidade: %s\n", cidade_2);
    printf("População da cidade: %d\n", populacao_2);
    printf("Área da cidade: %.2fkm²\n", area_2);
    printf("PIB: %.2f bilhões de reais\n", pib_2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos_2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_2);
    printf("PIB per Capita: %.2f reais\n", pib_cap_2);

}