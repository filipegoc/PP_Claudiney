#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int cod;
    float qnt;
    printf("Digite o codigo do produto: ");
    scanf("%d", &cod);
    if (cod == 100)
    {
        printf("Quantos Cachorros Quentes foram consumidos? ");
        scanf("%f", &qnt);
        printf("O valor a ser pago eh de R$ %.2f", qnt * 1.2);
    }
    else if (cod == 101)
    {
        printf("Quantos Baurus Simples foram consumidos? ");
        scanf("%f", &qnt);
        printf("O valor a ser pago eh de R$ %.2f", qnt * 1.3);
    }
    else if (cod == 102)
    {
        printf("Quantos Baurus com Ovo foram consumidos? ");
        scanf("%f", &qnt);
        printf("O valor a ser pago eh de R$ %.2f", qnt * 1.5);
    }
    else if (cod == 103)
    {
        printf("Quantos Hamburguers foram consumidos? ");
        scanf("%f", &qnt);
        printf("O valor a ser pago eh de R$ %.2f", qnt * 1.2);
    }
    else if (cod == 104)
    {
        printf("Quantos Cheeseburguers foram consumidos? ");
        scanf("%f", &qnt);
        printf("O valor a ser pago eh de R$ %.2f", qnt * 1.7);
    }
    else if (cod == 105)
    {
        printf("Quantos Sucos foram consumidos? ");
        scanf("%f", &qnt);
        printf("O valor a ser pago eh de R$ %.2f", qnt * 2.2);
    }
    else if (cod == 106)
    {
        printf("Quantos Refrigerantes foram consumidos? ");
        scanf("%f", &qnt);
        printf("O valor a ser pago eh de R$ %.2f", qnt);
    }    
    else
    {
        printf("Codigo invalido");
    }
    return 0;
}