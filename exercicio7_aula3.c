#include <stdio.h>

//Leia dois valores para as variáveis A e B, e efetue a troca dos valores de forma que a
//variável A passe a ter o valor da variável B e que a variável B passe a ter o valor da
//variável A. Ao final, exiba os resultados. Obs.: deverão ser feitos dois algoritmos: no
//primeiro poderá ser usada uma terceira variável. No segundo somente as variáveis A e
//B.


int main ()
{
    int a, b, troca;

    printf("Digite um valor inteiro para a variavel A: ");
    scanf("%d", &a);

    printf("Digite um valor inteiro para a variavel B: ");
    scanf("%d", &b);

    troca = a;
    a = b;
    b = troca;

    printf("\n%d", a);
    printf("\n%d", b);
}

