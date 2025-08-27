#include <stdio.h>

int main(){
    int num1;
    float num2;

    //comparação tipos de dados diferentes

    printf("** Comparativos **\n");

    printf("Digite um número: ");
    scanf("%d", &num1);

    printf("Digite um número: ");
    scanf("%f", &num2);

    printf("num1 > num2: %d\n", num1 > num2); 
    printf("num1 < num2: %d\n", num1 < num2); 
    printf("num1 == num2: %d\n", num1 == num2);
    printf("num1 != num2: %d\n", num1 > num2);

    return 0;
}