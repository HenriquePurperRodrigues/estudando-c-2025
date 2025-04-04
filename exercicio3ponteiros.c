#include <stdio.h>
#include <locale.h>

// Faça um algoritmo em linguagem C, que inicialize um ponteiro com NULL.

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int *ptr = NULL;

    printf ("ponteiro inicializado com NULL : %p\n", ptr);

    return 0;
}
