#include <stdio.h>

void main()
{
    int i, n1, n2;
    float vetor[8];
    for(i=0; i<8; i++){
        printf("Digite o %do valor do vetor: ", (i+1));
        scanf("%f", &vetor[i]);
    }
    printf("Digite 2 valores entre 0 e 7: ");
    scanf("%d %d", &n1, &n2);
    if((n1>=0 && n1<= 7) && (n2>=0 && n2<= 7)){
        printf("A soma entre os numeros que estavam na posicao %d e %d eh: %.4f", n1, n2, (vetor[n1] + vetor[n2]));
    }
    else{
        printf("Erro.");
    }
    
}