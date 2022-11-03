#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1, n2;
    printf("Digite o 1o valor: ");
    scanf("%f", &n1);
    printf("Digite o 2o valor: ");
    scanf("%f", &n2);
    if (n1 > n2)
    {
       printf("O maior valor dos dois eh %f", n1);
    }
    else if(n2 > n1)
    {
     printf("O maior valor dos dois eh %f", n2);
    }
    else
    {
        printf("Os dois valores sao iguais %f", n1);
    }
    return 0;
}