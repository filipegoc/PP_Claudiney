#include <stdio.h>

void soma(int *a, int *b);

void main()
{
    int x, y, *px = &x, *py = &y;
    printf("Digite o valor inteiro de X e Y: ");
    scanf("%d %d", &x, &y);
    soma(px, py);
    printf("X = %d \nY = %d", x, y);
}

void soma(int *a, int *b){
    *a += *b;
}