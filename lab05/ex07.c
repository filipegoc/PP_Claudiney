#include <stdio.h>

int conversao(float c){
    return c*1.8+32;
}

int main()
{
    float celsius, fahrenheit;
    printf("Digite a temperatura em Celsius e vamos converte-la para Fahrenheit: ");
    scanf("%f", &celsius);
    fahrenheit= conversao(celsius);
    printf("O tempo temperatura em Fahrenheit eh %.2f", fahrenheit);
    return 0;
}