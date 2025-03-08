#include <stdio.h>

//Faça um algoritmo para ler o salário de um funcionário e aumentá-Io em 15%. Após
//o aumento, desconte 8% de impostos. Imprima o salário inicial, o salário com o
//aumento e o salário final.

int main()
{
    float salario, aumento, imposto, salarioFinal;

    printf("Salário do funconário: ");
    scanf("%f", &salario);

    aumento = salario * 0.15;
    imposto = (salario + aumento) * 0.08;
    salarioFinal = (salario + aumento) - imposto;

    printf("\nO salário original é R$ %.2f\n", salario);

    printf("\nO aumento foi de %.2f\n", aumento);

    printf("\nO salário com aumento é R$ %.2f\n", salario + aumento);

    printf("\nO imposto é de R$ %.2f\n", imposto);

    printf("\nO salário final é R$ %.2f\n", salarioFinal);

    return 0;
}
