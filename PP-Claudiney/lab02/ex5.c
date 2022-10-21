#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num, quintaParte;
    printf("Digite um numero real e vamos calcular a quinta parte: \n");
    scanf("%f", &num);
    quintaParte = num / 5;
    printf("O quinta parte do numero digitado eh %f", quintaParte);
    return 0;
}