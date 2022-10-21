#include <stdio.h>
#include <stdlib.h>

int main()
{
    float li, kg;
    printf("Digite uma massa em libras e vamos calcula-la em quilogramas: \n");
    scanf("%f", &li);
    kg = li * 0.45;
    printf("A massa em kg eh: %f", kg);
    return 0;
}