#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int op;
    float n1, n2;
    printf("Escolha a opcao: \n");
    printf("[1] Soma de 2 numeros.\n");    
    printf("[2] Diferenca entre 2 numeros (maior pelo menor).\n");   
    printf("[3] Produto entre 2 numeros.\n");    
    printf("[4] Divisao entre 2 numeros (o denominador nao pode ser zero).\n");    
    printf(" Opcao: ");   
    scanf("%d", &op);
    if (op == 1)
    {
        printf("Digite os numeros que voce quer fazer a soma: ");
        scanf("%f %f", &n1, &n2);
        printf("A soma eh %f", n1+n2);
    }
    else if (op == 2)
    {
        printf("Digite os numeros que voce quer fazer a diferenca: ");
            scanf("%f %f", &n1, &n2);
        if (n1>=n2)
        {
            printf("A difirenca eh %f", n1-n2);
        }
        else
        {
            printf("A difirenca eh %f", n2-n1);
        }
    }
    else if (op == 3)
        {
            printf("Digite os numeros que voce quer fazer o produto: ");
            scanf("%f %f", &n1, &n2);
            printf("O produto eh %f", n1*n2);
        }
    else if (op == 4)
    {
        printf("Digite os numeros que voce quer fazer a divisao: ");
        scanf("%f %f", &n1, &n2);
        if (n2 == 0)
        {
            printf("Divisao invalida");
        }
        else
        {
            printf("A divisao eh %f", n1/n2);
        }
    }
    else
    {
        printf("Opcao invalida");
    }
    return 0;
}