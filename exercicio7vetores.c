#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale (LC_ALL, "Portuguese");

    int vetor[5];
    int i = 0;

    for (i = 0; i < 5; i++)
    {
        printf("Digite um valor para o vetor: ");
        scanf("%d", &vetor[i]);
        vetor[i] = vetor[i] * 2;



    }



}
