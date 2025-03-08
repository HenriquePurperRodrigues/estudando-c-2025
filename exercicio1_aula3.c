#include <stdio.h>

//Faça um algoritmo que solicita ao usuário um número real e exibe na tela a metade do
//número digitado.

int main ()
{

 float num, metadeNum;

 printf("Digite um numero: ");
 scanf("%f", &num);

 metadeNum = (num / 2);

 printf("\n A metade do numero é: %f ", metadeNum);

}
