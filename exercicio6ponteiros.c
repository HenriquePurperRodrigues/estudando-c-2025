#include <stdio.h>
#include <locale.h>

// Faça um algoritmo em linguagem C, que acesse elementos de um vetor usando ponteiro.

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int vetor[5] = {10, 20, 30, 40, 50};
    int *ptr = vetor;
    int i;

    for (i = 0; i < 5; i++)
    {
        printf("vetor[%d] = %d\n", i, ptr[i]);
    }
}
