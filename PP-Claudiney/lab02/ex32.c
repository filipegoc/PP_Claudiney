#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, soma;
    soma = 0;
    printf("Digite um numero inteiro: \n");
    scanf("%d", &num);
    soma = (num * 3 + 1) + (2 * num -1) ;
    printf("A soma do sucessor de seu triplo com o antecessor de seu dobro eh %d", soma);
    return 0;
}
