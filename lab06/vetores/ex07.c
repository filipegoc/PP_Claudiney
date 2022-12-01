#include <stdio.h>

void main()
{
    int i, par=0, somaPar=0, impar=0, qntdImpar=0; 
    int vetor[6];
    for(i=0; i<6; i++){
        printf("Digite o %do valor do vetor: ", (i+1));
        scanf("%d", &vetor[i]);
    }

    for(i=0; i<6; i++){
        if(vetor[i] % 2 == 0){
            if(par==0){
                printf("numero(s) par(es): ");
                par++;
            }
            somaPar += vetor[i];
            printf("%d, ", vetor[i]);
        } 
    }
        if(par==1){
        printf("\nA soma dos numero(s) par(es) eh: %d", somaPar);
    }
    
    for(i=0; i<6; i++){
        if(vetor[i] % 2 != 0){
            if(impar==0){
                printf("\nnumero(s) impar(es): ");
                impar++;
            }
            printf("%d, ", vetor[i]);
            qntdImpar += 1;
        } 
    }
    if(qntdImpar){
        printf("\nHa %d numeros impares", qntdImpar);
    }
}