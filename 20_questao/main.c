#include <stdio.h>
#include <stdlib.h>

int main()
{
     //declaracao de variaveis
     int valor1, valor2, valor3, media=0, soma=0, rest1, rest2, rest3;
     //entrada de dados
     printf("insira o primeiro valor:\n");
     scanf("%d", &valor1);

     printf("insira o primeiro valor:\n");
     scanf("%d", &valor2);

     printf("insira o primeiro valor:\n");
     scanf("%d", &valor3);
     //processamento
     soma = valor1+valor2+valor3;
     media = soma/3;

     rest1 = soma%valor1;
     rest2 = soma%valor2;
     rest3 = soma%valor3;
     //saida
     printf("somatorio: %d\n", soma);
     printf("media: %d\n", media);
     printf("resto da divisao 1: %d\n", rest1);
     printf("resto da divisao 2: %d\n", rest2);
     printf("resto da divisao 3: %d\n", rest3);




}
