#include <stdio.h>
#include <math.h>

//Construa um algoritmo para calcular a distância entre dois pontos do plano
//cartesiano. Cada ponto é um par ordenado (x,y).

int main()
{
    float x1, x2, y1, y2, dist;

    printf("Entre com as coordenadas do primeiro ponto: ");
    scanf("%f %f", &x1, &y1);

    printf("Entre com as coordenadas do segundo ponto: ");
    scanf("%f %f", &x2, &y2);

    dist = (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
    dist = sqrt ( dist );

    printf("\nA distância é : %f\n", dist);

    return 0;

}
