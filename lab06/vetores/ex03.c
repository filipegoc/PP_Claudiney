#include <stdio.h>

void main()
{
    int i;
    int vetor[6];
    for(i=0; i<6; i++){
        printf("Digite o %do valor do vetor: ", (i+1));
        scanf("%d", &vetor[i]);
    }
    printf("A ordem inversa do valores lidos eh: ");
    for(i=5; i>-1; i--){
        printf(i==0 ? "%d." : "%d, ", vetor[i]);
    }
}