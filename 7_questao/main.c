#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    //declaracao de variaveis
    int a, b, numelva, numelvb;
    //entrada de dados
    printf("insira o valor para a:\n");
    scanf("%d", &a);
    printf("insira o valor para b:\n");
    scanf("%d", &b);
    // processamento

    numelvb = pow(a,b);


    numelva = pow(b,a);

    // sáida
    printf("A elevado a B: %d\n",numelvb);
    printf("B elevado a A: %d\n", numelva);


}
