#include <stdio.h>
#include <stdlib.h>

int main()
{
    float C, K;
    printf("Digite uma temperatura em celsius e vamos calcula-la em kelvin: \n");
    scanf("%f", &C);
    K = C + 273.15;
    printf("A temperatura em kelvin eh %f", K);
    return 0;
}