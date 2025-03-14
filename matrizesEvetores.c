#include <stdio.h>

/*
O programa abaixo cria e exibe uma matriz
com dimensões e valores definidas pelo
usuário.
*/

int main()
{
    //definição do tamanho da matriz
    int n1, nc;
    printf("\nEntre com o numero de linhas da matriz = ");
    scanf("%d", &n1);
    printf("\nEntre com o tamanho de colunas da matriz = ");
    scanf("%d", &nc);

    //entrada de dados da matriz
    int matriz [n1] [nc], i, j;
    for (i = 0; i < n1; i++)
        for (j = 0; j < nc; j++)
    {
        printf("\nEntre com o elemento [%d] [%d] = ", i+1, j+1);
        scanf("%d", &matriz[i][j]);
    }

    //impressão da matriz da sala
    for (i = 0; i < n1; i++)
    {
        printf("\n |"); //barra vertical
        for (j = 0; j < nc; j++)
            printf(" %d ", matriz[i][j]);
        printf(" | ");
    }
    getchar();
    return 0;
}
