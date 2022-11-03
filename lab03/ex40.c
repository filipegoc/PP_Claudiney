#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float custo;
    printf("Digite o custo de fabrica: ");
    scanf("%f", &custo);
    if (custo > 0 && custo <= 12000)
    {
        printf("O valor final eh de R$ %.2f", custo * 1.05);
    }
    else if (custo > 12000 && custo <= 25000)
    {
        printf("O valor final eh de R$ %.2f", custo * 1.25);
    }
    else if (custo > 25000)
    {
        printf("O valor final eh de R$ %.2f", custo * 1.35);
    }
    return 0;
}