#include <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale (LC_ALL, "Portuguese");
    setlocale (LC_CTYPE, "pt_BR.UTF-8"); //DEFINE O PADR�O BRASILEIRO

    int henrique = 45;
    //%u � o equivalente ao %d, mas ele aceita n�meros sem sinal, o u � justamente de unsigned
    printf("O tamanho da variavel henrique � %u bytes\n", sizeof henrique);

    double purper = 3.14;
    printf("O tamanho da variavel purper � %u bytes\n", sizeof purper);

    char carro = 'nissan';
    printf("O tamanho da variavel carro � %u bytes\n", sizeof carro);

    return 0;
}
