#include <stdio.h>

void somaDobro(int a, int b);

void main()
{
    int x, y, *px = &x, *py = &y;
    printf("Digite o valor inteiro de X e Y: ");
    scanf("%d %d", &x, &y);
    somaDobro(*px, *py);
}

void somaDobro(int a, int b){
    a*= 2;
    b*= 2;
    printf("A soma do dobro de X e Y eh: %d", a+b);
}