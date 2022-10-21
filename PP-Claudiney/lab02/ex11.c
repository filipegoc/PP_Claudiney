#include <stdio.h>
#include <stdlib.h>

int main()
{
    float kmh, ms;
    printf("Digite uma velocidade em m/s e vamos calcula-la em km/h: \n");
    scanf("%f", &ms);
    kmh = ms * 3.6;
    printf("A velocidade em km/h eh %f", kmh);
    return 0;
}