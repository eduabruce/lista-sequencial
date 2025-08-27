#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declaração de variaveis
    char nome1[50], nome2[50], nome3[50];

    //entrada de dados
    printf("insira o primeiro nome:\n");
    scanf("%s", &nome1);

    printf("insira o primeiro nome:\n");
    scanf("%s", &nome2);

    printf("insira o primeiro nome:\n");
    scanf("%s", &nome3);

    //processamento e saida
    printf("1 nome: %s  ||  3 nome: %s\n", nome1, nome3);
    printf("2 nome: %s", nome2);



}
