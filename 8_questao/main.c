#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    //declaracao de variaveis
    int num, quadrado;
    double raiz;
    //entrada de dados
    printf("insira um numero:\n");
    scanf("%d", &num);
    //processamento
    raiz = sqrt(num);

    quadrado = pow(num,2);
    //saida
    printf("raiz quadrada:%.1f\n", raiz);
    printf("numero elevado ao quadrado: %d\n", quadrado);

}
