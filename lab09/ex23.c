#include <stdio.h>

int maiorValor(int *vetor, int tam_vet);

void main()
{
    int n, k, i, j;
    printf("Qual o tamanho do vetor? ");
    scanf("%d", &n);
    int vet[n];
    for(i=0; i<n; i++){
        int *p = vet + i;
        printf("Digite o %do valor do vetor: ", i+1);
        scanf("%d", p);
    }
    printf("Quantos valores do vetor por linha? ");
    scanf("%d", &k);
    for(i=0; i<n; i++){
        for(j=0; j<k; j++){
            printf("%d, ", vet[i]);
            i++;
        }
        printf("\n");
    }
    printf("Maior valor: %d", maiorValor(vet, n));
}

int maiorValor(int *vetor, int tam_vet){
    int maior= vetor;
    for(int i=0; i<tam_vet; i++){
        if(*(vetor + i) > maior){
            maior = *(vetor + i);
        }
    }
}