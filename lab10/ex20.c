#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

struct cidade{
    char nome[30];
    int x, y;
};

void main()
{
    struct cidade *c;
    int n, i, j, **mat;
    printf("Quantas cidades serao armazenadas? ");
    scanf("%d", &n);
    setbuf(stdin, NULL);
    c = (struct cidade*) malloc(n*sizeof(struct cidade));
    for(i=0; i<n; i++){
        printf("Cidade %d\n", i+1);
        printf("\tnome: ");
        fgets(c[i].nome, 30, stdin);
        setbuf(stdin, NULL);
        printf("\tcoordenada X e Y: ");
        scanf("%d %d", &c[i].x, &c[i].y);
        setbuf(stdin, NULL);
    }
    mat = (int**) malloc(n*sizeof(int));
    for(i=0; i<n; i++){
        mat[i] = (int*) malloc(n*sizeof(int));
    }
    printf("MATRIZ DE DISTANCIA: \n");
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            mat[i][j] = sqrt(pow(c[j].x - c[i].x, 2) + pow(c[j].y - c[i].y, 2));  
            printf("\t%.2f", (float)mat[i][j]);
        }
        printf("\n");
    }
    for( ; i!=9; ){
        printf("\nDigite o numero de duas cidades: ");
        scanf("%d %d", &i, &j);
        i--, j--;
        printf("A distancia entre essas cidades eh: %.2f u.m", (float) mat[i][j]); 
    }
        
}