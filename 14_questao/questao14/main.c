#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declaracao variaveis
    float salariom, qtdk, i, valorpagar, valordesconto;

    for(i=0; i<3; i++)
    {
        //entrada de dados
        printf("insira o valor do salario minimo:\n");
        scanf("%f", &salariom);

        printf("insira o valor gasto de kilowatt:\n");
        scanf("%f", &qtdk);
        //processamento
        valorpagar = salariom - qtdk;

        valordesconto = valorpagar - (valorpagar*0.15);
        //saida
        printf("valor kilowatt: %.1f\n", qtdk);
        printf("valor a ser pago: %.1f\n", valorpagar);
        printf("valor a ser pago com desconto: %.1f\n", valordesconto);
    }


}
