#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declaracao de variaveis
    float numapart, valorD, diariapromo, valort70, valort100, perdaH;
    //entrada de dados
    printf("insira o valor da diaria:\n");
    scanf("%f", &valorD);

    printf("insira o numero de apartamentos:\n");
    scanf("%f", &numapart);
    //processamento
    diariapromo = valorD*(1-0.25);

    valort100 = diariapromo*numapart;

    valort70 = diariapromo*numapart*0.7;

    perdaH = (valorD*numapart) - (diariapromo*numapart);
    //saida
    printf("valor promocional da diaria: %.2f\n", diariapromo);
    printf("valor total a ser arrecadado na ocupacao de 100: %.2f\n", valort100);
    printf("valor total a ser arrecadado na ocupacao de 70: %.2f\n", valort70);
    printf("valor que o hotel deixa de arrecadar com a promocao: %.2f\n", perdaH);


}
