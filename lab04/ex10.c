#include <stdio.h>

int main()
{
    int s=0, i;
    for(i=0; i<=50; i++)
    {
        s+=(i*2);
    }
    printf("A soma dos 50 primeiros numeros pares eh %d", s);
    return 0;
}