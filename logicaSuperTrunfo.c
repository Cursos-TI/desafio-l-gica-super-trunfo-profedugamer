#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    // Descrição do jogo Super Trunfo Países
    printf("Bem vindo ao jogo Super Trunfo Países\n\n");
    printf("No jogo, as cartas serão divididas por estados, cada um com quatro cidades.\n");
    printf("Cada país será dividido em oito estados, identificados pelas letras de A a H.\n");
    printf("Cada estado terá quatro cidades, numeradas de 1 a 4.\n");
    printf("A combinação da letra do estado e o número da cidade define o código da carta\n(por exemplo, A01, A02, B01, B02).\n");
    printf("Para começar o jogo, cadastre suas cartas.\n\n");


    //Variáveis da primeira carta
    char codigo_da_cidade[4];
    char nome[50];
    int populacao;
    float area;
    double pib;
    int pontos_turisticos;
    unsigned int densidade_populacional;
    float pib_per_capita, superpoder;

    //variáveis da segunda carta
    char codigo_da_cidade2[4];
    char nome2[50];
    int populacao2;
    float area2;
    double pib2;
    int pontos_turisticos2;
    unsigned int densidade_populacional2;
    float pib_per_capita2, superpoder2;

  
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio


    //Entrada de dados da primeira carta
    printf("Insira o código da primeira carta: \n");
    scanf("%s", &codigo_da_cidade);
    printf("Insira o nome da cidade: \n");
    scanf(" %[^\n]", &nome); //Entrada para aceitar espaço no nome das cidades. Comando: %[^\n]
    printf("Insira a população da cidade: \n");
    scanf("%d", &populacao);
    printf("Insira o valor da área (km²): \n");
    scanf("%f", &area);
    printf("Insira o PIB: \n");
    scanf("%lf", &pib);
    printf("Insira a quantidade de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos);

    //Entrada de dados da segunda carta
    printf("\nInsira o código da segunda carta: \n");
    scanf("%s", &codigo_da_cidade2);
    printf("Insira o nome da cidade: \n");
    scanf(" %[^\n]", &nome2); //Entrada para aceitar espaço no nome das cidades. Comando: %[^\n]
    printf("Insira a população da cidade: \n");
    scanf("%d", &populacao2);
    printf("Insira o valor da área (km²): \n");
    scanf("%f", &area2);
    printf("Insira o PIB: \n");
    scanf("%lf", &pib2);
    printf("Insira a quantidade de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos2);


    //Cálculos do jogo Supertrunfo:
    //Densidade Populacional: População dividida pela área da cidade.
    //PIB per Capita: PIB total dividido pela população.

    //Densidade da primeira carta
    densidade_populacional = (unsigned int) populacao / area;
    pib_per_capita = (float) pib / populacao;
    
    //Densidade da segunda carta
    densidade_populacional2 = (unsigned int) populacao2 / area2;
    pib_per_capita2 = (float) pib2 / populacao2;

    //Desafio 3 - Cálculo do Superpoder - Primeira carta e segunda carta
    superpoder = (float) populacao + area + pib + pontos_turisticos + densidade_populacional + pib_per_capita;
    superpoder2 = (float) populacao2 + area2 + pib2 + pontos_turisticos2 + densidade_populacional2 + pib_per_capita2;

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    //Exibição das características da primeira carta
    printf("\nCódigo da primeira carta: %s\n", codigo_da_cidade);
    printf("Cidade: %s\n", nome);
    printf("População: %d\n", populacao);
    printf("Área %.2f km²\n", area);
    printf("PIB: %.2lf\n", pib);
    printf("Pontos Turisticos: %d\n", pontos_turisticos);

    //Novos printf do programa - nível aventureiro
    printf("A densidade populacional é: %u\n", densidade_populacional);
    printf("O PIB per Capita é: %.2f\n", pib_per_capita);

    //Adicionado superpoder da primeira carta
    printf("Super poder: %.2f\n", superpoder);

    //Exibição das características da segunda carta
    printf("\nCódigo da segunda carta: %s\n", codigo_da_cidade2);
    printf("Cidade: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área %.2f km²\n", area2);
    printf("PIB: %.2lf\n", pib2);
    printf("Pontos Turisticos: %d\n", pontos_turisticos2);
    printf("A densidade populacional é: %u\n", densidade_populacional2);
    printf("O PIB per Capita é: %.2f\n", pib_per_capita2);
    printf("Super poder: %.2f\n", superpoder2);

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.
    
    // Exibição dos Resultados:
    printf("\nResultados da comparação das cartas:\n");

    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);



    // Comparação e exibição dos resultados da população
    if (populacao > populacao2) {
        printf("População: A cidade %s tem maior população.\n", nome);
    } else {
        if (populacao2 > populacao){
            printf("População: A cidade %s tem maior população.\n", nome2);
        } else {
            printf("População: As duas cidades tem o mesmo número de população.\n");
        }
    }

    // Comparação e exibição dos resultados da área
    if (area > area2){
        printf("Área: A cidade %s tem a maior área.\n", nome);
    } else {
        if (area2 > area){
            printf("Área: A cidade %s tem a maior área.\n", nome2);
        } else {
            printf("Área: As duas cidades tem a mesma área.\n");
        }
    }

    // Comparação e exibição dos resultados da PIB
    if (pib > pib2) {
        printf("PIB: A cidade %s tem o maior PIB.\n", nome);
    } else {
        if (pib2 > pib){
            printf("PIB: A cidade %s tem o maior PIB.\n", nome2);
        } else {
            printf("PIB: As duas cidades tem o mesmo PIB.\n");
        }
    }
    
    // Comparação e exibição dos resultados da Pontos Turísticos
    if (pontos_turisticos > pontos_turisticos2) {
        printf("P. Turísticos: A cidade %s tem mais pontos turísticos.\n", nome);
    } else {
        if (pontos_turisticos2 > pontos_turisticos){
            printf("P. Turísticos: A cidade %s tem mais pontos turísticos.\n", nome2);
        } else {
            printf("P. Turísticos: As duas cidades tem a mesma quantidade de pontos turísticos.\n");
        }
    }

    // Comparação e exibição dos resultados da Densidade Populacional
    if (densidade_populacional > densidade_populacional2) {
        printf("Densidade Populacional: A cidade %s tem a maior densidade populacional.\n", nome);
    } else {
        if (densidade_populacional2 > densidade_populacional){
            printf("Densidade Populacional: A cidade %s tem mais pontos turísticos.\n", nome2);
        } else {
            printf("Densidade Populacional: As duas cidades tem a mesma quantidade de pontos turísticos.\n");
        }
    }

    // Comparação e exibição dos resultados da pib per capita
    if (pib_per_capita > pib_per_capita2) {
        printf("PIB per Capita: A cidade %s tem o maior PIB per Capita.\n", nome);
    } else {
        if (pib_per_capita2 > pib_per_capita){
            printf("PIB per Capita: A cidade %s tem o maior PIB per Capita.\n", nome2);
        } else {
            printf("PIB per Capita: As duas cidades tem o mesmo PIB per Capita.\n");
        }
    }

    // Comparação e exibição dos resultados do superpoder
    if (superpoder > superpoder2) {
        printf("Super poder: A cidade %s tem o maior super poder.\n", nome);
    } else {
        if (superpoder2 > superpoder){
            printf("Super poder: A cidade %s tem o maior super poder.\n", nome2);
        } else {
            printf("Super poder: As duas cidades tem o mesmo Super Poder.\n");
        }
    }

    return 0;
}
