#include <stdio.h>

void main()
{
    float vet[10], *p = vet;
    int i;
    for(i=0; i<10; i++){
        printf("Endereco da posicao %d do vetor: %d\n", i+1, &p[i]);
    }
}
