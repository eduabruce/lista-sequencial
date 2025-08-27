#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    //declaração de variaveis
    float altDg, altD;
    int degraus;
    //entrada de dados
    printf("insira a altura do degrau:\n");
    scanf("%f", &altDg);

    printf("insira a altura desejada:\n");
    scanf("%f", &altD);
    //processamento
    degraus = ceil(altD / altDg);
    //saida
    printf("degraus a ser subidos: %d\n", degraus);

}
