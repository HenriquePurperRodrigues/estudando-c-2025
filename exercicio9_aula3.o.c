#include <stdio.h>

//A imobili�ria AJB vende apenas terrenos retangulares. Fa�a um algoritmo para ler as
//dimens�es de um terreno e depois exibir a �rea do terreno.

int main()
{
    float largura, comprimento, area;

    printf("Digite a largura do terreno: ");
    scanf("%f", &largura);

    printf("Digite o comprimento do terreno: ");
    scanf("%f", &comprimento);

    area = largura * comprimento;

    printf("\n A �rea do terreno � de %.2f\n", area);
}
