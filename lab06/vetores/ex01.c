#include <stdio.h>

void main()
{
    int soma, i;
    float vetor[6] = {1, 0, 5, -2, -5, 7};
    soma= vetor[0] + vetor[1] + vetor[5];
    printf("A soma dos valores das posições A[0], A[1] e A[5] eh %d \n", soma);
    vetor[4]= 100;
    for(i=0; i<=5; i++){
        printf("A[%d] = %f  \n", i, vetor[i]);
    }
}