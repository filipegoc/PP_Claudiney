#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num, contador, soma, media;
    contador = 1;
    soma = 0;
    while (contador <= 4){
        printf("Digite a %1.fa nota \n", contador);
        scanf("%f", &num);
        soma = soma + num;
        contador = contador + 1;
    }
    media = soma / 4;
    printf("A media eh %f", media);
    return 0;
}
