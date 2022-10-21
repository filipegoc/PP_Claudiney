#include <stdio.h>
#include <stdlib.h>

int main()
{
    float kmh, ms;
    printf("Digite uma velocidade em km/h e vamos calcula-la em m/s: \n");
    scanf("%f", &kmh);
    ms = kmh / 3.6;
    printf("A velocidade em m/s eh %f", ms);
    return 0;
}