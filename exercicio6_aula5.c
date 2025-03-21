#include <stdio.h>
#include <locale.h>

/*
Faça um programa que receba duas notas, calcule e mostre a média aritmética e
mensagem que está na tabela a seguir:

0,0 - 4,0 = reprovado
4,1 - 7,0 = exame
7,1 - 10,0 = aprovado
*/

int main()
{
    setlocale (LC_ALL, "Portuguese");

    float nota1, nota2, mediaArit;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("\nDigite a segunda nota: ");
    scanf("%f", &nota2);

    mediaArit = (nota1 + nota2) / 2;

    if (mediaArit >= 0.0 && mediaArit <= 4.0 ){
        printf("\n%.2f, Reprovado!!", mediaArit);
    } else if (mediaArit >= 4.1 && mediaArit <= 7.0) {
        printf("\n%.2f, Exame", mediaArit);
    } else if (mediaArit >= 7.1 && mediaArit <= 10) {
        printf("\n%.2f, Aprovado!", mediaArit);
    } else {
    }

}
