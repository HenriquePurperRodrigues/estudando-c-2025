#include <stdio.h>

//A granja galinha feliz possui um controle automatizado de cada frango da sua
//produ��o. No p� direito do frango h� um anel com um chip de identifica��o; no p�
//esquerdo s�o dois an�is para indicar o tipo de alimento que ele deve consumir. Sabendo
//que o anel com chip custa R$4,00 e o anel de alimento custa R$3,50, fa�a um algoritmo
//para calcular o gasto total da granja para marcar todos os seus frangos.

int main()
{
    float anelChip, anelAlimento, frango, gasto;

    printf("Digite a quantidade de frangos da granja: ");
    scanf("%f", &frango);

    gasto = frango * 4 * frango + 7;

    printf("\nO gasto total � %.2f\n", gasto);

}
