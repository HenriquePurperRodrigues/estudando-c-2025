#include <stdio.h>

//Faça um algoritmo que calcule a velocidade média de um trajeto com base na
//distância percorrida e no tempo (em decimal) usado para isso.

int main ()
{
    float velocidadeMedia, distancia, tempo;

    printf("Digite o distancia(km): ");
    scanf("%f", &distancia);

    printf("Digite o tempo(h): ");
    scanf("%f", &tempo);

    velocidadeMedia = (distancia / tempo);

    printf("\n A velocidade média do trajeto é %f", velocidadeMedia);



}
