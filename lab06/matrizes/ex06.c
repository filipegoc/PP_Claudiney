#include <stdio.h>

void main()
{
    int i, j;
    int matriz[4][4];
    for(i=0; i<4; i++){
        for(j=0; j<4; j++){
            matriz[i][j] = 1 + (rand() % 20);
        }
    }
    for(i=0; i<4; i++){
        for(j=0; j<4; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\nMatriz triangular inferior\n");
    for(i=0; i<4; i++){
        for(j=0; j<4; j++){
            if(i<j){
                matriz[i][j]= 0;
            }
        }
    }
    for(i=0; i<4; i++){
        for(j=0; j<4; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}