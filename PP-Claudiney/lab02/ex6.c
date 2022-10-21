#include <stdio.h>
#include <stdlib.h>

int main()
{
    float C, F;
    printf("Digite uma temperatura em Celsius e vamos calcula-la em fahrenheit: \n");
    scanf("%f", &C);
    F =(C * 1.8)+ 32;
    printf("A temperatura em Fahrenheit eh %f", F);
    return 0;
}