#include <stdio.h>
#include <math.h>
/*
Fa�a um algoritmo que receba o valor dos catetos de um tri�ngulo, calcule e mostre
o valor da hipotenusa
*/

int main()
{
    float catB, catC, hip;

    printf("Digite a medida do primeiro cateto: ");
    scanf("%f", &catB);

    printf("\nDigite a medida do segundo cateto: ");
    scanf("%f", catC);

    hip = sqrt(catB * catB + catC * catC);

    printf("\nA medida da hipotenusa � %.2f\n", hip);

    return 0;
}
