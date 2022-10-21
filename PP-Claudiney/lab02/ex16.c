#include <stdio.h>
#include <stdlib.h>

int main()
{
    float P, C;
    printf("Digite uma medida em polegadas e vamos calcula-lo em centrimetos: \n");
    scanf("%f", &P);
    C = P * 2.54;
    printf("A medida em centimetros eh %f", C);
    return 0;
}