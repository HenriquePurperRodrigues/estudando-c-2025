#include <stdio.h>
#include <locale.h>

//Copiando um vetor para outro. Crie um segundo vetor e copie os valores do primeiro.

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int vetorA[5];
    int vetorB[5];
    int i;


    for (i = 0; i < 5; i++ )
    {
        printf("Digite um valor para o primeiro vetor : ");
        scanf("%d", &vetorA[i]);

        vetorB[i] = vetorA[i];
    }

     printf("\nValor do vetor B : \n");

    for (i =  0; i < 5; i++)
    {
    printf(" %d ", vetorB[i]);
    }
}
