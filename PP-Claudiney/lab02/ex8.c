#include <stdio.h>
#include <stdlib.h>

int main()
{
    float C, K;
    printf("Digite uma temperatura em Kelvin e vamos calcula-la em Celsius: \n");
    scanf("%f", &K);
    C = K - 273.15;
    printf("A temperatura em kelvin eh %f", C);
    return 0;
}
