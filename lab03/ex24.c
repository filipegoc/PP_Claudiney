#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
    int op;
    float valor;
    printf("Qual o estado de destino? \n");
    printf("     [1] Minas Gerais \n");
    printf("     [2] Sao Paulo \n");
    printf("     [3] Rio de Janeiro \n");
    printf("     [4] Mato Grosso do Sul \n");
    printf("opcao: ");
    scanf("%d", &op);
    if(op == 1)
    {
        printf("Digite o valor do produto: ");
        scanf("%f", &valor);
        printf("O preco final ficara %.2f", valor*1.07);
    }
    else if(op == 2)
    {
        printf("Digite o valor do produto: ");
        scanf("%f", &valor);
        printf("O preco final ficara %.2f", valor*1.12);
    }
    else if(op == 3)
    {
        printf("Digite o valor do produto: ");
        scanf("%f", &valor);
        printf("O preco final ficara %.2f", valor*1.15);
    }
    else if(op == 4)
    {
        printf("Digite o valor do produto: ");
        scanf("%f", &valor);
        printf("O preco final ficara %.2f", valor*1.08);
    }
    else
    {
        printf("Opcao invalida");
    }
    return 0;
}