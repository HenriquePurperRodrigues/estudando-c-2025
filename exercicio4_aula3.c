#include <stdio.h>

//Faça um algoritmo que recebe dois valores representando as medidas da base e da
//altura de um triângulo qualquer e exiba a área deste triângulo.

int main()
{
    float altura, base, area;

    printf("Digite a altura do triângulo: ");
    scanf("%f", &altura);

    printf("Digite a base do triângulo: ");
    scanf("%f", &base);

    area = (base * altura) / 2;

    printf("\nA área do triângulo é %f ", area);


}
