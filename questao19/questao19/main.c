#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    //declaração de variaveis
    float larg, comp, areat;
    //entrada de dados
    printf("insira a largura do lote:\n");
    scanf("%f", &larg);

    printf("insira o comprimento do lote:\n");
    scanf("%f", &comp);
    //processamento
    areat = larg * comp;
    //saida
    printf("area total: %.1f", areat);
                      */
    int numero;

    printf("digite o numero:");
    scanf("%d", &numero);

    if(numero>=0)
    {
    if(numero==0){
        printf("o numero e zero");
    }else
        {
            printf("o numero e positivo");

        }

    }else
    { printf("o numero e negativo");

    }
}
