#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float va, vn;
    printf("Digite o valor antigo do produto: ");
    scanf("%f", &va);
    if (va <= 50 && va > 0)
    {
        vn = va * 1.05;
    }
    else if (va > 50 && va <= 100)
    {
        vn =  va * 1.1;
    }
    else if (va > 100)
    {
        vn =  va * 1.15;
    }
    
    if (vn <= 80)   
    {
        printf("O novo preco eh R$ %.2f e o produto esta barato", vn);
    }
    else if (vn > 80 && vn <= 120)   
    {
        printf("O novo preco eh R$ %.2f e o produto esta com preco normal", vn);
    }
    else if (vn > 120 && vn <= 200)   
    {
        printf("O novo preco eh R$ %.2f e o produto caro", vn);
    }
    else if (vn > 200)   
    {
        printf("O novo preco eh R$ %.2f e o produto muito caro", vn);
    }
    return 0;
}