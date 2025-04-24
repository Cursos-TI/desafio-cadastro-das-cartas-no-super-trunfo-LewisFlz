#include <stdio.h>

int main (){

    char estado[10]; //sigla do estado (ex: Sp, rj)
    char codigocarta[10]; //Exemplo: A01, A02
    char ncidade[50]; //nome da cidade
    int turistico; // pontos turisticos
    int populacao;
    float area;
    float Pib;

    printf("Qual o nome do estado: \n");
    scanf("%s", estado);

    printf("Qual o nome da cidade: \n");
    scanf("%s", ncidade);

    printf("Qual a populacao da cidade: \n");
    scanf("%d", &populacao);

    printf("Qual a area em Km Qudrados: \n");
    scanf("%f", &area);

    printf("Quantos pontos turisticos possui: \n");
    scanf("%d", &turistico);

    printf("Qual o PIB da cidade: \n");
    scanf("%f", &Pib);

    printf("Qual o codio da carta: \n");
    scanf("%s", codigocarta);
    
    printf("Carta 1:\n");
    printf("Codigo da carta: %s\n", codigocarta);
    printf("Estado: %s\nCidade: %s\n", estado, ncidade);
    printf("Populacao: %d\nArea: %f\n", populacao, area);
    printf("Pontos turisticos: %d\nPib: %f\n", turistico, Pib);
    

    printf("Qual o nome do estado: \n");
    scanf("%s", estado);

    printf("Qual o nome da cidade: \n");
    scanf("%s", ncidade);

    printf("Qual a populacao da cidade: \n");
    scanf("%d", &populacao);

    printf("Qual a area em Km Qudrados: \n");
    scanf("%f", &area);

    printf("Quantos pontos turisticos possui: \n");
    scanf("%d", &turistico);

    printf("Qual o PIB da cidade: \n");
    scanf("%f", &Pib);

    printf("Qual o codio da carta: \n");
    scanf("%s", codigocarta);
    
    printf("Carta 2:\n");
    printf("Codigo da carta: %s\n", codigocarta);
    printf("Estado: %s\nCidade: %s\n", estado, ncidade);
    printf("Populacao: %d\nArea: %f\n", populacao, area);
    printf("Pontos turisticos: %d\nPib: %f\n", turistico, Pib);

    return 0;
}