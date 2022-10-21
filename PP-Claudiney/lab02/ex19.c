#include <stdio.h>
#include <stdlib.h>

int main()
{
    float M, L;
    printf("Digite um volume em litros e vamos calcula-lo em m3: \n");
    scanf("%f", &L);
    M = L / 1000;
    printf("O volume em m3 eh %f", M);
    return 0;
}