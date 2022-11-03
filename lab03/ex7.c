#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float n1, n2;
    printf("Digite o 1o numero: ");
    scanf("%f", &n1);
    printf("Digite o 2o numero: ");
    scanf("%f", &n2);
    if (n1 > n2)
    {
        printf("%f eh o maior numero", n1);
    }
    else if (n2 > n1)
    {
        printf("%f eh o maior numero", n2);
    }
    else{
        printf("Os dois numeros sao iguais");
    }
    return 0;
}