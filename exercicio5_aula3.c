#include <stdio.h>

//Faça um algoritmo que calcula os gastos com combustível em uma viagem. O
//algoritmo deve solicitar ao usuário a distância a ser percorrida em Km, o consumo do
//carro em Km/litro e o preço do litro do combustível. Como resposta o programa deverá
//informar qual o valor em R$ a ser gasto com combustível na viagem.

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
