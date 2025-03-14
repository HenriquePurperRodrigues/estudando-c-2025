#include <stdio.h>

/*
Num dia de sol, voc� deseja medir a altura de um pr�dio, por�m, a trena n�o �
suficientemente longa. Assumindo que seja poss�vel medir sua sombra e a do pr�dio no
ch�o, e que voc� lembre da sua altura, fa�a um algoritmo para ler os dados necess�rios
e calcular a altura do pr�dio.
*/

int main()
{
    float alturaPessoa, sombraPessoa, sombraPredio, alturaPredio;

    printf("Digite a sua altura: ");
    scanf("%f", &alturaPessoa);

    printf("\nDigite a largura da sua sombra: ");
    scanf("%f", &sombraPessoa);

    printf("\nDigite a largura da sombra do pr�dio: ");
    scanf("%f", &sombraPredio);

    alturaPredio = alturaPessoa * sombraPredio / sombraPessoa;

    printf("\nEsse pr�dio mede %.2f metros\n", alturaPredio);

    return 0;

}
