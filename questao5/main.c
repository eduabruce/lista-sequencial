#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declaracao de variaveis
    float nota1, nota2, nota3, mediaponderada;
    int   peso1, peso2, peso3, somap;
    //entrada de dados
    printf("insira a primeira nota: \n");
    scanf("%f", &nota1);
    printf("insira a segunda nota: \n");
    scanf("%f", &nota2);
    printf("insira a terceira nota: \n");
    scanf("%f", &nota3);

    printf("insira o peso da primeira nota: \n");
    scanf("%d", &peso1);
    printf("insira o peso da segunda nota: \n");
    scanf("%d", &peso2);
    printf("insira da terceira nota: \n");
    scanf("%d", &peso3);

    //processamento
    somap = peso1+peso2+peso3;
    mediaponderada = (nota1*2) + (nota2*2) + (nota3*2)/somap;
    //saida
    printf("o valor da divisao: %.1f", mediaponderada);

}
