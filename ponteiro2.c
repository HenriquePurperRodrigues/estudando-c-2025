#include <stdio.h>
#include <stdlib.h> // contém malloc.

int main()
{
    int a, b;
    a = b = 5;
    a = 8;

    printf("\n a = %d, b = %d", a, b);
    printf("\n a = %d (%d), b = %d (%d)", a, &a, b, &b);

    //ponteiro.
    a = 5;
    //criando um ponteiro.
    int *pti = NULL;
    pti = &a; // & é o endereço * é o conteúdo.
    a = 8;
    printf("\n a = %d, pti = %d", a, pti);
    //imprimindo o valor de pti
    printf("\n a = %d, pti = %d", a, *pti);

    return 0;
}
