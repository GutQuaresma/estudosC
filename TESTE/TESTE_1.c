#include <stdio.h>

int main(){
    int idade;
    char nome [50], cidade [30];

    printf("Digite seu nome: ");//fgets não é lido se não for o primeiro
    fgets(nome, 50, stdin);
    /*
    correção: pode ser lido, desde que limpe o caractere "\n" deixado no buffer
    "\n" é deixado no buffer após teclar o "enter"
    */

    printf("Digite sua idade: ");
    scanf("%d", &idade);
    getchar(); //função para limpar o buffer de entrada e possibilitar a leitura do fgets

    printf("Digite sua cidade: ");
    fgets(cidade, 30, stdin); //fgets pode ser lido depois de outro fgets, mas não depois do scanf

    printf("Seu nome é: %s", nome);
    printf("Sua idade é: %d\n", idade);
    printf("Sua cidade é: %s", cidade);
    

    return 0;

}