#include <stdio.h>
#include <stdlib.h>

int main()
{
   //declaração de variaveis
   int anoatual, anonasc, idade, idadefutura;
   //entrada de dados
   printf("insira o ano de nascimento:\n");
   scanf("%d", &anonasc);

   printf("insira o ano atual:\n");
   scanf("%d", &anoatual);
   //processamento
   idade = anoatual - anonasc;
   idadefutura = 2028 - anonasc;
   //saida
   printf("idade atual: %d\n", idade);
   printf("idade futura: %d\n", idadefutura);
}
