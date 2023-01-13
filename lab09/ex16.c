#include <stdio.h>

void main()
{
    int a, *b, **c, ***d;
    printf("Digite um inteiro: ");
    scanf("%d", &a);
    b = &a;
    c = &b;
    d = &c;
    printf("Dobro: %d \nTriplo: %d \nQuadruplo: %d", *b*2, **c*3, ***d*4);
}