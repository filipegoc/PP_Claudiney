#include <stdio.h>

void main()
{
    int i, posicaoMaior=0, posicaoMenor=0; 
    float menor, maior;
    float vetor[5];
    for(i=0; i<5; i++){
        printf("Digite o %do valor do vetor: ", (i+1));
        scanf("%f", &vetor[i]);
    }
    menor = vetor[0];
    maior = vetor[0];
    for(i=1; i<5; i++){
        if(menor > vetor[i]){
            posicaoMenor = i;
        }
    }
        for(i=1; i<5; i++){
        if(maior < vetor[i]){
            posicaoMaior = i;
        }
    }
    printf("A posicao do maior numero digitado eh %d e do menor numero digitado eh %d", posicaoMaior, posicaoMenor);
}