#include <stdio.h>
#include <locale.h>

//Fa�a um programa que preencha um vetor de 20
//posi��es e exiba todos os valores pares e suas
//respectivas posi��es.

#define TAM 20

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int numeros[TAM], i;

    for(i = 0; i < TAM; i++)
    {
        printf("Posi��o %d do vetor: ", i);
        scanf("%d", &numeros[i]);
    }

    printf("\n\n");

    for(i = 0; i < TAM; i++)
    {
        if (numeros[i] % 2 == 0)
            {
        printf("\nElemento %d na posi��o %d", numeros[i], i);
            }
    }

    return 0;

    }

