#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declaração de variaveis
    float vprod1, vprod2, vprod3, total=0, qtd1, qtd2, qtd3;
    //entrada de dados
    printf("insira a quantidade do produto 1:\n");
    scanf("%f", &qtd1);

    printf("insira o valor do produto 1:\n");
    scanf("%f", &vprod1);

    printf("insira a quantidade do produto 2:\n");
    scanf("%f", &qtd2);

    printf("insira o valor do produto 2:\n");
    scanf("%f", &vprod2);

    printf("insira a quantidade do produto 3:\n");
    scanf("%f", &qtd3);

    printf("insira o valor do produto 3:\n");
    scanf("%f", &vprod3);
    //processamento
    total = (qtd1*vprod1) + (qtd2*vprod2)+ (qtd3*vprod3);
    //saida
    printf("valor total: %.1f\n", total);

}
