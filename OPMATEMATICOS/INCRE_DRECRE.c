#include <stdio.h>

int main(){
    int numero1, resultado;

    //Incremento 
    //Pré-incremento
    printf("Digite um número: ");
    scanf("%d", &numero1);
    printf("Antes do incremento: %d\n", numero1);
    resultado = ++numero1;
    printf("Após Pré-incremento - Número 1: %d - Resultado: %d\n", numero1, resultado);

    //Pos-incremento
    printf("Digite um número: ");
    scanf("%d", &numero1);
    printf("Antes do incremento: %d\n", numero1);

    resultado = numero1++;
    printf("Após Pós-incremento - Número 1: %d - Resultado: %d\n", numero1, resultado);

    //Pré-decremento
    printf("Digite um número: ");
    scanf("%d", &numero1);
    printf("Antes do decremento: %d\n", numero1);
    resultado = --numero1;
    printf("Após Pré-decremento - Número 1: %d - Resultado: %d\n", numero1, resultado);

    //Decremento
    //Pós-decremento
    printf("Digite um número: ");
    scanf("%d", &numero1);
    printf("Antes do decremento: %d\n", numero1);
    resultado = numero1--;
    printf("Após Pós-decremento - Número 1: %d - Resultado: %d\n", numero1, resultado);

    //Não entendi o funcionamento e sua utilização, mas está funcionando perfeitamente! :/


}