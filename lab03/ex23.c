#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int ano;
    float resto4, resto400, resto100;
    printf("Digite o um ano e vamos ver se ele eh bissexto: ");
    scanf("%d", &ano);
    resto4 = ano % 4;
    resto400 = ano % 400;
    resto100 = ano % 100;
    if(resto100 != 0 && resto4 == 0 || resto400 == 0)
    {
        printf("O ano %d eh bissexto", ano);
    }
    else
    {
        printf("O ano %d nao eh bissexto", ano);
    }
    return 0;
}