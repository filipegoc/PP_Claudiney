#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, m;
    printf("Digite uma area em metros quadrados e vamos calcula-la em acres: \n");
    scanf("%f", &m);
    a = m * 0.000247;
    printf("A area em acres eh: %f", a);
    return 0;
}