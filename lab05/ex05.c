#include <stdio.h>

float volumeEsfera(float r);

int main()
{
    float raio, volume;
    printf("Vamos calcular o volume de uma esfera, digite o valor do raio: ");
    scanf("%f", &raio);
    volume= volumeEsfera(raio);
    printf("O volume total eh %.4f", volume);
    return 0;
}

float volumeEsfera(float r){
    float pi=3.141592653;
    return (r*r*r*pi)*4/3;
}
