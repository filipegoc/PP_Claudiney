#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, sucessor, antecessor;
    printf("Digite um numero inteiro: \n");
    scanf("%d", &num);
    antecessor = --num;
    sucessor = num + 2;
    printf("O seu antecessor e o sucessor sao: %d e %d", antecessor, sucessor);
    return 0;
}