#include <stdio.h>
#include <stdlib.h>

int main()
{
    float km, mi;
    printf("Digite uma distancia em quilometros e vamos calcula-la em milhas: \n");
    scanf("%f", &km);
    mi = km / 1.61;
    printf("A distancia em milhas eh %f", mi);
    return 0;
}