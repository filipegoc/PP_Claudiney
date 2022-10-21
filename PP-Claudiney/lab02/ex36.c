#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float v, h, r;
    printf("Digite a altura cilidro circular: \n");
    scanf("%f", &h);
    printf("Digite a raio cilidro circular: \n");
    scanf("%f", &r);
    v = 3.141592 * pow(r, 2) * h;
    printf("O volume do cilindro eh: %f", v);
    return 0;
}