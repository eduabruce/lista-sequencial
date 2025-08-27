#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salariofun, imposto, salariof;

    printf("insira o salario do funcionario:\n");
    scanf("%f", &salariofun);

    imposto = (salariofun*5)/100;

    printf("valor a ser pago no imposto de renda: %.1f\n", imposto);

    salariof = salariofun - imposto;

    printf("valor do salario com imposto de renda pago: %.1f\n", salariof);
}
