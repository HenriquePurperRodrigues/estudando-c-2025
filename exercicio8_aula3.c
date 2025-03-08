#include <stdio.h>

//Fa�a um algoritmo para um terminal de auto-atendimento banc�rio que realiza
//saques em dinheiro. O programa deve solicitar ao usu�rio qual o valor a ser retirado e
//deve exibir na tela qual a quantidade de cada c�dula ser� entregue ao usu�rio. O
//programa sempre deve tentar utilizar o menor n�mero poss�vel de c�dulas. A m�quina
//possui apenas c�dulas de R$ 10, 5 e 1. Voc� deve exibir as vari�veis que contem a
//quantidade de c�dulas na seguinte ordem: 10,5,1.

int main()
{
int valor, resto, nota1, nota5, nota10;

    printf("Digite o valor a ser retirado: ");
    scanf("%d", &valor);

    nota10 = valor / 10;
    valor = valor % 10;
    nota5 =  valor / 5;
    nota1 = valor % 5;

    printf("\nVoc� ir� precisar: ");
    printf("\n\t %d x R$ 10,00", nota10);
    printf("\n\t %d x R$ 5,00", nota5);
    printf("\n\t %d x R$ 1,00\n", nota1);

}
