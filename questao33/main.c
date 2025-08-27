#include <stdio.h>
#include <stdlib.h>

int main()
{
     //declaração de variaveis
     float salariofun, nsalario;
     //entrada de dados
     printf("insira o salario:\n");
     scanf("%f", &salariofun);
     //processamento
     nsalario = salariofun+(salariofun*0.37);
     //saida
     printf("o novo salario com aumento: %.2f\n", nsalario);

}
