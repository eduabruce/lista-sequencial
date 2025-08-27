#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declaração de variaveis
    float vprod1, vprod2, vprod3, vprod4, vprod5, clientep, total=0, troco=0;
    //entrada de dados
    printf("insira o valor do primeiro produto:\n");
    scanf("%f", &vprod1);

    printf("insira o valor do segundo produto:\n");
    scanf("%f", &vprod2);

    printf("insira o valor do terceiro produto:\n");
    scanf("%f", &vprod3);

    printf("insira o valor do quarto produto:\n");
    scanf("%f", &vprod4);

    printf("insira o valor do quinto produto:\n");
    scanf("%f", &vprod5);
    //processamento
    total = vprod1 + vprod2 + vprod3 + vprod4 +vprod5;
    //saida
    printf("total compra: %.f\n", total);
    //entrada de dados
    printf("insira quanto pagou:\n");
    scanf("%f", &clientep);
    //processamento
    troco = clientep - total;
    //saida
    printf("troco: %.f\n", troco);

}
