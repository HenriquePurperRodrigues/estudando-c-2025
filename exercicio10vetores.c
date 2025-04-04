#include <stdio.h>
#include <locale.h>

// Contando números maiores que 10

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int vetor[5];
    int i;

    for (i = 0; i < 5; i++)
    {
        printf("Digite um número: ");
        scanf("%d", &vetor[i]);

        if (vetor[i] > 10)
        {
        printf("\nO número %d é maior que 10 \n", vetor[i]);
        }
        else
        {
        printf("\nO número %d não é maior que 10\n", vetor[i]);
        }
    }

}
