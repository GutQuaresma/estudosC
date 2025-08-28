#include <stdio.h>

//Novas alterações nível mestre:
//Calcular superpoder das cartas
//Fazer comparação das cartas
//Exibir resultado das comparações

int main() {
    unsigned long int populacao, populacao2; //alterado para acomodar números maiores
    int pontost, pontost2;
    float area, area2, pib, pib2;
    float denpo, denpo2, pibper, pibper2, denpoIn, denpoIn2; 
    char estado, estado2;
    char codigo[4], codigo2[4];
    char nome[30], nome2[30];
    float superPoder1, superPoder2; //nova variavel 
    
    //Cadastro da carta número 1
    printf("Cadastro de carta!\n\n");

    printf("Cadastre o Estado(A-H): ");
    scanf(" %c", &estado);

    printf("Cadastre o código da carta(Ex: A01): ");
    scanf("%s", codigo);

    printf("Cadastre o nome da cidade: ");
    scanf(" %30[^\n]s", nome);

    printf("Cadastre a população da cidade: ");
    scanf("%lu", &populacao);

    printf("Cadastre a área da cidade: ");
    scanf("%f", &area);

    printf("Cadastre o PIB da cidade: ");
    scanf("%f", &pib);

    printf("Cadastre a quantidade de pontos turísticos da cidade: ");
    scanf("%d", &pontost);

    denpo = (float)populacao / area;
    pibper = (float)pib / populacao;

    printf("Carta cadastrada!\n\n");

    //Cadastro da carta número 2
    printf("Cadastre uma nova carta!\n");

    printf("Cadastre o Estado(A-H): ");
    scanf(" %c", &estado2);

    printf("Cadastre o código da carta(Ex: A01): ");
    scanf("%s", codigo2);

    printf("Cadastre o nome da cidade: ");
    scanf(" %30[^\n]s", nome2);

    printf("Cadastre a população da cidade: ");
    scanf("%lu", &populacao2);

    printf("Cadastre a área da cidade: ");
    scanf("%f", &area2);

    printf("Cadastre o PIB da cidade: ");
    scanf("%f", &pib2);

    printf("Cadastre a quantidade de pontos turísticos da cidade: ");
    scanf("%d", &pontost2);

    denpo2 = (float)populacao2 / area2;
    pibper2 = (float)pib2 / populacao2;

    printf("Carta cadastrada!\n\n");

    //cálculo de superpoder carta 1
    denpoIn = (float)area / populacao;
    superPoder1 = (float)populacao + area + pib + pontost + pibper + denpoIn;

    //cálculo de superpoder carta 2
    denpoIn2 = (float)area2 / populacao2;
    superPoder2 = (float)populacao2 + area2 + pib2 + pontost2 + pibper2 + denpoIn2;
    
    //Exibição da carta número 1
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", nome);
    printf("População: %lu\n", populacao);
    printf("Área: %.2fkm²\n", area);
    printf("PIB: %.3f bilhões de reais\n", pib);
    printf("Pontos Turísticos: %d\n", pontost);
    printf("Densidade Populacional: %f hab/km²\n", denpo); 
    printf("PIB per Capita: %.2f reais\n", pibper); 
    printf("SuperPoder: %.2f\n\n", superPoder1); //nova informação exibida

    //Exibição da carta número 2
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2fkm²\n", area2);
    printf("PIB: %.3f bilhões de reais\n", pib2);
    printf("Pontos Turísticos: %d\n", pontost2);
    printf("Densidade Populacional: %f hab/km²\n", denpo2); 
    printf("PIB per Capita: %.2f reais\n", pibper2);
    printf("SuperPoder: %.2f\n\n", superPoder2); //nova informação exibida

    //comparação das cartas
    printf("Comparação das cartas: \n");
    printf("População: Carta 1 venceu (%d)\n", populacao > populacao2);
    printf("Área: Carta 1 venceu (%d)\n", area > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib > pib2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontost > pontost2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", denpo < denpo2);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibper > pibper2);
    printf("Super Poder: Carta 1 venceu (%d)\n\n", superPoder1 > superPoder2);

 
    return 0;

}