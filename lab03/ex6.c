#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n1, n2;
    printf("Digite o 1o numero inteiro: ");
    scanf("%d", &n1);
    printf("Digite o 2o numero inteiro: ");
    scanf("%d", &n2);
    if (n1 > n2)
    {
        printf("%d eh o maior numero, e a diferenca entre eles eh %d ", n1, n1-n2 );
    }
    else if (n2 > n1)
    {
        printf("%d eh o maior numero, e a diferenca entre eles eh %d ", n2, n2-n1 );
    }
    else{
        printf("Os dois numeros sao iguais");
    }
    return 0;
}