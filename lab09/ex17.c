#include <stdio.h>

void frac(float *num);

void main()
{
    float n, *pn = &n;
    printf("Digite um numero real: ");
    scanf("%f", &n);
    frac(pn);
}

void frac(float *num){
    int inteiro;
    float fracionario;
    inteiro = *num;
    fracionario = *num - inteiro;
    printf("Parte inteira: %d \nParte fracionaria: %f", inteiro, fracionario);
}