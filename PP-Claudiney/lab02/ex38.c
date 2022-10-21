#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float sal, novoSal, h;
    printf("Digite o valor do seu salario atual: \n");
    scanf("%f", &sal);
    novoSal = sal * 1.25;
    printf("O valor do seu novo salario sera %2.f", novoSal);
    return 0;
}