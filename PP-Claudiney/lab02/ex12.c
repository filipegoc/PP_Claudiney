#include <stdio.h>
#include <stdlib.h>

int main()
{
    float km, mi;
    printf("Digite uma distancia em milhas e vamos calcula-la em quilometros: \n");
    scanf("%f", &mi);
    km = mi * 1.61;
    printf("A distancia em quilometro eh %f", km);
    return 0;
}