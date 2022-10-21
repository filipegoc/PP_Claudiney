#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float spcDegrau, alt;
    int qntDegrau;
    printf("Digite a altura que quer subir em cm: \n");
    scanf("%f", &alt);
    printf("Digite o espaco entre cada degrau em cm: \n");
    scanf("%f", &spcDegrau);
    qntDegrau = ceil(alt / spcDegrau);
    printf("A pessoa deve subir %d degraus para alcancar a altura", qntDegrau);
    return 0;
}