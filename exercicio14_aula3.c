#include <stdio.h>

//Fa�a um algoritmo para ler o sal�rio de um funcion�rio e aument�-Io em 15%. Ap�s
//o aumento, desconte 8% de impostos. Imprima o sal�rio inicial, o sal�rio com o
//aumento e o sal�rio final.

int main()
{
    float salario, aumento, imposto, salarioFinal;

    printf("Sal�rio do funcon�rio: ");
    scanf("%f", &salario);

    aumento = salario * 0.15;
    imposto = (salario + aumento) * 0.08;
    salarioFinal = (salario + aumento) - imposto;

    printf("\nO sal�rio original � R$ %.2f\n", salario);

    printf("\nO aumento foi de %.2f\n", aumento);

    printf("\nO sal�rio com aumento � R$ %.2f\n", salario + aumento);

    printf("\nO imposto � de R$ %.2f\n", imposto);

    printf("\nO sal�rio final � R$ %.2f\n", salarioFinal);

    return 0;
}
