#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float n1;
    printf("Digite um numero e vamos calcular sua raiz quadrada: ");
    scanf("%f", &n1);
    if (n1 >= 0)
    {
       printf("A raiz quadrada de %f eh %f", n1, sqrt(n1));
    }
    else
    {
        printf("Nao se pode calcular a raiz de %f", n1);
    }
    return 0;
}