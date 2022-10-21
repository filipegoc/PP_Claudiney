#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a, r;
    printf("Digite o raio de um circulo e vamos calcular sua area: \n");
    scanf("%f", &r);
    a = 3.141592 * pow(r, 2);
    printf("A area do circulo correspondente eh: %f", a);
    return 0;
}

