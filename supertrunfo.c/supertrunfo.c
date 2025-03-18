#include <stdio.h>

int main(){

    char estado2, estado1;
     char codigo1[20], codigo2[20];
      char cidade1[20], cidade2[20];
       unsigned long int populacao1, populacao2;
        int turisticos1, turisticos2;
        float area1, area2;
       float pib1, pib2;
      float densidade1, densidade2;
     float pibcapta1, pibcapta2;
    float superpoder1, superpoder2;


printf("*.*.*.*.*.*.*.*.*.*.*.*\n     SUPER TRUNFO\n*.*.*.*.*.*.*.*.*.*.*.*\n");

    printf ("Carta 1\nDigite a primeira letra do seu estado:");
      scanf("%c", &estado2);
  
    printf("Carta 1\nDigite o codigo da cidade. A primeira letra do estado seguida de um número de 01 a 04:");
      scanf("%s", &codigo1);
    
    printf("Carta 1\nDigite o nome da sua cidade:");
      scanf("%s", &cidade1);

    printf("Carta 1\nDigite o número de habitantes da cidade:");
      scanf("%u", &populacao1);

    printf("Carta 1\nDigite a área da cidade em quilômetros quadrados:");
      scanf("%f", &area1);

    printf("Carta 1\nDIgite o P.I.B da sua cidade:");
      scanf("%f", &pib1);

    printf("Carta 1\nDigite a quantidade de pontos turísticos na cidade:");
      scanf("%d", &turisticos1);


    
    printf ("Carta 2\nDigite a primeira letra do seu estado:");
    scanf("%s", &estado1);
  
    printf("Carta 2\nDigite o codigo da cidade. A primeira letra do estado seguida de um número de 01 a 04:");
      scanf("%s", &codigo2);
    
    printf("Carta 2\nDigite o nome da sua cidade:");
      scanf("%s", &cidade2);

    printf("Carta 2\nDigite o número de habitantes da cidade:");
      scanf("%u", &populacao2);

    printf("Carta 2\nDigite a área da cidade em quilômetros quadrados:");
      scanf("%f", &area2);

    printf("Carta 2\nDIgite o P.I.B da sua cidade:");
      scanf("%f", &pib2);

    printf("Carta 2\nDigite a quantidade de pontos turísticos na cidade:");
      scanf("%d", &turisticos2);

    densidade1 = populacao1 / area1;
     densidade2 = populacao2 / area2;
    pibcapta1 = pib1 / populacao1;
     pibcapta2 = pib2 / populacao2;
    superpoder1 = populacao1 + area1 + pib1 + turisticos1 + pibcapta1 - densidade1;
     superpoder2 = populacao2 + area2 + pib2 + turisticos2 + pibcapta2 - densidade2;


//Resultado da carta 1

    printf("( Carta 1 )\nEstado : %c\n", estado1);
     printf("Codigo :%s\n", codigo1);
    printf("Nome da Cidade : %s\n", cidade1);
     printf("População:%u\n", populacao1);
    printf("Área:%.2f\n", area1);
     printf("P.I.B :%.2f\n", pib1);
    printf("Numeros de pontos turisticos :%d\n", turisticos1);
     printf("Densidade Populacional:%.2fhab/km²\n", densidade1);
    printf("PIB per Capita:%.2freais\n", pibcapta1);

//Resultados da carta 2

    printf("( Carta 2 )\nEstado : %c\n", estado2);
     printf("Codigo : %s\n", codigo2);
    printf("Nome da Cidade : %s\n", cidade2);
     printf("População: %u\n", populacao2);
    printf("Área: %.2f\n", area2);
     printf("P.I.B : %.2f\n", pib2);
    printf("Numeros de pontos turisticos : %d\n", turisticos2);
     printf("Densidade Populacional: %.2fhab/km²\n", densidade2);
    printf("PIB per Capita:R$ %.2f\n", pibcapta2);


    printf("▂▃▄▅▆▇█▓▒░BATALHA DAS CARTAS░▒▓█▇▆▅▄▃▂\n");
     
    if(populacao1 > populacao2){
      printf("Polulação : A cidade de %s foi a vencedora!\n", cidade1);
    } else {
      printf("Polulação : A cidade de %s foi a vencedora!\n", cidade2);
    }

    if(area1 > area2) {
      printf("Área : A cidade de %s foi a vencedora!\n", cidade1);
    } else {
      printf("Área : A cidade de %s foi a vencedora!\n", cidade2);
    }

    if (pib1 > pib2){
      printf("P.I.B : A cidade de %s foi a vencedora!\n", cidade1);
    } else {
      printf("P.I.B : A cidade de %s foi a vencedora!\n", cidade2);
    }

    if(turisticos1 > turisticos2){
      printf("Pontos Turísticos : A cidade de %s foi a vencedora!\n", cidade1);
    } else {
      printf("Pontos Turísticos : A cidade de %s foi a vencedora!\n", cidade2);
    }

    if(densidade1 < densidade2){
      printf("Densidade Populacional : A cidade de %s foi a vencedora!\n", cidade1);
    } else{
      printf("Densidade Populacional : A cidade de %s foi a vencedora!\n", cidade2);
    }

    if(pibcapta1 > pibcapta2){
      printf("P.I.B per capita : A cidade de %s foi a vencedora!\n", cidade1);
    } else {
      printf("P.I.B per capita : A cidade de %s foi a vencedora!\n", cidade2);
    }

    if(superpoder1 > superpoder2){
      printf("Super Poder : A cidade de %s foi a vencedora!\n", cidade1);
    }else {
      printf("Super Poder : A cidade de %s foi a vencedora!\n", cidade2);
    }
  


    return 0;

}