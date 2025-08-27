#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declaracao de variaveis
   float numerotE, numvotos1, numvotos2, votonulo, porc1, porc2;
   //entrada de dados
   printf("insira o numero total de eleitores:\n");
   scanf("%f", &numerotE);

   printf("insira o numero de votos do 1 candidato:\n");
   scanf("%f", &numvotos1);

   printf("insira o numero de votos do 2 candidato:\n");
   scanf("%f", &numvotos2);
   //processamento
   porc1 = (numvotos1/numerotE)*100;

   porc2 = (numvotos2/numerotE)*100;

   votonulo = numerotE - (numvotos1+numvotos2);
   //saida
   printf("porcentual de votos do primeiro candidato: %.1f\n", porc1);
   printf("porcentual de votos do segundo candidato: %.1f\n", porc2);
   printf("porcentual de votos nulos: %.1f", votonulo);

}
