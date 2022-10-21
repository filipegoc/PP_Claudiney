#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num, soma;
    int contador;
    contador = 1;
    soma = 0;
    while (contador <= 3){
        printf("Digite o %do numero: \n", contador);
        scanf("%f", &num);
        soma = soma + num * num;
        contador = contador + 1;
    }
    printf("A soma dos quadrados dos numeros eh: %f", soma);
    return 0;
}