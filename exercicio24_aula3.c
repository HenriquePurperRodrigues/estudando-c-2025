#include <stdio.h>

/*
Fa�a um algoritmo que calcule e mostre a �rea de um trap�zio.
*/

int main()
{
    int area, comprimento, base, altura;

    printf("Digite a comprimento do trapezio: ");
    scanf("%d", &comprimento);

    printf("\nDigite a base do trapezio: ");
    scanf("%d", &base);

    printf("\nDigite a altura do trapezio: ");
    scanf("%d", altura);

    area = (comprimento + base) * altura / 2;

    printf("\nA area do trapezio � de %d\n", area);

    return 0;
}

