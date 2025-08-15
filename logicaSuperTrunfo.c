#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio
    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    //=======================================================

    printf("Super Trunfo Paises"); //Cabeçalho do Jogo

    // Variaveis e tipos de dados

    char estado1[20], estado2[20]; //string
    char codigo1[10], codigo2[20]; //string
    char cidade1[15], cidade2[15]; //string
    unsigned long int populacao1, populacao2; 
    int pontot1, pontot2;
    float area1, area2, pib1, pib2;
    float densidade1, densidade2;
    float pibpercapita1, pibpercapita2;
    float inv_dens1, inv_dens2;
    float superpoder1, superpoder2;
   

//===================================================================
    //CADASTRO CARTA 01

    printf("\n\nCadastro Carta 01\n\n");

    printf("Digite o estado:");
    scanf("%s", estado1);

    printf("Digite o código da cidade:");
    scanf("%s", codigo1);

    printf("Digite a cidade:");
    scanf("%s", cidade1);

    printf("Digite a população da cidade:");
    scanf("%lu", &populacao1);

    printf("Digite a quantidade de Pontos Turísticos:");
    scanf("%d", &pontot1);

    printf("Digite a área da cidade:");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade:");
    scanf("%f", &pib1);

    densidade1 = populacao1 / area1; // Cálculo da densidade populacional
    pibpercapita1 = pib1 / populacao1; // Calculo do Pib Percapito
    inv_dens1 = 1/densidade1; // Cálculo de Inversão da densidade populacional
    superpoder1 = (populacao1 + pontot1 + area1 + pib1) + 1/densidade1;
    
    //Outra forma de calcular o SUPERPODER
    //superpoder1 = populacao2 + ponto2 + area2 + pib2 + inv_dens1;

    //DADOS DA CARTA 01

    printf("Dados da Carta 01\n\n");

    printf("O estado escolhido foi %s\n",estado1);
    printf("O Código da cidade é %s\n", codigo1);
    printf("A cidade escolhida foi %s\n", cidade1);
    printf("A Cidade %s possui %lu habitantes\n", cidade1, populacao1);
    printf("a cidade %s, possui %d pontos turisticos\n", cidade1, pontot1);
    printf("A Área de %s em km é %.2f\n", cidade1, area1);
    printf("O PIB de %s é %.2f\n", cidade1, pib1);
    printf("A Densidade Populacional é %.2f\n", densidade1);
    printf("O PIB Percapito é %.2f\n", pibpercapita1);
    printf("A inversão da Densidade Populacional é %.2f\n", inv_dens1);
    printf("O valor do Superpoder1 é %.2f\n\n", superpoder1);

//===================================================================
    //CADASTRO DA CARTA 02

    printf("Cadastro Carta 02\n\n");

    printf("Digite o Estado:");
    scanf("%s", estado2);

    printf("Digite o código:");
    scanf("%s", codigo2);

    printf("Digite a cidade:");
    scanf("%s", cidade2);

    printf("Digite a população:");
    scanf("%lu", &populacao2);

    printf("Digite a quantidade de Pontos Turíticos:");
    scanf("%d", &pontot2);

    printf("Digite a Área da cidade:");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade:");
    scanf("%f", &pib2);


    densidade2 = populacao2 / area2; // Cálculo da densidade populacional
    pibpercapita2 = pib2 / populacao2; // Calculo do Pib Percapito
    inv_dens2 = 1/densidade2; // Cálculo de Inversão da densidade populacional
    superpoder2 = (populacao2 + pontot2 + area2 + pib2) + 1/densidade2; //Soma para obter Super Poder

    //Outra forma de calcular o SUPERPODER
    //superpoder2 = populacao2 + ponto2 + area2 + pib2 + inv_dens2;

    //DADOS DA CARTA 02

    printf("Dados da Carta 02\n\n");

    printf("O estado escolhido foi %s\n",estado2);
    printf("O Código da cidade é %s\n", codigo2);
    printf("A cidade escolhida foi %s\n", cidade2);
    printf("A Cidade %s possui %lu habitantes\n", cidade2, populacao2);
    printf("a cidade %s, possui %d pontos turisticos\n", cidade2, pontot2);
    printf("A Área de %s em km é %.2f\n", cidade2, area2);
    printf("O PIB da cidade %s é %.2f\n", cidade2, pib2);
    printf("A Densidade Populacional é %.2f\n", densidade2);
    printf("O PIB Percapito é %.2f\n", pibpercapita2);
    printf("A inversão da Densidade Populacional é %.2f\n", inv_dens2);
    printf("O valor do Superpoder é %.2f\n\n", superpoder2);

    //Variaveis e Tipos de dados

    int cpopulacao = populacao1 > populacao2;
    int cpontos = pontot1 > pontot2;
    float carea = area1 > area2;
    float cpib = pib1 > pib2;
    float cdens_pop = densidade1 < densidade2;
    float cpibper = pibpercapita1 > pibpercapita2;
    float csuperpoder = superpoder1 > superpoder2;

    //Cabeçalho das comparações
    printf("COMPARAÇÃO DAS CARTAS\n\n");

    //Impressão dos Comparativos
    printf("População: (%d)\n", (int) cpopulacao);
    printf("Pontos Turísticos: (%d)\n", (int) cpontost);
    printf("PIB: (%d)\n", (int) cpib);
    printf("ÁREA: (%d)\n", (int) carea);
    printf("Densidade Populacional: (%d)\n", (int) cdens_pop);
    printf("PIB Percapita: (%d)\n", (int) cpibper);
    printf("Superpoder: (%d)\n\n", (int) csuperpoder);

    //===========================================================
    //Inicio de comparacao (condicoes: verdadeiro if ou falso else)

    if(populacao1 > populacao2) {
        printf("Populacao da carta 1 e maior que populacao da carta 2\n");
    }
    else {
        printf("Populacao da carta 2 e maior que a populacao da carta 1\n");
    }

    if(pontot1 > pontot2) {
        printf("A carta 1 possui mais pontos turisticos que a carta 2\n");
    }
    else {
        printf("A carta 2 possui mais pontos turisticos que a carta 1\n");
    }

    if(pib1 > pib2) {
        printf("O PIB da carta 1 e maior que o PIB da carta 2\n");
    }
    else {
        printf("O PIB da carta 2 e maior que o PIB da carta 1\n");
    }

    if (area1 > area2) {
        printf("A area da carta 1 e maior que a area da carta 2\n");
    }
    else {
        printf("A area da carta 2 e maior que a area da carta 1\n");
    }

    return 0;
}
