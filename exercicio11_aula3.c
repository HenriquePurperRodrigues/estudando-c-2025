#include <stdio.h>

//Fa�a um algoritmo para ler tr�s notas de um aluno em uma disciplina e imprimir a
//sua m�dia ponderada (as notas tem pesos respectivos de 1, 2 e 3).

int main()
{
    float nota1, nota2, nota3, media;

    printf("Digite a nota 1: ");
    scanf("%f", &nota1);

    printf("Digite a nota 2: ");
    scanf("%f", &nota2);

    printf("Digite a nota 3: ");
    scanf("%f", &nota3);

    media = (nota1 + nota2 * 2 + nota3 * 3) / 6;

    printf("\nSua m�dia � de %.2f\n ", media);


}
