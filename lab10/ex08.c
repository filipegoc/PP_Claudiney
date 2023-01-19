#include <stdio.h>
#include <stdlib.h>

void main()
{
    int *p, i, eh_zero=0;
    p = (int*) calloc(1500,sizeof(int));
    for(i=0; i<1500; i++){
        p[i] = 0;
        if(p[i] == 0){
            eh_zero++;
        }
    }
    if(eh_zero == 1500){
        printf("Vetor inicializado com todos os 1500 valores igual a zero!\n");
    }
    else{
        printf("ERRO.\n");
    }
    for(i=0; i<1500; i++){
        p[i] = i;
    }
    printf("Os 10 primeiros valores do vetor: ");
    for(i=0; i<10; i++){
        printf(i!=9 ? "%d, " : "%d.\n", p[i]);
    }
    printf("Os 10 ultimos valores do vetor: ");
    for(i=1490; i<1500; i++){
        printf(i!=1499 ? "%d, " : "%d.", p[i]);
    }
}