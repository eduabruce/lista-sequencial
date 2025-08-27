#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declaração de variaveis
    float salariof, salariom, qtd;
    //entrada de dados
    printf("insira o valor do salario minimo:");
    scanf("%f", &salariom);

    printf("insira o salario do funcionario:");
    scanf("%f", &salariof);
    //processamento
    qtd = salariof/salariom;
    //saida
    printf("quantidade de salarios que o funcionario ganhou: %.f", qtd);
}
