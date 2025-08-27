#include <stdio.h>

int main(){
    int num1, num2;

    //Fazer o comparativo de num1 e num2 (maior, menor, igual, diferente)
    printf("** Comparativos **\n");

    printf("Digite um número inteiro: ");
    scanf("%d", &num1);

    printf("Digite um número inteiro: ");
    scanf("%d", &num2);

    printf("num1 > num2: %d\n", num1 > num2); //num1 maior que num2
    printf("num1 < num2: %d\n", num1 < num2); //num1 menor que num2
    printf("num1 == num2: %d\n", num1 == num2);//num1 igual num2
    printf("num1 != num2: %d\n", num1 > num2);//num1 diferente de num2

    /*
    Ex: num1 = 10, num2 = 5;
    num1 > num2: 1 ('1' = Sim, num1 é maior que num2)
    num1 < num2: 1 ('0' = Não, num1 não é menor que num2)
    num1 == num2: 1 ('0' = Não, num1 não é igual a num2)
    num1 != num2: 1 ('1' = Sim, num1 é difernte de num2)
    */

    return 0;

}