#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declara��o de variaveis
    float valorc, valorp;
    //entrada de dados
    printf("insira o valor da compra:\n");
    scanf("%f", &valorc);
    //processamento
    valorp = valorc/5;
    //saida
    printf("valor das prestacoes: %.1f\n", valorp);
}
