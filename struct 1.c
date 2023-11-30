#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    struct dados_aluno
    {
        char nome[200];
        int idade;
    };

    struct dados_professor
    {
        char nome[200];
        int idade;
    };

    struct dados_aluno aluno;
    struct dados_professor professor;

    printf("Digite a idade do aluno:");
    scanf("%d", &aluno.idade);
    fflush(stdin);
    printf("Digite o nome do aluno:");
    gets(&aluno.nome);
    fflush(stdin);
    printf("Digite a idade do professor:");
    scanf("%d", &professor.idade);
    fflush(stdin);
    printf("Digite o nome do professor:");
    gets(&professor.nome);

    printf("\n Nome do aluno: %s", aluno.nome);
    printf("\n Idade do aluno: %d", aluno.idade);

    printf("\n Nome do professor: %s", professor.nome);
    printf("\n Idade do professor: %d", professor.idade);
}
