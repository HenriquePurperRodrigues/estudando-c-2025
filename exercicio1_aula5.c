#include <stdio.h>
#include <locale.h>

/*
Elabore um algoritmo que leia dois valores do usuário e a operação que ele deseja
executar (Operações: soma, subtração, divisão, multiplicação). Execute a operação
desejada e imprima na tela.
*/


int main()
{
    setlocale(LC_ALL, "Portuguese");

   float num1, num2;
   char operador;

    printf("Digite um número: ");
    scanf("%f", &num1);

    printf("\nDigite um segundo número: ");
    scanf("%f", &num2);

    printf("\nQual operação deseja calcular? (+, -, *, /) ");
    scanf(" %c", &operador);

    switch (operador)
    {
        case '+':
            printf("\nA soma dos dois números é %.2f", num1+num2);
            break;
        case '-':
            printf("\nA subtração dos dois números é %.2f", num1-num2);
            break;
        case '*':
            printf("\nA multiplicação dos dois números é %.2f", num1*num2);
            break;
        case '/':
            if (num2 != 0) {
                printf("\nA divisão dos dois números é %.2f", num1/num2);
            } else {
                printf("\nResultado inválido");
            }
            break;
        default:
            printf("\nComando inválido");
            break;
    }
}
