#include <stdio.h>

int main(){
    int numero1, numero2;

    //atribuição simples (=)
    numero1 = 100;
    printf("Número inicial: %d\n", numero1);

    //atribuição com soma (+=);
    printf("Digite um número para somar com o número inicial: \n");
    scanf("%d", &numero2);
    numero1 += numero2;
    printf("Resultado parcial: %d\n", numero1);

    //atribuição com subtração
    printf("Digite um número para subtrair com o resultado da soma anterior: \n");
    scanf("%d", &numero2);
    numero1 -= numero2;
    printf("Resultado parcial: %d\n", numero1);

    //atribuição com multiplicação
    printf("Digite um número para multiplicar com o resultado da subtração anterior: \n");
    scanf("%d", &numero2);
    numero1 *= numero2;
    printf("Resultado parcial: %d\n", numero1);

    //atribuição com divisão
    printf("Digite um número para dividir com o resultado da multiplicação anterior: \n");
    scanf("%d", &numero2);
    numero1 /= numero2;
    printf("Resultado final: %d\n", numero1);

    printf("Número inicial: 100 -- Número final: %d\n", numero1);

    //Entendimento básico da função, rodando da maneira esperada

    return 0;

}