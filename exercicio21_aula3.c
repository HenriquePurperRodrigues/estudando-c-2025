#include <stdio.h>

/*
Fa�a um algoritmo que receba tr�s n�meros, calcule e mostre a multiplica��o desses
n�meros
*/

int main()
{
    int num1, num2, num3, multiplicacao;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("\nDigite o segundo numero: ");
    scanf("%d", &num2);

    printf("\nDigite o terceiro numero: ");
    scanf("%d", &num3);

    multiplicacao = num1 * num2 * num3;

    printf("\nA multiplicacao entre os 3 numeros e %d\n", multiplicacao);

}
