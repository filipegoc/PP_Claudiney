#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a, b, c, d;
    printf("Digite o valor de a, b e c: ");
    scanf("%f %f %f", &a, &b, &c);
    d = pow(b, 2) - (4*a*c);
    if (a == 0)
    {
        printf("Nao eh equacao de segundo grau");
    }
    else
    {
        if (d < 0)
        {
            printf("Delta menor que zero, nao existe raiz.");
        }
        else if (d == 0)
        {
            printf("Raiz unica igual a %f", (-b / (2*a)));
        }
        else if (d > 0)
        {
            printf("%f e %f sao as raizes dessa equacao", (-b+sqrt(d)) / (2*a), (-b-sqrt(d)) / (2*a));
        }
    }
    return 0;
}
