#include <stdio.h>
#include <stdlib.h>

int main()
{
    float C, F;
    printf("Digite uma temperatura em Fahrenheit e vamos calcula-la em Celsius: \n");
    scanf("%f", &F);
    C = (F - 32) / 1.8;
    printf("A temperatura em Celsius eh %f", C);
    return 0;
}