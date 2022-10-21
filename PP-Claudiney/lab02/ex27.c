#include <stdio.h>
#include <stdlib.h>

int main()
{
    float h, m;
    printf("Digite uma area em hectares e vamos calcula-la em metros quadrados: \n");
    scanf("%f", &h);
    m = h * 10000;
    printf("A area em metros quadrados eh: %f", m);
    return 0;
}