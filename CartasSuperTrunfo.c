#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main(){

    char estado, codigoDaCarta[3], nomeDaCidade[20];
    unsigned long int populacao;
    int pontosTuristicos;
    float area, pib;
    float densidadePopulacional, pibPerCapita;
    float superPoderA;

    char estado2, codigoDaCarta2[3], nomeDaCidade2[20];
    unsigned long int populacao2; 
    int pontosTuristicos2;
    float area2, pib2;
    float densidadePopulacional2, pibPerCapita2;
    float superPoderB;

    printf("\nSeja bem vindo ao Super Trunfo!\n");
    printf("Para que possamos dar continuidade no jogo será necessário cadastrar duas cartas.\n");
    printf("Por gentileza preencha os dados corretamente da primeira carta.\n");
    
    printf("\nDigite a inicial do seu estado: ");
    scanf(" %c", &estado);

    printf("\nDigite o código da carta(A letra do estado seguida de um número de 01 a 04, exemplo A01, B03): ");
    scanf("%s", &codigoDaCarta);

    printf("\nDigite o nome da cidade: ");
    scanf("%s", &nomeDaCidade);

    printf("\nDigite o número de habitantes da cidade: ");
    scanf("%lu", &populacao);

    printf("\nDigite a área da cidade em quilometros quadrados: ");
    scanf("%f", &area);

    printf("\nDigite o PIB, produto interno bruto da cidade: ");
    scanf("%f", &pib);

    printf("\nDigite a quantidade de pontos turisticos na cidade: ");
    scanf("%d", &pontosTuristicos);

    
    printf("\nPor gentileza preencha os dados corretamente da segunda carta.\n");

    printf("\nDigite a inicial do seu estado: ");
    scanf(" %c", &estado2);

    printf("\nDigite o código da carta(A letra do estado seguida de um número de 01 a 04, exemplo A01, B03): ");
    scanf("%s", &codigoDaCarta2);

    printf("\nDigite o nome da cidade: ");
    scanf("%s", &nomeDaCidade2);

    printf("\nDigite o número de habitantes da cidade: ");
    scanf("%lu", &populacao2);

    printf("\nDigite a área da cidade em quilometros quadrados: ");
    scanf("%f", &area2);

    printf("\nDigite o PIB, produto interno bruto da cidade: ");
    scanf("%f", &pib2);

    printf("\nDigite a quantidade de pontos turisticos na cidade: ");
    scanf("%d", &pontosTuristicos2);

    densidadePopulacional = (float) populacao / area;
    densidadePopulacional2 = (float) populacao2 / area2;
    pibPerCapita =  (pib * 1000000000.0f) / (float) populacao;
    pibPerCapita2 =  (pib2 * 1000000000.0f) / (float) populacao2;

    superPoderA = (float)populacao + area + pib + (float)pontosTuristicos +  pibPerCapita + (1.0f/densidadePopulacional);
    superPoderB = (float)populacao2 + area2 + pib2 + (float)pontosTuristicos2 +  pibPerCapita2 + (1.0f/densidadePopulacional2);

    printf("\nCarta 1:\n");
    printf("\nEstado: %c", estado);
    printf("\nCódigo: %s", codigoDaCarta);
    printf("\nNome da Cidade: %s", &nomeDaCidade);
    printf("\nPopulação: %lu", populacao);
    printf("\nÁrea: %.2f km²", area);
    printf("\nPIB: %.2f bilhões de reais", pib);
    printf("\nNúmero de Pontos Turísticos: %d", pontosTuristicos);
    printf("\nDensidade Populacional: %.2f hab/km²", densidadePopulacional);
    printf("\nPIB per capita: %.2f reais", pibPerCapita);
    printf("\nSuper Poder: %.2f", superPoderA);

    printf("\nCarta 2:\n");
    printf("\nEstado: %c", estado2);
    printf("\nCódigo: %s", codigoDaCarta2);
    printf("\nNome da Cidade: %s", nomeDaCidade2);
    printf("\nPopulação: %lu", populacao2);
    printf("\nÁrea: %.2f km²", area2);
    printf("\nPIB: %.2f bilhões de reais", pib2);
    printf("\nNúmero de Pontos Turísticos: %d", pontosTuristicos2);
    printf("\nDensidade Populacional: %.2f hab/km²", densidadePopulacional2);
    printf("\nPIB per capita: %.2f reais", pibPerCapita2);
    printf("\nSuper Poder: %.2f", superPoderB);

    printf("\n\n***Comparando a carta vencedora!***");
    printf("\nQuem tiver mais números 1 é a carta vencedora");

    printf("\nCarta 1!");
    printf("\nPopulação (%d)", populacao > populacao2);
    printf("\nÁrea (%d)", area > area2);
    printf("\nPIB (%d)", pib > pib2);
    printf("\nPontos Turísticos (%d)", pontosTuristicos > pontosTuristicos2);
    printf("\nDensidade Populacional (%d)", densidadePopulacional < densidadePopulacional2);
    printf("\nPIB per Capita (%d)", pibPerCapita > pibPerCapita2);
    printf("\nSuper Poder (%d)", superPoderA > superPoderB);

    printf("\n\nCarta 2!");
    printf("\nPopulação (%d)", populacao2 > populacao);
    printf("\nÁrea (%d)", area2 > area);
    printf("\nPIB (%d)", pib2> pib);
    printf("\nPontos Turísticos (%d)", pontosTuristicos2 > pontosTuristicos);
    printf("\nDensidade Populacional (%d)", densidadePopulacional2 < densidadePopulacional);
    printf("\nPIB per Capita (%d)", pibPerCapita2 > pibPerCapita);
    printf("\nSuper Poder (%d)", superPoderB > superPoderA);

    return 0;
}