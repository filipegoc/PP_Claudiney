#include <stdio.h>

int main()
{
    float i, n;
    printf("Digite um numero natural e vamos imprimir de 0 ao numero escolhido: ");
    scanf("%f", &n);
    for(i=0; i<=n; i++)
    {
        printf("\n %f", i);
    }
    return 0;
}