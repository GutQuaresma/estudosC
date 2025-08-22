#include <stdio.h>

int main(){
    //Cadastro de nota do aluno + cálculo de média
    int nota1, nota2, matricula, trab;
    float media, notafinal;
    char nome[50], turma;

    printf("*** Bem-vindo(a) professor(a) ***\n");

    //receber as informações básicas
    printf("Escreva as informações básicas do aluno(a)!\n");
    printf("Digite o nome do aluno: \n");
    scanf(" %50[^\n]s", nome);

    printf("Digite a matrícula do aluno: \n");
    scanf("%d", &matricula);

    printf("Digite a turma do aluno(A-Z): \n");
    scanf(" %c", &turma);

    //receber as notas da prova
    printf("** Cadastro das Notas **\n");

    printf("Digite a nota da prova 1: \n");
    scanf("%d", &nota1);

    printf("Digite a nota da prova 2: \n");
    scanf("%d", &nota2);

    printf("Digite a nota do trabalho: \n");
    scanf("%d", &trab);

    //calculos da nota
    media = (float)(nota1 + nota2) / 2;
    notafinal = media + trab;

    //exibição das informações
    printf("Aluno(a): %s\n", nome);
    printf("Matrícula: %d\n", matricula);
    printf("Turma: %c\n", turma);
    printf("Prova 1: %d\n", nota1);
    printf("Prova 2: %d\n", nota2);
    printf("Média: %.1f\n", media);
    printf("Trabalho: %d\n", trab);
    printf("Nota final: %.1f\n", notafinal);

    //Resolvido problema com a matrícula, mas sem identificar onde errei :/

    return 0;

}