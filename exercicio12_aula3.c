#include <stdio.h>

//Uma f�brica de camisetas produz os tamanhos pequeno, m�dio e grande, cada uma
//sendo vendida respectivamente por 10, 12 e 15 reais. Construa um algoritmo em que o
//usu�rio forne�a a quantidade de camisetas pequenas, m�dias e grandes referentes a
//uma venda, e a m�quina informe quanto ser� o valor arrecadado.

int main()
{
    int pequeno, medio, grande, valor;

    printf("Digite a quantidade de camisetas pequenas: ");
    scanf("%d", &pequeno);

    printf("Digite a quantidade de camisetas m�dias: ");
    scanf("%d", &medio);

    printf("Digite a quantidade de camisetas grandes: ");
    scanf("%d", &grande);

    valor = (pequeno * 10) + (medio * 12) + (grande * 15);

    printf("\n\tO valor arrecadado pela venda foi de %d reais\n", valor);


}
