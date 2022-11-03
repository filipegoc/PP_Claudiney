#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float idade, anos;
    printf("Digite sua idade: ");
    scanf("%f", &idade);
    printf("Digite quantos anos voce trabalhou: ");
    scanf("%f", &anos);
    if (idade >= 65 || anos >= 30 || idade >= 60 && anos >= 25 )
    {
        printf("Voce tem o direito de se aposentar");
    }
    else 
    {
        printf("Voce nao consegue se aposentar ainda");
    }
    return 0;
}