#include <stdio.h>
#include <locale.h>

/*
Elabore um algoritmo que leia dois valores do usu�rio e a opera��o que ele deseja
executar (Opera��es: soma, subtra��o, divis�o, multiplica��o). Execute a opera��o
desejada e imprima na tela.
*/


int main()
{
    setlocale(LC_ALL, "Portuguese");

   float num1, num2;
   char operador;

    printf("Digite um n�mero: ");
    scanf("%f", &num1);

    printf("\nDigite um segundo n�mero: ");
    scanf("%f", &num2);

    printf("\nQual opera��o deseja calcular? (+, -, *, /) ");
    scanf(" %c", &operador);

    switch (operador)
    {
        case '+':
            printf("\nA soma dos dois n�meros � %.2f", num1+num2);
            break;
        case '-':
            printf("\nA subtra��o dos dois n�meros � %.2f", num1-num2);
            break;
        case '*':
            printf("\nA multiplica��o dos dois n�meros � %.2f", num1*num2);
            break;
        case '/':
            if (num2 != 0) {
                printf("\nA divis�o dos dois n�meros � %.2f", num1/num2);
            } else {
                printf("\nResultado inv�lido");
            }
            break;
        default:
            printf("\nComando inv�lido");
            break;
    }
}
