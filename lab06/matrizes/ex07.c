#include <stdio.h>

void main(int argc, char *argv[]) {
    int vetor[5][5]; 
    int cont, i, j, c, l;
    srand(time(NULL));

    for (i=0;i<5;i++){
        for (j=0;j<5;j++){
            do{   
                cont=0;
                vetor[i][j]=rand()%99;
                for (l=0;l<5;l++){
                    for (c=0;c<5;c++){
                      if (vetor[i][j]==vetor[l][c] && (i!=l && j!=c)){
                      cont++;
                      }
                    }
                }
             } while(cont!=0);
        }
    }
    printf("\t\t--TABELA DO BINGO--\n");
    for (l=0;l<5;l++)
    {
        for (c=0;c<5;c++)
        {
           printf(" \t %d ", vetor[l][c]);
        }
        printf("\n");
    }
}
