#include <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale (LC_ALL, "Portuguese");
    setlocale (LC_CTYPE, "pt_BR.UTF-8"); //DEFINE O PADRÃO BRASILEIRO

    int henrique = 45;
    //%u é o equivalente ao %d, mas ele aceita números sem sinal, o u é justamente de unsigned
    printf("O tamanho da variavel henrique é %u bytes\n", sizeof henrique);

    double purper = 3.14;
    printf("O tamanho da variavel purper é %u bytes\n", sizeof purper);

    char carro = 'nissan';
    printf("O tamanho da variavel carro é %u bytes\n", sizeof carro);

    return 0;
}
