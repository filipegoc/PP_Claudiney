#include <stdio.h>

void notas(float *n1, float *n2);
float mediaAritmetica(float n1, float n2);
float mediaPonderada(float n1, float n2);

void main()
{
    int nota1, nota2;
    notas(&nota1, &nota2);
    printf("Media aritmetica: %f\n", mediaAritmetica(nota1, nota2));
    printf("Media ponderada: %f\n", mediaPonderada(nota1, nota2));
}

void notas(float *n1, float *n2)
{
    printf("Digite a 1a nota: ");
    scanf("%f", n1);
    printf("Digite a 2a nota: ");
    scanf("%f", n2);
}

float mediaAritmetica(float n1, float n2)
{
    return (n1 + n2) / 2;
}

float mediaPonderada(float n1, float n2)
{
    return (n1 + n2 * 2) / 3;
}