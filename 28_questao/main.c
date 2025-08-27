#include <stdio.h>
#include <stdlib.h>

int main()
{
   //declaração de variaveis
   int celsius, fah;

   printf("-- Temperatura de Celsius --> Temperatura de Fahrenheit--\n");
   //entrada de dados
   printf("insira a temperatura em celsius:\n");
   scanf("%d", &celsius);
   //processamento
   fah = (9*celsius + 160)/5;
   //saida
   printf("temperatura em Fahrenheit: %d F\n", fah);


}
