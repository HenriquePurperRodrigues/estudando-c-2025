#include <stdio.h>

//Faça um algoritmo que solicite ao usuário um valor e exiba o dobro do valor

int main ()
{
    float num, dobro;

    printf("Digite um numero: ");
    scanf("%f", &num);

    dobro = (num * 2);

    printf("\nO dobro do numero é: %f", dobro);

}
