#include <stdio.h>

void main()
{
    float mat[3][3];
    int i, j;
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("Endereco da posicao [%d, %d] da matriz: %p\n", i+1, j+1, &mat[i][j]);
        }
    }
}
