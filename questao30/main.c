#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declaração de variaveis
    float pcusto, acresc, valorv;
    //entrada de dados
    printf("informe o preco de custo:\n");
    scanf("%f", &pcusto);

    printf("informe o percentual de acrescimo:\n");
    scanf("%f", &acresc);
    //processamento
    valorv = pcusto*(1+acresc/100);
    //saida
    printf("valor de venda: %.f\n", valorv);


}
