#include <stdio.h>
#include <locale.h>

/*
Leia o código de um determinado produto e mostre sua classificação. Utilize a
seguinte tabela como referência

1 = alimento não-perecível
2, 3, 4 = alimento perecível
5 ou 6 = vestuário
7 = higiene pessoal
8 até 15 = limpeza e utensilios domésticos
qualquer outro = código inválido
*/

int main()
{
    setlocale (LC_ALL, "Portuguese");

    int produto;

    printf("Digite o código do produto: ");
    scanf("%d", &produto);

    if (produto == 1) {
        printf("\nÉ um alimento não perecível");
    } else if (produto >= 2 && produto <= 4) {
        printf("\nÉ um alimento perecível");
    } else if (produto == 5 || produto == 6) {
        printf("\nÉ um prdouto de vestuário");
    } else if (produto == 7) {
        printf("\nÉ um produto de higiene pessoal");
    } else if (produto >= 8 && produto <= 15) {
        printf("\nÉ da classe de limpeza e utensilios domésticos");
    } else {
        printf("\nCódigo inválido");
    }

}
