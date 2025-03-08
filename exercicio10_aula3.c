#include <stdio.h>

//A padaria AJB vende uma certa quantidade de pães franceses e uma quantidade de
//broas a cada dia. Cada pãozinho custa R$ 0,12 e a broa custa R$ 1,50. Ao final do dia, o
//dono quer saber quanto arrecadou com a venda dos pães e broas (juntos), e quanto
//deve guardar numa conta de poupança (10% do total arrecadado). Você foi contratado
//para fazer os cálculos para o dono. Com base nestes fatos, faça um algoritmo para ler as
//quantidades de pães e de broas, e depois calcular os dados solicitados


int main()
{
    int paes, broas;
    float montanteTotal, poupanca;

    printf("Quantas paẽs você vendeu? ");
    scanf("%d", &paes);

    printf("Quantas broas você vendeu? ");
    scanf("%d", &broas);

    montanteTotal = (paes * 0.12) + (broas * 1.5);
    poupanca = montanteTotal * 0.1;

    printf("\n\nVocê vendeu um montante de R$%.2f", montanteTotal);
    printf("\nValor para guardar na poupança R$%.2f", poupanca);

}
