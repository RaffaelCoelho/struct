#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

 struct dados_livro
    {
        char nome[200];
        char autor[200];
        char categoria[200];
        float preco;
    };


int main()
{
    setlocale(LC_ALL, "portuguese");

    int i;
    
    struct dados_livro livro[3];

    for (i = 0; i < 3; i++)
    {

        printf("Digite o nome do livro:");
        gets(&livro[i].nome);
        fflush(stdin);
        printf("Digite o nome do autor:");
        gets(&livro[i].autor);
        fflush(stdin);
        printf("Digite o preço do livro:");
        scanf("%f", &livro[i].preco);
        fflush(stdin);
        printf("Digite a categoria do livro:");
        gets(&livro[i].categoria);
    }

    for (i = 0; i < 3; i++)
    {

        printf("\n Nome do livro: %s", livro[i].nome);
        printf("\n Nome do autor: %s", livro[i].autor);

        printf("\n Preço do livro: %2.f", livro[i].preco);
        printf("\n Categoria do livro: %s", livro[i].categoria);
    }
    return 0;
}
