#include <stdio.h>

int main(){
    //organização loja 
    char produtoA [30], produtoB [30];
    unsigned int estoqueA, estoqueB;
    float valorA, valorB;
    double valorTotalA, valorTotalB;

    //receber as informações (Produto A)
    printf("Nome do produto A: ");
    scanf(" %30[^\n]s", produtoA);

    printf("Quantidade em estoque: ");
    scanf("%u", &estoqueA);

    printf("Valor do produto: R$ ");
    scanf("%f", &valorA);

    valorTotalA = (float)estoqueA * valorA;

    //receber as informações (Produto B)
    printf("Nome do produto B: ");
    scanf(" %30[^\n]s", produtoB);

    printf("Quantidade em estoque: ");
    scanf("%u", &estoqueB);

    printf("Valor do produto: R$ ");
    scanf("%f", &valorB);

    valorTotalB = (float)estoqueB * valorB;

    //exibição dados do primeiro produto
    printf("Produto A: %s\n", produtoA);
    printf("Quantidade em estoque: %u\n", estoqueA);
    printf("Valor do produto: R$ %.2f\n", valorA);
    printf("Valor total de vendas: R$ %.2f\n\n", valorTotalA);

     //exibição dados do segundo produto
    printf("Produto B: %s\n", produtoB);
    printf("Quantidade em estoque: %u\n", estoqueB);
    printf("Valor do produto: R$ %.2f\n", valorB);
    printf("Valor total de vendas: R$ %.2f\n\n", valorTotalB);

    //comparações dos produtos
    printf("O produto A tem maior estoque que o produto B? %d\n", estoqueA > estoqueB );
    printf("O produto A tem maior preço que o produto B? %d\n", valorA > valorB);
    printf("Valor total de A (R$ %.2f) é maior que o valor total de B (R$ %.2f)? %d\n\n",
    valorTotalA, valorTotalB, valorTotalA > valorTotalB);

    return 0;

}