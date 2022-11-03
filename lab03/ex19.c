#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int num;
    float resto3, resto5;
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);
    resto3 = num % 3;
    resto5 = num % 5;
    if (resto3 == 0)
    {
        printf("%d eh divisivel por 3. ", num);
    }
    if (resto5 == 0)
    {
        printf("%d eh divisivel por 5.", num);
    }
    if (resto3 != 0 && resto5 != 0)
    {
         printf("%d nao eh divisivel nem por 3 e nem por 5.", num);   
    }
    return 0;
}