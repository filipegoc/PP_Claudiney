#include <stdio.h>
#include <math.h>

float hipotenusa(float a, float b){
    return sqrt(a*a+b*b);
}

int main()
{
    float cateto1, cateto2, hip;
    printf("Digite o valor do dois catetos do triangulo e vamos calcular a hipotenusa: ");
    scanf("%f %f", &cateto1, &cateto2);
    hip= hipotenusa(cateto1, cateto2);
    printf("O valor da hipotenusa eh %.2f", hip);
    return 0;
}