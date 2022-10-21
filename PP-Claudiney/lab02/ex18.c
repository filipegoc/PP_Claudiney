#include <stdio.h>
#include <stdlib.h>

int main()
{
    float M, L;
    printf("Digite um volume em m3 e vamos calcula-lo em litros: \n");
    scanf("%f", &M);
    L = M * 1000;
    printf("O volume em litros eh %f", L);
    return 0;
}