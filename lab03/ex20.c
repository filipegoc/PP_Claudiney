#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a, b, c;
    printf("Digite os 3 lados do triangulo: ");
    scanf("%f %f %f", &a, &b, &c);
    if (a+b < c || a+c < b || b+c < a)
    {
        printf("Triangulo inexistente");
    }
    else if (a == b && b == c)
    {
        printf("Triangulo equilatero");
    }
    else if (a == b || b == c || a == c)
    {
        printf("Triangulo isosceles");
    }
    else if (a != b && b != c && a != c)
    {
        printf("Triangulo escaleno");
    }
    return 0;
}