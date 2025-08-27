#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    //declaração de variaveis
   float p, i, n, valorac;
   //entrada de dados
   printf("insira o valor de aplicacao mensal:\n");
   scanf("%f", &p);

   printf("insira o valor da taxa:\n");
   scanf("%f", &i);

   printf("insira o numero de meses:\n");
   scanf("%f", &n);
   //processamento
   valorac = (p* pow((1+i), n)-1)/i;
   //saida
   printf("valor acumulado:%.2f\n", valorac);
}
