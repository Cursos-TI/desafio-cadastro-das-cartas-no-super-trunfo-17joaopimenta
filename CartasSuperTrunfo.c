#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    //Carta 1
    //Variavel que armazena as letras dos oito primeiros estados (A a H)
    char estado1;
    /*
        Codigo Carta: Armazenar o codigo da carta (inicial do nome do estado mais um numero de 01 a 04)
        Nome Cidade: Armazenar o nome atual da cidade
    */
    char codigoCarta1[50], nomeCidade1[50];
    /*
        Populacao: Numero total da populacao
        Quantidade Pontos Turisticos: Numero de pontos turisticos
    */
    int populacao1, quantidadePontosTuristicos1;
    /*
        Area: area da cidade
        PIB: PIB da cidade
    */
    float area1, pib1;
    //Densidade demografica
    float densidade1;
    //Pib per capita do local
    float pibPerCapita1;
    
    //Calculo do super poder (soma de todas as variaveis ja setadas)
    float supePoder1;
    
    //Carta 2
    //Variavel que armazena as letras dos oito primeiros estados (A a H)
    char estado2;
    /*
    Codigo Carta: Armazenar o codigo da carta (inicial do nome do estado mais um numero de 01 a 04)
    Nome Cidade: Armazenar o nome atual da cidade
    */
    char codigoCarta2[50], nomeCidade2[50];
    /*
    Populacao: Numero total da populacao
    Quantidade Pontos Turisticos: Numero de pontos turisticos
    */
    int populacao2, quantidadePontosTuristicos2;
    /*
    Area: area da cidade
    PIB: PIB da cidade
    */
    float area2, pib2;
 
    //Densidade demografica
    float densidade2;
    //Pib per capita do local
    float pibPerCapita2;
    
    //Calculo do super poder (soma de todas as variaveis ja setadas)
    float supePoder2;
 
    //Vitorias das cartas (Strings que serao usadas em uma estrutura condicional que armazenarão as cartas vencedoras)
    char vitoriaPopulacao[30];
    char vitoriaPontosTuristicos[30];
    char vitoriaArea[30];
    char vitoriaPib[30];
    char vitoriaDensidade[30];
    char vitoriaPibPerCapta[30];
    char vitoriaSuperPoder[30];

    //Carta1 (Documentacoes que o usuario ira colocar)
    printf("Carta1\n");
    
    printf("Estado: ");
    scanf(" %c", &estado1);
    
    printf("Codigo: ");
    scanf("%s", &codigoCarta1);
    
    printf("Nome da cidade: ");
    scanf("%s", &nomeCidade1);
    
    printf("Populacao: ");
    scanf("%i", &populacao1);

    printf("Quantidade de pontos turisticos: ");
    scanf("%i", &quantidadePontosTuristicos1);

    printf("Area: ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    densidade1 = populacao1/area1;
    pibPerCapita1 = (pib1*1e9)/(float)populacao1;
    //Calculo do Super Poder (soma de todos os valores numéricos que foram colocados como informacao nas cartas)
    //A densidade foi elevada a -1 visto que ela é inversamente proporcional
    supePoder1 = populacao1 + quantidadePontosTuristicos1 + area1 + pib1 + 1/densidade1 + pibPerCapita1;
    
    //Carta2 (Documentacoes que o usuario ira colocar)
    printf("\nCarta2\n");
    
    printf("Estado: ");
    scanf(" %c", &estado2);
    
    printf("Codigo: ");
    scanf("%s", &codigoCarta2);
    
    printf("Nome da cidade: ");
    scanf("%s", &nomeCidade2);
    
    printf("Populacao: ");
    scanf("%i", &populacao2);
    
    printf("Quantidade de pontos turisticos: ");
    scanf("%i", &quantidadePontosTuristicos2);
    
    printf("Area: ");
    scanf("%f", &area2);
    
    printf("PIB: ");
    scanf("%f", &pib2);
    
    densidade2 = populacao2/area2;
    pibPerCapita2 = (pib2*1e9)/populacao2;
    supePoder2 = populacao2 + quantidadePontosTuristicos2 + area2 + pib2 + 1/densidade2 + pibPerCapita2;
    
    //Variaveis para exibir o resultado da disputa
    
    if (populacao1 > populacao2) strcpy(vitoriaPopulacao,"Carta1");
    else strcpy(vitoriaPopulacao,"Carta2");   
    
    if (area1 > area2) strcpy(vitoriaArea,"Carta1");
    else strcpy(vitoriaArea,"Carta2");

    if (pib1 > pib2) strcpy(vitoriaPib,"Carta1");
    else strcpy(vitoriaPib,"Carta2");   
    
    if (quantidadePontosTuristicos1 > quantidadePontosTuristicos2) strcpy(vitoriaPontosTuristicos,"Carta1");
    else strcpy(vitoriaPontosTuristicos,"Carta2");

    if (densidade1 < densidade2) strcpy(vitoriaDensidade,"Carta1");
    else strcpy(vitoriaDensidade,"Carta2");   
    
    if (pibPerCapita1 > pibPerCapita2) strcpy(vitoriaPibPerCapta,"Carta1");
    else strcpy(vitoriaPibPerCapta,"Carta2");

    if (supePoder1 > supePoder2) strcpy(vitoriaSuperPoder,"Carta1");
    else strcpy(vitoriaSuperPoder,"Carta2");

    //Escrever a situação de vitória das cartas
    printf("\nComparação entre cartas\n");
    printf("Populacao: %s venceu (%d)\n", vitoriaPopulacao, populacao1 > populacao2);
    printf("Area: %s venceu (%d)\n", vitoriaArea, area1 > area2);
    printf("Pib: %s venceu (%d)\n", vitoriaPib, pib1 > pib2);
    printf("Pontos Turisticos: %s venceu (%d)\n", vitoriaPontosTuristicos, quantidadePontosTuristicos1 > quantidadePontosTuristicos2);
    printf("Densidade: %s venceu (%d)\n", vitoriaDensidade, densidade1 < densidade2);
    printf("PIB per Capita: %s venceu (%d)\n", vitoriaPibPerCapta, pibPerCapita1 > pibPerCapita2);
    printf("Super Poder: %s venceu (%d)\n", vitoriaSuperPoder, supePoder1 > supePoder2);
    return 0;
}
