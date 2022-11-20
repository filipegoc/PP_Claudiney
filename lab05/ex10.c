#include <stdio.h>

float Comparacao(float x, float y){
    if(x>y){
        return x;
    }
    else{
        return y;
    }
}

int main()
{
    float a, b, maior;
    printf("Digite dois numeros e vamos ver qual eh maior ");
    scanf("%f %f", &a, &b);
    maior= Comparacao(a, b);
    printf("O maior valor eh %.2f", maior);
    return 0;
}