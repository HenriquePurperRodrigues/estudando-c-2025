#include <stdio.h>
#include <locale.h>

//Fa�a um algoritmo em linguagem C, que declare um ponteiro e atribuindo um endere�o.

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int num = 10;
    int *ptr;

    ptr = &num;

    printf("Valor de n�mero : %d\n", num);
    printf("Endere�o de n�mero : %p\n", &num);
    printf("Endere�o armazenado : %p\n", ptr);
    printf("Valor apontado por ptr : %d\n", *ptr);
}
