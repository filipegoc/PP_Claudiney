#include <stdio.h>
#include <stdlib.h>

int main()
{
    float G, R;
    printf("Digite um angulo em radianos e vamos calcula-lo em graus: \n");
    scanf("%f", &R);
    G = (R * 180) / 3.14159;
    printf("O angulo em graus eh %f", G);
    return 0;
}