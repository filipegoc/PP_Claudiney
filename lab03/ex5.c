#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n1, resto;
    printf("Digite um numero inteiro: ");
    scanf("%d", &n1);
    resto = n1 % 2;
    if (resto == 0)
    {
        printf("O numero eh par \n");
    }
    else
    {
        printf("O numero eh impar \n");
    }
    return 0;
}