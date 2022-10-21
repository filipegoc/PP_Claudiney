#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, m;
    printf("Digite uma area em acres e vamos calcula-la em metros quadrados: \n");
    scanf("%f", &a);
    m = a * 4048.58;
    printf("A area em metros quadrados eh: %f", m);
    return 0;
}