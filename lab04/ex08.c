#include <stdio.h>

int main()
{
    int i=2;
    float n, nmaior, nmenor;
    printf("Digite o 1o numero: ");
    scanf("%f", &n);
    nmenor=n;
    nmaior=n;
    while(i<=10)
    {
        printf("Digite o %do numero: ", i);
        scanf("%f", &n);
        if(n<nmenor)
        {
            nmenor=n;
        }
        else if(n>nmaior)
        {
            nmaior=n;
        }
        i++;
    }
    printf("O menor numero eh %f e o maior eh %f", nmenor, nmaior);
    return 0;
}