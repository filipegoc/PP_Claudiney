#include <stdio.h>

void main()
{
    int x, y, *px = &x, *py = &y;
    printf("Digite o valor inteiro de X e Y: ");
    scanf("%d %d", &x, &y);
    if(px > py){
        printf("%d", *px);
    }
    else{
        printf("%d", *py);
    }
}
