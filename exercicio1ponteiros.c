#include <stdio.h>
#include <locale.h>

//Faça um algoritmo em linguagem C, que declare um ponteiro e atribuindo um endereço.

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int num = 10;
    int *ptr;

    ptr = &num;

    printf("Valor de número : %d\n", num);
    printf("Endereço de número : %p\n", &num);
    printf("Endereço armazenado : %p\n", ptr);
    printf("Valor apontado por ptr : %d\n", *ptr);
}
