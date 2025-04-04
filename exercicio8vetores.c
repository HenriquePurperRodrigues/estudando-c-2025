#include <stdio.h>
#include <locale.h>

// Buscando um número dentro do vetor. Peça ao usuário um número e verifique se
//ele está no vetor.


int main()
{
    setlocale(LC_ALL, "Portuguese");

    int vetor[5];
    int i;
    int verificacao;

    for (i = 0; i < 5; i++)
    {
        printf("Digite um valor para o vetor : ");
        scanf("%d", &vetor[i]);
    }

    printf("\nDigite um valor de verificação : ");
    scanf("%d", &verificacao);

    for (i = 0; i < 5; i++ )
    {
        if (verificacao == vetor[i])
        {
            printf("Esse valor está no vetor");
            break;
        }
        else
        {
            printf("Esse valor não está no vetor");
            break;
        }

    }
}
