#include <stdio.h>
#include <stdlib.h>

float areaquadrado(float d)
{
    float areaq;

    areaq = (d*d)/2;

    return areaq;
}
int main()
{
    float d;

    printf("insira o valor da diagonal do quadrado:\n");
    scanf("%f", &d);

    printf("a area do quadrado pela sua diagonal e %.1f unidades quadradas", areaquadrado(d));

}
