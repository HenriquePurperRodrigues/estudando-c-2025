#include <stdio.h>
#include <locale.h>

/*
Crie um algoritmo que calcule o IMC e mostre se a pessoa está com o peso ideal.
(IMC = PESO(kg) / ALTURA(m)² )
*/

int main()
{
    setlocale (LC_ALL, "Portuguese");

    float peso, altura, IMC;

    printf("Digite o peso(kg): ");
    scanf("%f", &peso);

    printf("\nDigite a altura(m): ");
    scanf("%f", &altura);

    IMC = peso / (altura * altura);

    if (IMC < 18.5) {
        printf("\nIMC de %.2f abaixo do peso", IMC);
    } else if (IMC >= 18.5 && IMC <= 24.9) {
        printf("\nIMC de %.2f peso ideal", IMC);
    } else if (IMC > 24.9 && IMC <= 29.9) {
        printf("\nIMC de %.2f sobrepeso", IMC);
    } else if (IMC > 29.9) {
        printf("\nIMC de %.2f obesidade", IMC);
    } else {
    }



}
