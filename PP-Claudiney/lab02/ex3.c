#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, contador, soma;
    contador = 1;
    soma = 0;
    while (contador <= 3){
        printf("Digite o %do numero inteiro: \n", contador);
        scanf("%d", &num);
        soma = soma + num;
        contador = contador + 1;
    }
    printf("A soma foi %d", soma);
    return 0;
}