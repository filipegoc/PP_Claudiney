#include <stdio.h>

int main()
{
    int n, linha=1, suporte=1, numero=1;
    printf("Digite um valor para fazermos o Triangulo de Floyd: ");
    scanf("%d", &n);
    while (linha<=n)
    {
        while(linha>=suporte)
        {
            printf("%d ", numero);
            suporte++;
            numero++;
        }
        printf("\n");
        suporte=1;
        linha++;
    }
    
    return 0;
}