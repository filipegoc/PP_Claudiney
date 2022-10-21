#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num, quadrado;
    printf("Digite um numero real e vamos calcular seu quadrado: \n");
    scanf("%f", &num);
    quadrado = num * num;
    printf("O quadrado do numero digitado eh %f", quadrado);
    return 0;
}
