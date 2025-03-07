#include <stdio.h>

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
