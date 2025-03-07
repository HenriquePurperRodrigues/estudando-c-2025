#include <stdio.h>

//Faça um algoritmo que solicite ao usuário o valor do salário do mesmo e a
//porcentagem de aumento. Exiba o valor do aumento e o valor do salário acrescido do
//aumento.

int main()
{

float salario, aumento, valorAumento, salarioFinal;

    printf("Digite o valor do salário: "); //1500
    scanf("%f", &salario);

    printf("Informe a porcentagem do aumento do salário: "); //35%
    scanf("%f", &aumento);

    valorAumento = (aumento * salario) / 100;

    printf("O valor do aumento será de %.2f R$", valorAumento);

    salarioFinal = salario + valorAumento;

    printf("\nO salario acrescido do aumento será %.2f R$", salarioFinal);
}
