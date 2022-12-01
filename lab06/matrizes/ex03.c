#include <stdio.h>

void main()
{
    int i, j, maior, maiorNumero, linha, coluna;
    int matriz[4][4];
    for(i=0; i<4; i++){
        for(j=0; j<4; j++){
            printf("Digite o %do valor da linha %d: ", (j+1), (i+1));
            scanf("%d", &matriz[i][j]);
        }
    }
    
    for(i=0; i<4; i++){
        for(j=0; j<4; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    maiorNumero = matriz[0][0];
    linha=0;
    coluna=0;
    for(i=0; i<4; i++){
        for(j=0; j<4; j++){
            if(maiorNumero<matriz[i][j]){
                maiorNumero = matriz[i][j];
                linha= i;
                coluna= j;
            }
        }
    }
    printf("O maior numero esta localizado na linha %d e coluna %d", linha+1, coluna+1);
}