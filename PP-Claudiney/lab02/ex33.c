#include <stdio.h>
#include <stdlib.h> 
#include <math.h>

int main()
{
    float l, a;
    printf("Digite o tamanho do lado de um quadrado e vamos calcular sua area: \n");
    scanf("%f", &l);
    a = pow(l, 2);
    printf("A area desse quadrado eh: %f", a);
    return 0;
}