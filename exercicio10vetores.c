#include <stdio.h>
#include <locale.h>

// Contando n�meros maiores que 10

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int vetor[5];
    int i;

    for (i = 0; i < 5; i++)
    {
        printf("Digite um n�mero: ");
        scanf("%d", &vetor[i]);

        if (vetor[i] > 10)
        {
        printf("\nO n�mero %d � maior que 10 \n", vetor[i]);
        }
        else
        {
        printf("\nO n�mero %d n�o � maior que 10\n", vetor[i]);
        }
    }

}
