#include <stdio.h>

void main()
{
    int vet[5], i;
    for(i=0; i<5; i++){
        int *p = vet + i;
        printf("Digite o %do valor do vetor: ", i+1);
        scanf("%d", p);
        *p*=2;
    }
    printf("Vetor com valor dobrado: ");
    for(i=0; i<5; i++){
        int *p = vet + i;
        printf(i!=4 ? "%d, " : "%d.", *p);
    }
}