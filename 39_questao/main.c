#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declaracao de variaveis
    int temp, veloc, dist, combug;
    //entrada de dados
    printf("insira o tempo de viagem:\n");
    scanf("%d", &temp);

    printf("insira a velocidade media:\n");
    scanf("%d", &veloc);
    //processamento
    dist = temp*veloc;
    combug = dist/12;
    //saida
    printf("distancia percorrida: %d km\n", dist);
    printf("combustivel gasto: %d litros\n", combug);
}
