#include <stdio.h>
#include <locale.h>

/*
Crie um programa que receba um número de 1 á 7 como entrada, representando um
dia da semana, e exiba o nome desse dia. Por exemplo, se o usuário inserir 1, o programa
deve exibir "Segunda-feira", se inserir 2, exibir "Terça-feira", e assim por diante.
*/

int main()
{
    setlocale (LC_ALL, "Portuguese");

    int num;

    printf("Digite um número de 1 a 7: ");
    scanf("%d", &num);

    switch (num)
    {
        case 1:
            printf("\nÉ domingo!");
            break;
        case 2:
            printf("\nÉ segunda-feira");
            break;
        case 3:
            printf("\nÉ terça-feira");
            break;
        case 4:
            printf("\nÉ quarta-feira");
            break;
        case 5:
            printf("\nÉ quinta-feira!");
            break;
        case 6:
            printf("\nÉ sexta-feira!");
            break;
        case 7:
            printf("\nÉ sábado!");
            break;
        default:
            break;
    }
}
