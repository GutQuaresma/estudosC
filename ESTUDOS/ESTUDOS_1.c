#include <stdio.h>

int main(){
    int idade;
    float altura, peso;
    char nome [50], posicao [30];

    printf("Digite seu nome: ");
    fgets(nome, 50, stdin);

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite sua altura: ");
    scanf("%f", &altura);

    printf("Digite seu peso: ");
    scanf("%f", &peso);
    getchar();

    printf("Digite a sua posição: ");
    fgets(posicao, 20, stdin);

    printf("Nome do cadidato: %s", nome);
    printf("Idade do candidato: %d\n", idade);
    printf("Altura do candidato: %.2f\n", altura);
    printf("Peso do candidato: %.2f\n", peso);
    printf("Posição do candidato: %s", posicao);
    
}
