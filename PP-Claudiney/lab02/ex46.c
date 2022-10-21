#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, n1, n2, n3;
    printf("Digite um numero inteiro positivo de tres digitos e vamor inverte-lo: \n");
    scanf("%d", &num);
    n1 = num / 100;
    n2 = (num % 100) / 10;
    n3 = ((num % 100) % 10);
    printf("O numero invertido eh: %d%d%d", n3, n2, n1);
    return 0;
}