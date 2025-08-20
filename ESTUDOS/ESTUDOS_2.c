#include <stdio.h>

int main(){
    //Estudo para aperfeiçoar a utilização do "scanf"
    char nome[50], apelido[50];
    char letra;

    printf("Digite seu nome: ");
    scanf("%50[^\n]", nome);

    printf("Digite seu apelido: ");
    scanf(" %50[^\n]", apelido);

    printf("Digite a letra inicial do seu nome: ");
    scanf(" %c", &letra);

    printf("Nome: %s\n", nome);
    printf("Apelido: %s\n", apelido);
    printf("Letra: %c\n", letra);

    //Teste bem sucedidio, programa funcionando como eu quero!!

    return 0;

}