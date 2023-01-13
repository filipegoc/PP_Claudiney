#include <stdio.h>

#define pi 3.14159265359

void calc_esfera(float *r);

void main()
{
    float r, *pr = &r;
    printf("Digite o raio da esfera e vamos calcular sua area e superficie: ");
    scanf("%f", &r);
    calc_esfera(pr);
}

void calc_esfera(float *raio){
    printf("Area da Superficie: %.2f", 4*pi*(*raio)*(*raio));
    printf("\nVolume: %.2f", 4/3*pi*(*raio)*(*raio)*(*raio));
}