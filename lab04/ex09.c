#include <stdio.h>

int main()
{
    int n, i;
    printf("Quantos numeros voce quer ver impares? ");
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        printf("%d \n", 1+(2*i));
    }
    return 0;
}