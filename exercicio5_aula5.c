#include <stdio.h>
#include <locale.h>

/*
Leia o c�digo de um determinado produto e mostre sua classifica��o. Utilize a
seguinte tabela como refer�ncia

1 = alimento n�o-perec�vel
2, 3, 4 = alimento perec�vel
5 ou 6 = vestu�rio
7 = higiene pessoal
8 at� 15 = limpeza e utensilios dom�sticos
qualquer outro = c�digo inv�lido
*/

int main()
{
    setlocale (LC_ALL, "Portuguese");

    int produto;

    printf("Digite o c�digo do produto: ");
    scanf("%d", &produto);

    if (produto == 1) {
        printf("\n� um alimento n�o perec�vel");
    } else if (produto >= 2 && produto <= 4) {
        printf("\n� um alimento perec�vel");
    } else if (produto == 5 || produto == 6) {
        printf("\n� um prdouto de vestu�rio");
    } else if (produto == 7) {
        printf("\n� um produto de higiene pessoal");
    } else if (produto >= 8 && produto <= 15) {
        printf("\n� da classe de limpeza e utensilios dom�sticos");
    } else {
        printf("\nC�digo inv�lido");
    }

}
