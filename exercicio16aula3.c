#include <stdio.h>

//Alguns pa�ses medem temperaturas em graus Celsius, e outros em graus Fahrenheit.
//Fa�a um algoritmo para ler uma temperatura Celsius e imprim�-Ia em Fahrenheit

int main ()
{
    float celsius, fahrenheit;

    printf("Digite a temperatura em graus celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 1.8) + 32;

    printf("\nA temperatura em fahrenheit � %.2f\n", fahrenheit);

}
