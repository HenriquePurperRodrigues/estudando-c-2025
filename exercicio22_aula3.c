#include <stdio.h>

/*
Faça um algoritmo que receba duas notas, calcule e mostre a média ponderada
dessas notas, considerando peso 2 para a primeira nota e peso 3 para a segunda nota.
*/

int main()
{
    int nota1, nota2, media;

    printf("Digite as duas notas: ");
    scanf("\n%d\n %d", &nota1, &nota2);

    media = (nota1 * 2 + nota2 * 3) / 5;

    printf("\nA media da nota é %d\n", media);
}
