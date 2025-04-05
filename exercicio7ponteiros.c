#include <stdio.h>
#include <locale.h>

// Faça um algoritmo em linguagem C, que troque valores usando ponteiros.

void trocar(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int x = 10, y = 20;

    printf("Antes da troca de valores: x = %d, y = %d", x, y);
    trocar(&x, &y);
    printf("\nDepois da troca: x = %d, y = %d", x, y);

    return 0;
}
