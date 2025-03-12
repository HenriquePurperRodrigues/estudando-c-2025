#include <stdio.h>

//Alguns países medem temperaturas em graus Celsius, e outros em graus Fahrenheit.
//Faça um algoritmo para ler uma temperatura Celsius e imprimí-Ia em Fahrenheit

int main ()
{
    float celsius, fahrenheit;

    printf("Digite a temperatura em graus celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 1.8) + 32;

    printf("\nA temperatura em fahrenheit é %.2f\n", fahrenheit);

}
