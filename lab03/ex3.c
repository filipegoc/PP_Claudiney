#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float n1;
    printf("Digite um numero real: ");
    scanf("%f", &n1);
    if (n1 > 0)
    {
       printf("A raiz quadrada de %f eh %f", n1, sqrt(n1));
    }
    else
    {
        printf("O quadrado de %f eh %f", n1, pow(n1, 2));
    }
    return 0;
}