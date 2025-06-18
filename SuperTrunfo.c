#include <stdio.h>

int main() {
 
    char estado1[3], estado2[3];
    char nomeCidade1[10], nomeCidade2[10];
    char codigoCarta1[5], codigoCarta2[5];
    int populacao1, populacao2;
    float pib1 = 0, pib2 = 0;
    int PontosTur1, PontosTur2;
    float area1 = 0, area2 = 0;
    
    // --- Coleta de dados para a Carta 1 ---
    printf("--- Insira os dados da Carta 1 ---\n");

    
    printf("Insira o codigo da Carta com dois digitos: \n");
    scanf("%2s", codigoCarta1);


    printf("Insira o estado com apenas uma letra (A a H): ");
    scanf("%1s", estado1); 

    
    printf("Insira o nome da Cidade com cinco letras: ");
    scanf("%5s", nomeCidade1);

        
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

    printf("Insira o codigo da Carta com dois digitos: \n");
    scanf("%2s", codigoCarta2);


    printf("Insira o estado com apenas uma letra (A a H): ");
    scanf("%1s", estado2); 

    
    printf("Insira o nome da Cidade com cinco letras: ");
    scanf("%5s", nomeCidade2);

        
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
    printf("Estado: %1s\n", estado1);
    printf("Codigo: %1s%2s\n", estado1, codigoCarta1);
    printf("Nome da Cidade: %5s\n", nomeCidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1); 
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", PontosTur1);

    printf("\n"); 

    // --- Exibição dos dados da Carta 2 ---
    printf("--- Informacoes da Carta 2 ---\n");
    printf("Estado: %1s\n", estado2);
    printf("Codigo: %1s%2s\n", estado2, codigoCarta2);
    printf("Nome da Cidade: %5s\n", nomeCidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2); 
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", PontosTur2);



    // --- Lógica de Comparação
    printf("\n--- Comparacao por Populacao ---\n");

    // Comparar Populacao
    if (populacao1 > populacao2) {
        printf("%5s ## Venceu em populacao. ##\n", nomeCidade1);
    }     else {
          printf("%5s ## Venceu em populacao. ##\n ", nomeCidade2);
    }      
    
    if (populacao1 == populacao2) {
        printf("Populacoes de %5s e %5s sao iguais.\n", nomeCidade1, nomeCidade2);
    }

    printf("\n--- Comparacao por PIB ---\n");
    if (pib1 > pib2) {
        printf("%s ## Venceu em PIB. ##\n", nomeCidade1);
    }     else {
          printf("%s ## Venceu em PIB. ##\n", nomeCidade2);
    }         
    
    if (pib1 == pib2) {
          printf("PIBs de %s e %s sao iguais.\n", nomeCidade1, nomeCidade2);
    }

    printf("\n--- Comparacao por Area ---\n");
    if (area1 > area2) {
        printf("%s ## Venceu em area. ##\n", nomeCidade1);
    }     else {
          printf("%s ## Venceu em area. ##\n", nomeCidade2);
    }     
    
    if (area1 == area2) {
          printf("Areas de %s e %s sao iguais.\n", nomeCidade1, nomeCidade2);
    }


    // Exibindo assinatura
    printf("\n");
    printf("\n");
    printf("#=========================#\n");
    printf("#   By Cleverson Lima!!!  #\n");
    printf("#=========================#\n");
    printf("\n");
    printf("\n");

    return 0;
}
