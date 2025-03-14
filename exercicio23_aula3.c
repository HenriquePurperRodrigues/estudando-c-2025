#include <stdio.h>

/*
Faça um algoritmo que receba o peso de uma pessoa em quilos, calcule e mostre
esse peso em gramas
*/

int main()
{
    float pesoKg, pesoG;

    printf("Digite o peso em quilos: ");
    scanf("%f", &pesoKg);

    pesoG = pesoKg * 1000;

    printf("\nO peso em gramas fica %.1f", pesoG);

}
