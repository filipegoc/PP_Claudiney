#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float cat1, cat2, h;
    printf("Digite o valor do 1o cateto: \n");
    scanf("%f", &cat1);
    printf("Digite o valor do 2o cateto: \n");
    scanf("%f", &cat2);
    h = sqrt((pow(cat1, 2) + pow(cat2, 2)));
    printf("O valor da hipotenusa eh %f", h);
    return 0;
}