#include <stdio.h>

int main(){
    int numero1, numero2;
    int soma, sub, mult, div;

    //Protótipo de calculadora
    printf("--Calculadora--\n");
    printf("Seja bem-vindo! Siga as instruções para ter seus resultados\n");

    //soma
    printf("Digite os números que queira soma!\n");
    printf("Número: \n");
    scanf("%d", &numero1);
    printf("Número: \n");
    scanf("%d", &numero2);

    soma = numero1 + numero2;

    //subtração
    printf("Digite os números que queira subtrair!\n");
    printf("Número: \n");
    scanf("%d", &numero1);
    printf("Número: \n");
    scanf("%d", &numero2);

    sub = numero1 - numero2;

    //multiplicação
    printf("Digite os números que queira multiplicar!\n");
    printf("Número: \n");
    scanf("%d", &numero1);
    printf("Número: \n");
    scanf("%d", &numero2);

    mult = numero1 * numero2;

    //divisão
    printf("Digite os números que queira dividir!\n");
    printf("Número: \n");
    scanf("%d", &numero1);
    printf("Número: \n");
    scanf("%d", &numero2);

    div = numero1 / numero2;

    //resultados
    printf("A Soma é: %d\n", soma);
    printf("A Subtração é: %d\n", sub);
    printf("A Multiplicação é: %d\n", mult);
    printf("A Divisão é: %d\n", div);

    //Rodando do jeito que eu queria
    return 0;
    
}