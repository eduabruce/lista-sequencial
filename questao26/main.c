#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declaração de variaveis
    float dist, veloc, tempo, veloms;
    //entrada de dados
    printf("insira o valor da distancia:\n");
    scanf("%f", &dist);

    printf("insira o valor da velocidade:\n");
    scanf("%f", &veloc);
    //processamento
    tempo = (dist/veloc)*60;

    veloms = veloc/3.6;
    //saida
    printf("tempo medio de chegada: %.f minutos\n", tempo);
    printf("velocidade em m/s: %.1f \n", veloms);

}
