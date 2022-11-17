#include <stdio.h>

int main()
{
    int i, n, r, s=0;
    printf("Digite um numero natural e vamos imprimir a soma dos seus divisores: ");
    scanf("%d", &n);
    for(i=1; i<n; i++)
    {
        r=n%i;
        if(r==0)
        {
            s+=i;
        }
    }
    printf("A soma total eh %d", s);
    return 0;
}