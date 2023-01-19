#include <stdio.h>
#include <stdlib.h>

void main()
{
    int tam, *vet;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tam);
    vet = (int*) malloc(tam*sizeof(int));
    for(int i=0; i<tam; i++){
        printf("Digite o %do valor do vetor: ", i+1);
        scanf("%d", &vet[i]);
    }
    printf("\nValores do vetor: ");
    for(int i=0; i<tam; i++){
        printf(i!=tam-1 ? "%d, " : "%d.", vet[i]);
    }
    free(vet);
}