#include <stdio.h>

//Fa�a um algoritmo que solicite ao usu�rio o valor do sal�rio do mesmo e a
//porcentagem de aumento. Exiba o valor do aumento e o valor do sal�rio acrescido do
//aumento.

int main()
{

float salario, aumento, valorAumento, salarioFinal;

    printf("Digite o valor do sal�rio: "); //1500
    scanf("%f", &salario);

    printf("Informe a porcentagem do aumento do sal�rio: "); //35%
    scanf("%f", &aumento);

    valorAumento = (aumento * salario) / 100;

    printf("O valor do aumento ser� de %.2f R$", valorAumento);

    salarioFinal = salario + valorAumento;

    printf("\nO salario acrescido do aumento ser� %.2f R$", salarioFinal);
}
