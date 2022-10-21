#include <stdio.h>
#include <stdlib.h>

int main()
{
    float valor;
    printf("Digite o valor total: ");
    scanf("%f", &valor);
    printf("O valor com desconto de 10 por cento: %f \n", valor * 0.9);
    printf("O valor de cada parcela de 3 vezes: %f \n", valor / 3);
    printf("A comissao do vendedor em venda a vista: %f \n", valor * 0.9 * 0.05);
    printf("A comissao do vendedor em venda parcelada: %f", valor * 0.05);
    return 0;
}