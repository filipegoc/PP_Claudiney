#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float bme, bma, h;
    printf("Digite a medida da base-menor do trapezio: ");
    scanf("%f", &bme);
    printf("Digite a medida da base-maior do trapezio: ");
    scanf("%f", &bma);
    printf("Digite a medida da altura do trapezio: ");
    scanf("%f", &h);
    if (bme <= 0 || bma <= 0 || h <= 0)
    {
        printf("numero invalido");
    }
    else
    {
        printf("A area do trapezio eh %f", ((bme + bma) * h) / 2);
    }
    return 0;
}