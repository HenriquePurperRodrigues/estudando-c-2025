#include <stdio.h>
#include <locale.h>

/*
Crie um programa que receba um n�mero de 1 � 7 como entrada, representando um
dia da semana, e exiba o nome desse dia. Por exemplo, se o usu�rio inserir 1, o programa
deve exibir "Segunda-feira", se inserir 2, exibir "Ter�a-feira", e assim por diante.
*/

int main()
{
    setlocale (LC_ALL, "Portuguese");

    int num;

    printf("Digite um n�mero de 1 a 7: ");
    scanf("%d", &num);

    switch (num)
    {
        case 1:
            printf("\n� domingo!");
            break;
        case 2:
            printf("\n� segunda-feira");
            break;
        case 3:
            printf("\n� ter�a-feira");
            break;
        case 4:
            printf("\n� quarta-feira");
            break;
        case 5:
            printf("\n� quinta-feira!");
            break;
        case 6:
            printf("\n� sexta-feira!");
            break;
        case 7:
            printf("\n� s�bado!");
            break;
        default:
            break;
    }
}
