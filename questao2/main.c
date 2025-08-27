#include <stdio.h>
#include <stdlib.h>

int main()
{
    //DECLARAÇÃO DE VARIÁVEIS
    float num1, num2, sub;
    //ENTRADA DE DADOS
    printf("insira o primeiro valor: \n");
    scanf("%f", &num1);

    printf("insira o segundo valor: \n");
    scanf("%f", &num2);
    //PROCESSAMENTO
    sub = num1 - num2;
    //SAIDA
    printf("o valor da soma: %.1f", sub);

}
