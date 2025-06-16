#include <stdio.h>

int main() {


    char estado1[10], estado2[10];
    char nomeCidade1[10], nomeCidade2[10];
    char codigoCarta1[4], codigoCarta2[4];
    int populacao1, populacao2;
    float pib1 = 0, pib2 = 0;
    int PontosTur1, PontosTur2;
    float area1 = 0, area2 = 0;
    
    // --- Coleta de dados para a Carta 1 ---
    printf("--- Insira os dados da Carta 1 ---\n");

    
    printf("Insira o codigo da Carta: \n");
    scanf("%3s", codigoCarta1);


    printf("Insira o estado (A a H): ");
    scanf("%s", estado1); 

    
    printf("Insira o nome da Cidade: ");
    scanf("%s", nomeCidade1);

        
    printf("Qual a populacao: ");
    scanf("%d", &populacao1);
 
        
    printf("Qual a area (em km2): ");
    scanf("%f", &area1);

        
    printf("Qual o PIB (em bilhoes de reais): ");
    scanf("%f", &pib1);

        
    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &PontosTur1);

        
    printf("\n"); 

    // --- Coleta de dados para a Carta 2 ---
    printf("--- Insira os dados da Carta 2 ---\n");

    printf("Insira o codigo da Carta: \n");
    scanf("%3s", codigoCarta2);


    printf("Insira o estado (A a H): ");
    scanf("%s", estado2); 

    
    printf("Insira o nome da Cidade: ");
    scanf("%s", nomeCidade2);

        
    printf("Qual a populacao: ");
    scanf("%d", &populacao2);
 
        
    printf("Qual a area (em km2): ");
    scanf("%f", &area2);

        
    printf("Qual o PIB (em bilhoes de reais): ");
    scanf("%f", &pib2);

        
    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &PontosTur2);

        
    printf("\n"); 

    // --- Exibição dos dados da Carta 1 ---
    printf("--- Informacoes da Carta 1 ---\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s%s\n", estado1, codigoCarta1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1); 
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", PontosTur1);

    printf("\n"); 

    // --- Exibição dos dados da Carta 2 ---
    printf("--- Informacoes da Carta 2 ---\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s%s\n", estado2, codigoCarta2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2); 
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", PontosTur2);


    // Exibindo assinatura
    
    printf("\n");
    printf("\n");
    printf("#=======================#\n");
    printf("#  By Cleverson Lima!!! #\n");
    printf("#=======================#\n");
    printf("\n");
    printf("\n");

return 0;
}
