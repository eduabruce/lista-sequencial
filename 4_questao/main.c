#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declaracao de variaveis
    float nota1, nota2, nota3, media;
    //entrada de dados
    printf("insira a primeira nota: \n");
    scanf("%f", &nota1);

    printf("insira a segunda nota: \n");
    scanf("%f", &nota2);

    printf("insira a terceira nota: \n");
    scanf("%f", &nota3);
    //processamento
    media = (nota1 + nota2 + nota3)/3;
    //saida
    printf("o valor da divisao: %.1f", media);


}
