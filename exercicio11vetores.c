#include <stdio.h>
#include <locale.h>

// Calculando a m�dia dos elementos do vetor.

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int vetor[5];
    int i;
    int soma = 0;
    float media;

    for (i = 0; i < 5; i++)
    {
        printf("Digite um valor para o vetor : ");
        scanf("%d", &vetor[i]);
    }

    for (i = 0; i < 5; i++)
    {
        soma += vetor[i];
    }

    media = (float)soma / 5;

    printf("A m�dia dos elementos do vetor �: %.2f\n", media);

}
