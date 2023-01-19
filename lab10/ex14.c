#include <stdio.h>
#include <stdlib.h>

void main()
{
    float **p, linha, coluna;
    int i, j;
    printf("Digite o numero de linhas e colunas da matriz: ");
    scanf("%f %f", &linha, &coluna);
    p = (float**) malloc(linha*sizeof(float));
    for(i=0; i<linha; i++){
        p[i] = (float*) malloc(coluna*sizeof(float));
    }
    for(i=0; i<linha; i++){
        for(j=0; j<coluna; j++){
            printf("Digite o valor [%d, %d]: ", i+1, j+1);
            scanf("%f", &p[i][j]);
        }
    }
    printf("\nMATRIZ:\n");
    for(i=0; i<linha; i++){
        for(j=0; j<coluna; j++){
            printf("\t%.2f", p[i][j]);
        }
        printf("\n");
    }
}