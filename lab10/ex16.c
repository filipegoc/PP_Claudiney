#include <stdio.h>
#include <stdlib.h>

void main()
{
    int **p, n, m, i, j;
    printf("Digite o numero de linhas e colunas da matriz: ");
    scanf("%d %d", &n, &m);
    p = (int**) malloc(n*sizeof(int));
    for(i=0; i<n; i++){
        p[i] = (int*) malloc(m*sizeof(int));
    }
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            printf("Digite o valor [%d, %d]: ", i+1, j+1);
            scanf("%d", &p[i][j]);
        }
    }
    printf("\nMATRIZ:\n");
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            printf("\t%d", p[i][j]);
        }
        printf("\n");
    }
    printf("\nMATRIZ TRANSPOSTA:\n");
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            printf("\t%d", p[j][i]);
        }
        printf("\n");
    }
}