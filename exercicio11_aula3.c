#include <stdio.h>

//Faça um algoritmo para ler três notas de um aluno em uma disciplina e imprimir a
//sua média ponderada (as notas tem pesos respectivos de 1, 2 e 3).

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

    printf("\nSua média é de %.2f\n ", media);


}
