#include <stdio.h>

void troca(int a, int b);

void main()
{
    int x, y, *px = &x, *py = &y;
    printf("Digite o valor inteiro de X e Y: ");
    scanf("%d %d", &x, &y);
    troca(*px, *py);
}

void troca(int a, int b){
    int aux;
    if(a < b){
        aux = a;
        a = b;
        b = aux;
    }
    printf("Os valores na ordem decrescende sao: %d e %d", a, b); 
}