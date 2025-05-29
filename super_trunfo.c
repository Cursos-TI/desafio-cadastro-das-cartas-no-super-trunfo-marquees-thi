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

    // Variáveis da segunda carta
    char estado_2[1];
    char code_2[4];
    char cidade_2[20];
    int populacao_2;
    float area_2;
    float pib_2;
    int pontos_turisticos_2;

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

    // Exibir informações da primeira carta
    printf("\nCarta 1: \n");
    printf("Estado: %s\n", estado_1);
    printf("Código: %s\n", code_1);
    printf("Nome da cidade: %s\n", cidade_1);
    printf("População da cidade: %d\n", populacao_1);
    printf("Área da cidade: %.2fkm²\n", area_1);
    printf("PIB: %.2f\n", pib_1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos_1);

    // Exibir informações da segunda carta
    printf("\nCarta 2: \n");
    printf("Estado: %s\n", estado_2);
    printf("Código: %s\n", code_2);
    printf("Nome da cidade: %s\n", cidade_2);
    printf("População da cidade: %d\n", populacao_2);
    printf("Área da cidade: %.2fkm²\n", area_2);
    printf("PIB: %.2f\n", pib_2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos_2);

}