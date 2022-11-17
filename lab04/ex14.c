#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int i, vezes,dado1, dado2;
    printf("Quantas vezes voce quer que os dois dados sejam lancados? ");
    scanf("%d", &vezes);
    for(i=1; i<= vezes; i++){
        dado1= (rand() % 6) + 1;
        dado2= (rand() % 6) + 1;
        printf("Lancamento %d: \n", i);
        printf("Valor dado 1: %d, valor dado 2: %d \n", dado1, dado2);
        if(dado1>dado2)
            printf("Dado 1 > dado 2 \n");
        else if(dado1==dado2)
            printf("Dado 1 = dado 2 \n");
        else
            printf("Dado 2 > dado 1 \n");
        printf("\n");
        
    }
    return 0;
}
