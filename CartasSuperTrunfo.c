#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
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

    //Escrever os valores de cada carta
    printf("\nCarta1\nEstado: %c\nCodigo: %s\nNome da Cidade: %s\nPopulacao: %i\nQuantidade de pontos turisticos: %i\nArea: %.2fkm²\nPIB: %.2f bilhoes de reais\n",estado1,codigoCarta1,nomeCidade1,populacao1,quantidadePontosTuristicos1,area1,pib1);
    printf("\nCarta2\nEstado: %c\nCodigo: %s\nNome da Cidade: %s\nPopulacao: %i\nQuantidade de pontos turisticos: %i\nArea: %.2fkm²\nPIB: %.2f bilhoes de reais",estado2,codigoCarta2,nomeCidade2,populacao2,quantidadePontosTuristicos2,area2,pib2);

    return 0;
}
