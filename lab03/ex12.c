#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
    float num;
    printf("Digite um numero inteiro: ");
    scanf("%f", &num);
    if(num > 0){
        printf("O logaritmo de %f na base 10 eh %f", num, log10(num));
    }
    else{
        printf("numero invalido");
    }
    return 0;
}