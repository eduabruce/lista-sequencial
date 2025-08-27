#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declaração de variaveis
    int a, b, c, d, e, f, y, x;
    //entrada de dados
    printf("-- equacao linear --\n");

    printf("insira o valor de a:\n");
    scanf("%d", &a);

    printf("insira o valor de b:\n");
    scanf("%d", &b);

    printf("insira o valor de c:\n");
    scanf("%d", &c);

    printf("insira o valor de d:\n");
    scanf("%d", &d);

    printf("insira o valor de e:\n");
    scanf("%d", &e);

    printf("insira o valor de f:\n");
    scanf("%d", &f);
    //processamento
    y = ((a*f) - (c*d)) / ((a*e) - (b*d));

    x = ((c*e) - (b*f)) / ((a*e) - (b*d));
    //saida
    printf("valor de Y: %d\n", y);
    printf("valor de X: %d\n", x);

}
