#include <stdio.h>

int main()
{
    float altura, base, area;

    printf("Digite a altura do tri�ngulo: ");
    scanf("%f", &altura);

    printf("Digite a base do tri�ngulo: ");
    scanf("%f", &base);

    area = (base * altura) / 2;

    printf("\nA �rea do tri�ngulo � %f ", area);


}
