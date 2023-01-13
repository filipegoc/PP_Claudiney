#include <stdio.h>

void main()
{
    int vet[5], i;
    for(i=0; i<5; i++){
        int *p = vet + i;
        printf("Digite o %do valor do vetor: ", i+1);
        scanf("%d", p);
    }
    printf("Endereco das posicoes pares do vetor: ");
    for(i=0; i<5; i++){
        int *p = vet + i;
        if(*p % 2 == 0){
            printf("%p, ", p);
        }
    }
}