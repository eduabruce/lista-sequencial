#include <stdio.h>
#include <stdlib.h>

int main()
{
   float salariofun, salariof;

    printf("insira o salario do funcionario:\n");
    scanf("%f", &salariofun);

    salariof = salariofun + (salariofun*0.25);

    printf("valor do salario final com aumento: %.1f\n", salariof);
}
