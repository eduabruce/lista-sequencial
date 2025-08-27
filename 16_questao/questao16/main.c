#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declaração de variaveis
   int anonasc, anoatual, idadecv, idade;
   //entrada de dados
   printf("insira o ano de nascimento:\n");
   scanf("%d", &anonasc);

   printf("insira o ano atual:\n");
   scanf("%d", &anoatual);
   //processamento
   idade = anoatual - anonasc;

   idadecv = idade * 52;
   //saida de dados
   printf("idade: %d\n", idade);
   printf("idade convertida em semanas: %d\n", idadecv);
}
