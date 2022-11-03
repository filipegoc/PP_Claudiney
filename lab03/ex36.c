#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float v;
    printf("Digite o valor mensal vendido: ");
    scanf("%f", &v);
    if (v >= 0 && v < 20000)
    {
        printf("Sua comissao sera de R$ %f", 400 + v * .14);
    }
    else if (v >= 20000 && v < 40000)
    {
        printf("Sua comissao sera de R$ %f", 500 + v * .14);
    }
    else if (v >= 40000 && v < 60000)
    {
        printf("Sua comissao sera de R$ %f", 550 + v * .14);
    }
    else if (v >= 60000 && v < 80000)
    {
        printf("Sua comissao sera de R$ %f", 600 + v * .14);
    }
    else if (v >= 80000 && v < 100000)
    {
        printf("Sua comissao sera de R$ %f", 650 + v * .14);
    }
    else if (v >= 100000)
    {
        printf("Sua comissao sera de R$ %f", 700 + v * .16);
    }
    return 0;
}