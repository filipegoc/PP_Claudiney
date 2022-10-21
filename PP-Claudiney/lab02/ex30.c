#include <stdio.h>
#include <stdlib.h>

int main()
{
    float real, dolar, cotacao;
    printf("Digite um valor em reais: \n");
    scanf("%f", &real);
    printf("Digite a cotacao do dolar: \n");
    scanf("%f", &cotacao);
    dolar = real / cotacao;
    printf("O valor equivalente em dolares eh: %f", dolar);
    return 0;
}