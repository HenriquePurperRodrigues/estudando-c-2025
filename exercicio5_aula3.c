#include <stdio.h>


int main ()
{

float dist, consumo, valor, valorFinal;

    printf("Indique a distância percorrida (km): ");
    scanf("%f", &dist);

    printf("Qual foi o consumo de combustível do carro (km/l): ");
    scanf("%f", &consumo);

    printf("Valor do combustível (R$): ");
    scanf("%f", &valor);

    valorFinal = (dist / consumo) * valor;

    printf("\nO valor do gasto de combustível é %f ", valorFinal);
}
