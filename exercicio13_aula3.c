#include <stdio.h>
#include <math.h>

//Construa um algoritmo para calcular a dist�ncia entre dois pontos do plano
//cartesiano. Cada ponto � um par ordenado (x,y).

int main()
{
    float x1, x2, y1, y2, dist;

    printf("Entre com as coordenadas do primeiro ponto: ");
    scanf("%f %f", &x1, &y1);

    printf("Entre com as coordenadas do segundo ponto: ");
    scanf("%f %f", &x2, &y2);

    dist = (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
    dist = sqrt ( dist );

    printf("\nA dist�ncia � : %f\n", dist);

    return 0;

}
