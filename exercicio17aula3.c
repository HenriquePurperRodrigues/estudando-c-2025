#include <stdio.h>

//A empresa AJB paga R$10,00 por hora normal trabalhada, e R$15,00 por hora extra.
//Faça um algoritmo para calcular e imprimir o salário bruto e o salário líquido de um
//determinado funcionário. Considere que o salário líquido é igual ao salário bruto
//descontando-se 10% de impostos.

int main ()
{

    float hora_normal, hora_extra, bruto, liquido;

    printf("Qual o total de horas normais trabalhadas? ");
    scanf("%f", &hora_normal);

    printf("Qual o total de horas extras trabalhadas? ");
    scanf("%f", &hora_extra);

    bruto = hora_normal * 10 + hora_extra * 15;
    liquido = bruto * 0.9;

    printf("\nO salario bruto é R$ %.2f\n", bruto);
    printf("\nO salario liquido é R$ %.2f\n", liquido);


}
