#include <stdio.h>

int triangulo(float a, float b, float c);

void tipoTriangulo(float x, float y, float z);

int main()
{
    float lado1, lado2, lado3, ehTriangulo=0; 
    printf("Digite o primeiro lado do triangulo: ");
    scanf("%f", &lado1);
    printf("Digite o segundo lado do triangulo: ");
    scanf("%f", &lado2);
    printf("Digite o terceiro lado do triangulo: ");
    scanf("%f", &lado3);
    if(lado1>0 && lado2>0 && lado3>0){
        ehTriangulo= triangulo(lado1, lado2, lado3);   
    }
    else{
        printf("Erro.");
    }
    
    if(ehTriangulo==1){
        tipoTriangulo(lado1, lado2, lado3);
    }
    
    return 0;
}

int triangulo(float a, float b, float c){
    if((a<b+c) && (b<a+c) && (c<a+b)){
        return 1;
    }
    else{
        printf("Nao eh triangulo");
    }
}

void tipoTriangulo(float x, float y, float z){
    if(x==y && y==z){
        printf("Triangulo Equilatero");;
    }
    else if(x==y || x==z || y==z){
        printf("Triangulo Isosceles");;
    }
    else if(x!=y && x!=z && y!=z){
        printf("Triangulo Escaleno");;
    }   
}
