#include <stdio.h>
#include <locale.h>

// Buscando um n�mero dentro do vetor. Pe�a ao usu�rio um n�mero e verifique se
//ele est� no vetor.


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

    printf("\nDigite um valor de verifica��o : ");
    scanf("%d", &verificacao);

    for (i = 0; i < 5; i++ )
    {
        if (verificacao == vetor[i])
        {
            printf("Esse valor est� no vetor");
            break;
        }
        else
        {
            printf("Esse valor n�o est� no vetor");
            break;
        }

    }
}
