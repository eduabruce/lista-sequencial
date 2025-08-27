#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declaração de variaveis
    float vprod, novovprod;
    //entrada de dados
    printf("insira o valor do produto:\n");
    scanf("%f", &vprod);
    //processamento
    novovprod = vprod - (vprod*0.09);
    //saida
    printf("novo valor do produto com desconto: %.2f\n", novovprod);
}
