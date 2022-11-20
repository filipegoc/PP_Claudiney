#include <stdio.h>
#include <math.h>

float VolumeCilindro(float h, float r){
    float pi=3.141592;
    return pi*r*r*h;
}

int main()
{
    float altura, raio, volume;
    printf("Digite o valor da altura e raio e vamos calcular o volume do cilindo: ");
    scanf("%f %f", &altura, &raio);
    volume= VolumeCilindro(altura, raio);
    printf("O valor da hipotenusa eh %.2f", volume);
    return 0;
}