#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declaração de variaveis
    float custof, custoc;
    //entrada de dados
    printf("insira o custo de fabrica:\n");
    scanf("%f", &custof);
    //processamento
    custoc = (custof+(custof*0.45))*1.28;
    //saida
    printf("custo do consumidor de um carro: %.3f\n", custoc);
}
