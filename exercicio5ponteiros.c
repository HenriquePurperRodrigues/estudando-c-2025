#include <stdio.h>
#include <locale.h>

// Fa�a um algoritmo em linguagem C para Aritm�tica de ponteiros: Decremento.

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int vetor[2];
    int i;
    int *ptr;

    for (i = 0; i < 2; i++ )
    {
        printf("Insira um valor para o vetor: ");
        scanf("%d", &vetor[i]);
    }

    ptr = &vetor[1];

    printf("\nPrimeiro valor do vetor: %d", *ptr);

    ptr--;
    printf("\nSegundo valor do vetor: %d", *ptr);


}
