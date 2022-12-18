#include <stdio.h>
#include <string.h>

struct vetor{
    float x, y, z;  
};

struct vetor2{
    float x, y, z; 
};

void main(){
    struct vetor v;
    struct vetor2 v2;
    
    printf("Digite as coordenadas do 1o vetor (X, Y, Z): ");
    scanf("%f%f%f", &v.x, &v.y, &v.z);
    printf("Digite as coordenadas do 2o vetor (X, Y, Z): ");
    scanf("%f%f%f", &v2.x, &v2.y, &v2.z);
    printf("A soma dos vetores eh: (%.2f, %.2f, %.2f)", v.x+v2.x, v.y+v2.y, v.z+v2.z);
}