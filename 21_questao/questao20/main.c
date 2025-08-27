#include <stdio.h>
#include <stdlib.h>

int main()
{
   //declaracao de variaveis
   float comp, larg, prof, volume, custot;
   // entrada de dados
   printf("insira o comprimento da piscina:\n");
   scanf("%f", &comp);

   printf("insira a largura da piscina:\n");
   scanf("%f", &larg);

   printf("insira a profundidade da piscina:\n");
   scanf("%f", &prof);
   //processamento
   volume = comp * larg * prof;

   custot = volume * 45;
   //saida
   printf("o valor total da construcao: %.1f", custot);
}
