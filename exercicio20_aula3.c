#include <stdio.h>

#define PI 3.1415

/*
Calcule o volume de uma caixa d'água cilíndrica.
*/

int main()
{
    float raio, altura, volume, area;

    printf("Qual o raio do cilindro? ");
    scanf("%f", &raio);

    printf("\nInforme a altura do cilindro: ");
    scanf("%f", &altura);

    area = PI * (raio*raio);
    volume = area * altura;

    printf("\nO volume da caixa é %.2f\n", volume);

}
