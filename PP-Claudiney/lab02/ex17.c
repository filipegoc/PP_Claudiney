#include <stdio.h>
#include <stdlib.h>

int main()
{
    float P, C;
    printf("Digite uma medida em centrimetos e vamos calcula-lo em polegadas: \n");
    scanf("%f", &C);
    P = C / 2.54;
    printf("A medida em polegadas eh %f", P);
    return 0;
}