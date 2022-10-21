#include <stdio.h>
#include <stdlib.h>

int main()
{
    float m, j;
    printf("Digite um comprimento em metros e vamos calcula-lo em jardas: \n");
    scanf("%f", &m);
    j = m / 0.91;
    printf("O comprimento em jardas eh: %f", j);
    return 0;
}