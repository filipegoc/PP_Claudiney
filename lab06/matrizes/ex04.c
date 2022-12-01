#include <stdio.h>

void main()
{
    int i, j, x, linha=0, coluna=0;
    int matriz[5][5];
    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            printf("Digite o %do valor da linha %d: ", (j+1), (i+1));
            scanf("%d", &matriz[i][j]);
        }
    }
    printf("Digite um valor: ");
    scanf("%d", &x);
    
    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            if(x == matriz[i][j]){
                linha= i+1;
                coluna= j+1;
            }
        }
    }
    if(linha && coluna){
        printf("O valor foi encontrado na linha %d e coluna %d da matriz", linha, coluna);
    }
    else{
        printf("Valor nao encontrado");
    }
}