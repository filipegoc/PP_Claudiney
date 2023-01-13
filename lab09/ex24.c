#include <stdio.h>

void maximoEminino(int *vet, int max, int min);

void main()
{
    int vetor[5], i, min, max, *pMin= &min, *pMax= &max;
    for(i=0; i<5; i++){
        int *p = vetor + i;
        printf("Digite o %do valor do vetor: ", i+1);
        scanf("%d", p);
    }
    maximoEminino(vetor, pMax, pMin);
}

void maximoEminino(int *vet, int max, int min){
    max = vet;
    min = vet;
    for(int i=0; i<5; i++){
        if(*(vet + i) > max){
            max = *(vet + i);
        }
        if(*(vet + i) < min){
            min = *(vet + i);
        }
    }
    printf("Maior: %d", max);
    printf("\nMenor: %d", min);
}