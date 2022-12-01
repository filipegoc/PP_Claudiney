#include <stdio.h>

void main()
{
    int i, j, primo, ehPrimo=0;
    int vetor[10];
    for(i=0; i<10; i++){
        printf("Digite o %do valor do vetor: ", (i+1));
        scanf("%d", &vetor[i]);
    }
    for(i=0; i<10; i++){
       primo=1;
       for(j = 2; j <= vetor[i]; j++) {
           if(((vetor[i] % j) == 0) && (j != vetor[i])){
               primo = 0;
               break;
           }
       }
        if(primo!=0 && vetor[i]!=1){
            if(ehPrimo==0){
                printf("numero(s) primo(s): ");
                ehPrimo++;
            }
            printf("%d na posicao %d do vetor\n", vetor[i], i);
        }
    } 
}