#include <stdio.h>

//A imobiliária AJB vende apenas terrenos retangulares. Faça um algoritmo para ler as
//dimensões de um terreno e depois exibir a área do terreno.

int main()
{
    float largura, comprimento, area;

    printf("Digite a largura do terreno: ");
    scanf("%f", &largura);

    printf("Digite o comprimento do terreno: ");
    scanf("%f", &comprimento);

    area = largura * comprimento;

    printf("\n A área do terreno é de %.2f\n", area);
}
