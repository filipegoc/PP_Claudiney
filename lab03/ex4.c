#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float n1;
    printf("Digite um numero: ");
    scanf("%f", &n1);
    if (n1 > 0)
    {
        printf("O quadrado de %f eh %f \n", n1, pow(n1, 2));
        printf("e a raiz quadrada eh %f", sqrt(n1));
    }
    else
    {
        printf("O numero nao eh positivo");
    }
    return 0;
}