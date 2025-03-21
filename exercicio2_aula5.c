#include <stdio.h>
#include <locale.h>

/*
Uma loja fornece 10% de desconto para funcionários e 5% de desconto para clientes
vips. Faça um programa que calcule o valor total a ser pago por uma pessoa. O programa
deverá ler o valor total da compra efetuada e um código que identifique se o comprador
é um cliente comum (1), funcionário (2) ou vip (3).
*/

int main()
{
    setlocale (LC_ALL, "Portuguese");

    float compra, compraTotal;
    int comprador, desconto;

    printf("Entre com o valor da compra: ");
    scanf("%f", &compra);

    printf("\nIndique qual o tipo de comprador (cliente comum = 1, funcionario = 2, VIP = 3): ");
    scanf("%d", &comprador);

    if (comprador == 1) {
        printf("\nO valor da compra é %.2f", compra);
    } else if (comprador == 2) {
        desconto = compra * 0.10;
        compraTotal = compra - desconto;
        printf("\nO valor final da compra é %.2f", compraTotal);
    } else if (comprador == 3) {
        desconto = compra * 0.05;
        compraTotal = compra - desconto;
        printf("\nO valor final da compra é %.2f", compraTotal);
    } else {
        printf("\nComando inválido!");
    }
}
