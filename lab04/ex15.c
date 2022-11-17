#include <stdio.h>
#include <math.h>

int main()
{
    float n;
    do
    {
        printf("Digite um numero e vamos calcular o quadrado, o cubo e a raiz quadrada. (A entrada de dados sera finalizada apos entrar um numero menor ou igual a ZERO) ");
        scanf("%f", &n);
        printf("\nO quadrado eh %f", pow(n,2));
        printf("\nO cubo eh %f", pow(n,3));
        printf("\nA raiz quadrada eh %f \n", sqrt(n));
    }
    while(n>0);
    return 0;
}