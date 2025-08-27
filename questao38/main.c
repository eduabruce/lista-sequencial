#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    //declaração de variaveis
    float custoE, precoC,venderl, cobrirc;

    //entrada de dados
    printf("insira o custo do espetaculo:\n");
    scanf("%f", &custoE);

    printf("insira o preco de cada convite:\n");
    scanf("%f", &precoC);
    //processamento
    cobrirc = ceil(custoE/precoC);

    venderl = (custoE*1.23)/precoC;
    //saida
    printf("a quantidade de convites que devem ser vendidos: %.2f\n", cobrirc);

    printf("a quantidade de convites que devem ser vendidos para que se tenha um lucro: %.2f\n", venderl);



}
