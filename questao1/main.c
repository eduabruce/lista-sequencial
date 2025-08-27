#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declaracoes de variaveis
    int soma=0, num1, num2;
    //entrada de dados
    printf("insira o primeiro numero:\n");
    scanf("%d", &num1);

    printf("insira o segundo numero:\n");
    scanf("%d", &num2);
    //processamento
    soma = num1 + num2;
    //saida
    printf("soma dos numeros: %d\n", soma);
}
