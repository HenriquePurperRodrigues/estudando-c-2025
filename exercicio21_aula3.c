#include <stdio.h>

/*
Faça um algoritmo que receba três números, calcule e mostre a multiplicação desses
números
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
