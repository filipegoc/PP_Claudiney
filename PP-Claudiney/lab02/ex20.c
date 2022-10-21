#include <stdio.h>
#include <stdlib.h>

int main()
{
    float kg, li;
    printf("Digite uma massa em quilogramas e vamos calcula-la em libras: \n");
    scanf("%f", &kg);
    li = kg / 0.45;
    printf("A massa em libras eh %f", li);
    return 0;
}