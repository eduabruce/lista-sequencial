#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declaração de variaveis
   int a, b, c, aux;
   //entrada de dados
   printf("insira o valor de A:\n");
   scanf("%d", &a);

   printf("insira o valor de B:\n");
   scanf("%d", &b);

   printf("insira o valor de C:\n");
   scanf("%d", &c);
   //processamento
   aux = a;
   a = b;
   b = c;
   c = aux;

   //saida
   printf("A com o valor de B:%d\n", a);
   printf("B com o valor de C:%d\n", b);
   printf("C com o valor de A:%d\n", c);

}
