#include <stdio.h>

int main() {
    int populacao, populacao2, pontost, pontost2;
    float area, area2, pib, pib2;
    float denpo, denpo2, pibper, pibper2; //novas variáveis
    char estado, estado2;
    char codigo[4], codigo2[4];
    char nome[30], nome2[30];
    
    //Cadastro da carta número 1
    printf("Cadastro de carta!\n\n");

    printf("Cadastre o Estado(A-H): ");
    scanf(" %c", &estado);

    printf("Cadastre o código da carta(Ex: A01): ");
    scanf("%s", codigo);

    printf("Cadastre o nome da cidade: ");
    scanf(" %30[^\n]s", nome);

    printf("Cadastre a população da cidade: ");
    scanf("%d", &populacao);

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
    scanf("%d", &populacao2);

    printf("Cadastre a área da cidade: ");
    scanf("%f", &area2);

    printf("Cadastre o PIB da cidade: ");
    scanf("%f", &pib2);

    printf("Cadastre a quantidade de pontos turísticos da cidade: ");
    scanf("%d", &pontost2);

    denpo2 = (float)populacao2 / area2;
    pibper2 = (float)pib2 / populacao2;

    printf("Carta cadastrada!\n\n");
    
    //Exibição da carta número 1
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", nome);
    printf("População: %d\n", populacao);
    printf("Área: %.2fkm²\n", area);
    printf("PIB: %.3f bilhões de reais\n", pib);
    printf("Pontos Turísticos: %d\n", pontost);
    printf("Densidade Populacional: %f hab/km²\n", denpo); //nova informação exibida
    printf("PIB per Capita: %.2f reais\n\n", pibper); //nova informação exibida

    //Exibição da carta número 1
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2fkm²\n", area2);
    printf("PIB: %.3f bilhões de reais\n", pib2);
    printf("Pontos Turísticos: %d\n", pontost2);
    printf("Densidade Populacional: %f hab/km²\n", denpo2); //nova informação exibida
    printf("PIB per Capita: %.2f reais\n\n", pibper2); //nova informação exibida
 
    return 0;

}