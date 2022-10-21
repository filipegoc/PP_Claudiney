#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float c, l, p, custo;
    printf("Digite a largura do terreno: \n");
    scanf("%f", &l);
    printf("Digite o comprimento do terreno: \n");
    scanf("%f", &c);
    printf("Digite o valor do metro da tela: \n");
    scanf("%f", &p);
    custo = (2 * l + 2 * c) * p;
    printf("O valor gasto para cerca o terreno sera %f", custo);
    return 0;
}