#include <stdio.h>
#include <stdlib.h>

int main()
{
    float p, novoP;
    printf("Digite um preco de um produto: \n");
    scanf("%f", &p);
    novoP = p * 0.88;
    printf("O valor com desconto eh: %f", novoP);
    return 0;
}