#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int op;
    float n1, n2;
    printf("Escolha qual o operacao voce quer fazer: \n");
    printf("    [1] ADICAO \n");
    printf("    [2] SUBTRACAO \n");
    printf("    [3] MULTIPLICACAO \n");
    printf("    [4] DIVISAO \n");
    scanf("%d", &op);
    if (op == 1)
    {
        printf("Digite os dois numeros que voce quer somar: ");
        scanf("%f %f", &n1, &n2);
        printf("O resultado da soma eh %f", n1 + n2);
    }
    else if (op == 2)
    {
        printf("Digite os dois numeros que voce quer subtrair: ");
        scanf("%f %f", &n1, &n2);
        printf("O resultado da subtracao eh %f", n1 - n2);
    }
    else if (op == 3)
    {
        printf("Digite os dois numeros que voce quer multiplicar: ");
        scanf("%f %f", &n1, &n2);
        printf("O resultado da multiplicacao eh %f", n1 * n2);
    }
    else if (op == 4)
    {
        printf("Digite os dois numeros que voce quer dividir: ");
        scanf("%f %f", &n1, &n2);
        printf("O resultado da divisao eh %f", n1 / n2);
    }
    else
    {
        printf("Opcao invalida");
    }
    return 0;
}