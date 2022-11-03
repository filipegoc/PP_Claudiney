#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float n1, n2;
    printf("Digite sua 1a nota: ");
    scanf("%f", &n1);
        if (n1 > 10 || n1 < 0)
    {
        printf("nota 1 invalida");
        return 0;
    }
    printf("Digite sua 2a nota: ");
    scanf("%f", &n2);
    if (n2 > 10 || n2 < 0)
    {
        printf("nota 2 invalida");
        return 0;
    }
    printf("Sua media eh %f", (n1+n2) / 2);
    return 0;
}
