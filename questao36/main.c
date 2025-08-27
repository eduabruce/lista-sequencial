#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declaracao de variaveis
    float peso, altura, imc;
    //entrada de dados
    printf("insira o peso:\n");
    scanf("%f", &peso);

    printf("insira a altura:\n");
    scanf("%f", &altura);
    //processamento
    imc = peso/(altura*altura);
    //saida
    printf("o indice de massa corporea: %.2f\n", imc);

}
