#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declaracao de variaveis
    int num1, num2, divisao;
    //entrada de dados
    printf("insira o primeiro valor: \n");
    scanf("%d", &num1);

    printf("insira o segundo valor: \n");
    scanf("%d", &num2);
    //processamento
    divisao = num1/num2;
    //saida
    printf("o valor da divisao: %d", divisao);

}
