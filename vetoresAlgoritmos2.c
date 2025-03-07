#include <stdio.h>

int main()
{
    //Definindo um vetor de tamanho 4
    int vetor[5];

    //Atribuindo valores às posições do vetor
    vetor[0] = 10; //1
    vetor[1] = 46; //2
    vetor[2] = 41; //3
    vetor[3] = 60; //4

    //Tentativa de atribuir um valor
    //fora dos limites do vetor
    vetor[4] = 200; //Isso causará erro

    //Exibindo os valores do vetor
    printf("Valores do vetor:\n");
    for (int i = 0; i < 4; i++)
    {
        printf("vetor[%d] = %d\n", i, vetor[i]);
    }

    return 0;
}
