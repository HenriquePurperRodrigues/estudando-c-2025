#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

//Fa�a um algoritmo em linguagem C, que crie um vetor dinamicamente (malloc).

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int *vetor;
    int tamanho = 5;

    //Aloca mem�ria para 5 inteiros
    vetor = (int)* malloc(tamanho * sizeof(int));

    if (vetor == NULL)
    {
        printf("Erro na aloca��o de mem�ria!\n");
        return 1;
    }

    for (int i = 0; i < tamanho; i++)
    {
        vetor[i] = i * 2;
    }
    for (int i = 0; i < tamanho; i++)
    {
        printf("vetor[%d] = %d", i, vetor[i]);
    }

    free(vetor); //Libera mem�ria alocada

    return 0;
}
