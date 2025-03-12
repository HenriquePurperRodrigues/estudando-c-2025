#include <stdio.h>

//Calcule a área de uma pizza que possui um raio R (pi=3.14)

#define PI 3.1415

int main()
{
    float raio, area;

    printf("Entre com o raio da pizza: ");
    scanf("%f", &raio);

    area = PI * raio * raio;

    printf("\nA área da pizza é %.2f\n", area);

    return 0;

}
