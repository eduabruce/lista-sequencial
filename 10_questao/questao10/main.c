#include <stdio.h>
#include <stdlib.h>

int main()
{
    //DECLARACAO DE VARIAVEIS
    float base, alt, lado, raio, basem, basemen, diagm, diagn, pi=3.14;
    float areat, areaq, areac, areatr, arear, areaL;

    printf("-- triangulo --\n");
    //ENTRADA DE DADOS
    printf("insira a base do triangulo: ");
    scanf("%f", &base);
    printf("insira a altura do triangulo: ");
    scanf("%f", &alt);
    //PROCESSAMENTO
    areat = (base * alt) / 2;
    //SAIDA
    printf("area do triangulo: %.1f\n", areat);

    printf("-- quadrado --\n");
    //ENTRADA DE DADOS
    printf("insira o lado do quadrado: ");
    scanf("%f", &lado);
    //PROCESSAMENTO
    areaq = lado * lado;
    //SAIDA
    printf("area do quadrado: %.1f\n", areaq);

    printf("-- circulo --\n");
    //ENTRADA DE DADOS
    printf("insira o raio do circulo:\n");
    scanf("%f", &raio);
    //PROCESSAMENTO
    areac = pi * (raio*raio);
    //SAIDA
    printf("area do circulo: %.1f\n", areac);

    printf("-- trapezio --\n");
    //ENTRADA DE DADOS
    printf("insira a base maior do trapezio: ");
    scanf("%f", &basem);
    printf("insira a base menor do trapezio: ");
    scanf("%f", &basemen);
    printf("insira a altura do trapezio: ");
    scanf("%f", &alt);
    //PROCESSAMENTO
    areatr = ((basem + basemen) * alt) / 2;
    //SAIDA
    printf("area do trapezio: %.1f\n", areatr);

    printf("-- retangulo --\n");
    //ENTRADA DE DADOS
    printf("insira a base do retangulo: ");
    scanf("%f", &base);
    printf("insira a altura do retangulo: ");
    scanf("%f", &alt);
    //PROCESSAMENTO
    arear = base * alt;
    //SAIDA
    printf("area do retangulo: %.1f\n", arear);

    printf("-- losango --\n");
    //ENTRADA DE DADOS
    printf("insira a diagonal maior do losango: ");
    scanf("%f", &diagm);
    printf("insira a diagonal menor do losango: ");
    scanf("%f", &diagn);
    //PROCESSAMNETO
    areaL = (diagm * diagn) / 2;
    //SAIDA
    printf("area do losango: %.1f\n", areaL);

}
