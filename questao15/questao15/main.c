#include <stdio.h>
#include <stdlib.h>

int main()
{
   int peso, pesog, aumentop;

   printf("insira o seu peso:\n");
   scanf("%d", &peso);

   pesog = peso *1000;

   aumentop = (peso + (peso*0.05))*1000;

   printf("o seu peso em gramas: %d\n", pesog);
   printf("o aumento do seu peso em gramas: %d\n", aumentop);
}
