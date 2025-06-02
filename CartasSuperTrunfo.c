#include <stdio.h>

// Criando as cartas do super trunfo

int main(){
    // Variáveis da primeira carta
    char estado_1[1];
    char code_1[4]; // Refere-se ao código das cartas
    char cidade_1[20];
    unsigned long int populacao_1;
    float area_1;
    float pib_1;
    int pontos_turisticos_1;
    float densidade_1;
    float pib_cap_1; // Refere-se ao PIB per capita da cidade
    float super_poder1; // Refere-se ao Super Poder da carta

    // Variáveis da segunda carta
    char estado_2[1];
    char code_2[4];
    char cidade_2[20];
    unsigned long int populacao_2;
    float area_2;
    float pib_2;
    int pontos_turisticos_2;
    float densidade_2;
    float pib_cap_2; 
    float super_poder2;


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
    super_poder1 = (populacao_1 + area_1 + pib_1 + pontos_turisticos_1 + pib_cap_1) / densidade_1;

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
    super_poder2 = (populacao_2 + area_2 + pib_2 + pontos_turisticos_2 + pib_cap_2) / densidade_2;

    // Exibir informações da primeira carta
    printf("\nCarta 1: \n");
    printf("População: Carta 1 venceu (%d)\n", populacao_1 > populacao_2);
    printf("Área: Carta 1 venceu (%d)\n", area_1 > area_2);
    printf("PIB: Carta 1 venceu (%d)\n", pib_1 > pib_2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontos_turisticos_1 > pontos_turisticos_2);
    printf("Densidade Populacional: Carta 2 venceu (%d)\n", densidade_1 < densidade_2);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pib_cap_1 > pib_cap_2);
    printf("Super Poder: Carta 1 venceu (%d)\n", super_poder1 > super_poder2);

}