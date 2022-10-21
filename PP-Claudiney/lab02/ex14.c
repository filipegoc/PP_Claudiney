#include <stdio.h>
#include <stdlib.h>

int main()
{
    float G, R;
    printf("Digite um angulo em graus e vamos calcula-lo em radianos: \n");
    scanf("%f", &G);
    R = (G * 3.14159) / 180;
    printf("O angulo em radianos eh %f", R);
    return 0;
}