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

    //Variável para a criação do menu de comparação das cartas
    int menuComparacao, comparacaoUm, comparacaoDois, resultadoDoisAtributos, menuEscolha;

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
    printf("Superpoder: %.2f\n", superpoder);

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

    // Menu de Comparação das Cartas
    printf("\nQual atributo você deseja comparar?\n");
    printf("1. Comparar um atributo das cartas.\n");
    printf("2. Comparar dois atributos das cartas.\n");
    printf("3. Comparar todos atributos das cartas.\n");
    printf("\nDigite a opção da sua escolha: \n");
    scanf("%d", &menuEscolha);

    switch (menuEscolha)
    {
    case 1:
        printf("\nQual atributo você deseja comparar?\n\n");
        printf("1. População.\n");
        printf("2. Área.\n");
        printf("3. PIB.\n");
        printf("4. Pontos turísticos.\n");
        printf("5. Densidade populacional.\n");
        printf("6. PIB per capita.\n");
        printf("7. Superpoder.\n");
        printf("8. Sair do Jogo.\n");
        printf("\nEntre com um número de 1 a 8:\n");
        scanf("%d", &menuComparacao);

        switch(menuComparacao) {
        // Case 1 - Comparação e exibição dos resultados da população
        case 1:
            printf("\n### RESULTADO ###\n\n");

               if (populacao > populacao2) {
                    printf("Atributo escolhido --= População =--\nA cidade %s venceu, pois tem maior população.\n\n", nome);
                } else if (populacao2 > populacao){
                    printf("Atributo escolhido --= População =--\nA cidade %s venceu, pois tem maior população.\n\n", nome2);
                } else {
                    printf("Atributo escolhido --= População =--\nEmpatou!!! As duas cidades tem o mesmo número de população.\n\n");
            }
        break;
    
        //Case 2 - Comparação e exibição dos resultados da área
        case 2:
            printf("\n### RESULTADO ###\n\n");

            if (area > area2){
                printf("Atributo escolhido - Área: A cidade %s venceu, pois tem a maior área.\n", nome);
            } else if (area2 > area){
                printf("Atributo escolhido - Área: A cidade %s venceu, pois tem a maior área.\n", nome2);
            } else {
                printf("Atributo escolhido - Área: Empatou!!! As duas cidades tem a mesma área.\n");
            }
        break;

        // Case 3 - Comparação e exibição dos resultados da PIB
        case 3:
            printf("\n### RESULTADO ###\n\n");

            if (pib > pib2) {
                printf("Atributo escolhido - PIB: A cidade %s venceu, pois tem o maior PIB.\n", nome);
            } else if (pib2 > pib){
                printf("Atributo escolhido - PIB: A cidade %s venceu, pois tem o maior PIB.\n", nome2);
            } else {
                printf("Atributo escolhido - PIB: Empatou!!! As duas cidades tem o mesmo PIB.\n");
            }
        break;

        // Case 4 - Comparação e exibição dos resultados da Pontos Turísticos
        case 4:
            printf("\n### RESULTADO ###\n\n");

            if (pontos_turisticos > pontos_turisticos2) {
                printf("Atributo escolhido - P. Turísticos: A cidade %s venceu, pois tem mais pontos turísticos.\n", nome);
            } else if (pontos_turisticos2 > pontos_turisticos){
                printf("Atributo escolhido - P. Turísticos: A cidade %s venceu, pois tem mais pontos turísticos.\n", nome2);
            } else {
                printf("Atributo escolhido - P. Turísticos: Empatou!!! As duas cidades tem a mesma quantidade de pontos turísticos.\n");
            }
        break;

        // Case 5 - Comparação e exibição dos resultados da Densidade Populacional
        case 5:
            printf("\n### RESULTADO ###\n\n");

            if (densidade_populacional < densidade_populacional2) {
                printf("Atributo escolhido - Densidade Populacional: A cidade %s venceu, pois tem a menor densidade populacional.\n", nome);
           } else if (densidade_populacional2 < densidade_populacional){
                printf("Atributo escolhido - Densidade Populacional: A cidade %s venceu, pois tem menor densidade populacional.\n", nome2);
            } else {
                printf("Atributo escolhido - Densidade Populacional: Empatou!!! As duas cidades tem a mesma quantidade de densidade populacional.\n");
            }
        break;

        // Case 6 - Comparação e exibição dos resultados da pib per capita
        case 6:
            printf("\n### RESULTADO ###\n\n");

            if (pib_per_capita > pib_per_capita2) {
                printf("Atributo escolhido - PIB per Capita: A cidade %s venceu, pois tem o maior PIB per Capita.\n", nome);
            } else if (pib_per_capita2 > pib_per_capita){
                printf("Atributo escolhido - PIB per Capita: A cidade %s venceu, pois tem o maior PIB per Capita.\n", nome2);
            } else {
                printf("Atributo escolhido - PIB per Capita: Empatou!!! As duas cidades tem o mesmo PIB per Capita.\n");
            }
        break;

        // Case 7 - Comparação e exibição dos resultados do superpoder   
        case 7:
        printf("\n### RESULTADO ###\n\n");

            if (superpoder > superpoder2) {
                printf("Atributo escolhido - Superpoder: A cidade %s venceu, pois tem o maior superpoder.\n", nome);
            } else if (superpoder2 > superpoder){
                printf("Atributo escolhido - Superpoder: A cidade %s venceu, pois tem o maior superpoder.\n", nome2);
            } else {
                printf("Atributo escolhido - Superpoder: Empatou!!! As duas cidades tem o mesmo SuperPoder.\n");
            }
        break;

        // Case 8 - Sair do jogo
        case 8:
        printf("\n### Você saiu do jogo ###\n\n");
        break;

        default:
            printf("\n### Que pena, você entrou com dados inválidos. Jogue novamente...###\n\n");
            break;
        }

        break;
    
    case 2:
    //Comparação de dois atributos (Atualização do jogo) 
        printf("\nSelecione dois atributos para iniciar a comparação das cartas: \n");
        printf("1. População.\n");
        printf("2. Área.\n");
        printf("3. PIB.\n");
        printf("4. Pontos turísticos.\n");
        printf("5. Densidade populacional.\n");
        printf("6. PIB per capita.\n");
        printf("7. Superpoder.\n");

        printf("\nInsira o primeiro atributo da comparação - número de 1 a 7: \n");
        scanf("%d", &comparacaoUm);

        printf("Insira o segundo atributo de comparação (Obs: Não repita o mesmo atributo da primeira carta): \n");
        scanf("%d", &comparacaoDois);

        //Condição que evita a comparação de dois atributos iguais
        if(comparacaoUm == comparacaoDois){
            printf("\nInfelizmente você entrou com dados inválidos. Jogue o jogo novamente =(\n\n");
        } else {

        //Entradas da comparação dos atributos da primeira carta:
        switch (comparacaoUm)
        {
        //Carta 1 - Atributo População:
        case 1:   
            if (resultadoDoisAtributos = populacao > populacao2 ? printf("A cidade %s venceu, pois tem maior população.\n", nome) :  printf("A cidade %s venceu, pois tem maior população.\n", nome2)){
                } else {
                    printf("Empatou!!!As duas cartas tem o mesma população.!\n");
            }
            break;

        //Carta 1 - Atributo Área:
        case 2: 
            if (resultadoDoisAtributos = area > area2 ? printf("A cidade %s venceu, pois tem maior área.\n", nome) :  printf("A cidade %s venceu, pois tem maior área.\n", nome2)){
                } else {
                    printf("Empatou!!!As duas cartas tem o mesma área.!\n");
            }
            break;

        //Carta 1 - Atributo PIB:
        case 3: 
            if (resultadoDoisAtributos = pib > pib2 ? printf("A cidade %s venceu, pois tem o maior PIB.\n", nome) :  printf("A cidade %s venceu, pois tem o maior PIB.\n", nome2)){
                } else {
                    printf("Empatou!!!As duas cartas tem o mesmo PIB.!\n");
            }
            break;

        //Carta 1 - Atributo Pontos turísticos:
        case 4: 
            if (resultadoDoisAtributos = pontos_turisticos > pontos_turisticos2 ? printf("A cidade %s venceu, pois tem mais pontos turísticos.\n", nome) :  printf("A cidade %s venceu, pois tem mais pontos turísticos.\n", nome2)){
                } else {
                    printf("Empatou!!!As duas cartas tem mais pontos turísticos.!\n");
            }
            break;

        //Carta 1 - Atributo Densidade Populacional:
        case 5: 
            if (resultadoDoisAtributos = densidade_populacional < densidade_populacional2 ? printf("A cidade %s venceu, pois tem menor densidade populacional.\n", nome) :  printf("A cidade %s venceu, pois tem menor densidade populacional.\n", nome2)){
                } else {
                    printf("Empatou!!!As duas cartas tem a mesma quantidade de densidade populacional.!\n");
            }
            break;

        //Carta 1 - Atributo Pib per capita:
        case 6: 
            if (resultadoDoisAtributos = pib_per_capita > pib_per_capita2 ? printf("A cidade %s venceu, pois tem maior pib per capita.\n", nome) :  printf("A cidade %s venceu, pois tem maior pib per capita.\n", nome2)){
                } else {
                    printf("Empatou!!!As duas cartas tem o mesmo pib per capita.!\n");
            }
            break;

        //Carta 1 - Atributo Superpoder:
        case 7: 
            if (resultadoDoisAtributos = superpoder > superpoder2? printf("A cidade %s venceu, pois tem maior superpoder.\n", nome) :  printf("A cidade %s venceu, pois tem maior superpoder.\n", nome2)){
                } else {
                    printf("Empatou!!!As duas cartas tem o mesmo nível de superpoder.!\n");
            }
            break;

        default:
            printf("Entradas inválidas.\n");
            break;
        }

        //Entradas da comparação da segunda carta:
        switch (comparacaoDois)
        {
        //Carta 2 - Atributo População:
        case 1:   
            if (resultadoDoisAtributos = populacao > populacao2 ? printf("A cidade %s venceu, pois tem maior população.\n", nome) :  printf("A cidade %s venceu, pois tem maior população.\n", nome2)){
                } else {
                    printf("Empatou!!!As duas cartas tem o mesma população.!\n");
            }
            break;

        //Carta 2 - Atributo Área:
        case 2: 
            if (resultadoDoisAtributos = area > area2 ? printf("A cidade %s venceu, pois tem maior área.\n", nome) :  printf("A cidade %s venceu, pois tem maior área.\n", nome2)){
                } else {
                    printf("Empatou!!!As duas cartas tem o mesma área.!\n");
            }
            break;

        //Carta 2 - Atributo PIB:
        case 3: 
            if (resultadoDoisAtributos = pib > pib2 ? printf("A cidade %s venceu, pois tem o maior PIB.\n", nome) :  printf("A cidade %s venceu, pois tem o maior PIB.\n", nome2)){
                } else {
                    printf("Empatou!!!As duas cartas tem o mesmo PIB.!\n");
            }
            break;

        //Carta 2 - Atributo Pontos turísticos:
        case 4: 
            if (resultadoDoisAtributos = pontos_turisticos > pontos_turisticos2 ? printf("A cidade %s venceu, pois tem mais pontos turísticos.\n", nome) :  printf("A cidade %s venceu, pois tem mais pontos turísticos.\n", nome2)){
                } else {
                    printf("Empatou!!!As duas cartas tem mais pontos turísticos.!\n");
            }
            break;

        //Carta 2 - Atributo Densidade Populacional:
        case 5: 
            if (resultadoDoisAtributos = densidade_populacional > densidade_populacional2 ? printf("A cidade %s venceu, pois tem menor densidade populacional.\n", nome) :  printf("A cidade %s venceu, pois tem menor densidade populacional.\n", nome2)){
                } else {
                    printf("Empatou!!!As duas cartas tem a mesma quantidade de densidade populacional.!\n");
            }
            break;

        //Carta 2 - Atributo Pib per capita:
        case 6: 
            if (resultadoDoisAtributos = pib_per_capita > pib_per_capita2 ? printf("A cidade %s venceu, pois tem maior pib per capita.\n", nome) :  printf("A cidade %s venceu, pois tem maior pib per capita.\n", nome2)){
                } else {
                    printf("Empatou!!!As duas cartas tem o mesmo pib per capita.!\n");
            }
            break;

        //Carta 2 - Atributo Superpoder:
        case 7: 
            if (resultadoDoisAtributos = superpoder > superpoder2? printf("A cidade %s venceu, pois tem maior superpoder.\n", nome) :  printf("A cidade %s venceu, pois tem maior superpoder.\n", nome2)){
                } else {
                    printf("Empatou!!!As duas cartas tem o mesmo nível de superpoder.!\n");
            }
            break;

        default:
            printf("Entradas inválidas.\n");
            break;
        }

        }

        //case 3 - Comparar todos os atributos das cartas
        break;

    //Entrada incorreta do menu comparação de cartas - Opções válidas 1,2 e 3. Demais números são inválidos.
    default:
        printf("\n### Que pena, você entrou com dados inválidos. Jogue novamente...###\n\n");
        break;
    }

    return 0;
}