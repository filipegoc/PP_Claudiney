#include <stdio.h>

void main()
{
    int i, j, opcao;
    float matriz1[2][2];
    float matriz2[2][2];
    float matriz3[2][2];
    char constante;
    printf("Primeira matriz: \n");
    for(i=0; i<2; i++){
        for(j=0; j<2; j++){
            printf("Digite o %do valor da linha %d: ", (j+1), (i+1));
            scanf("%f", &matriz1[i][j]);
        }
    }
    printf("Segunda matriz\n");
    for(i=0; i<2; i++){
        for(j=0; j<2; j++){
            printf("Digite o %do valor da linha %d: ", (j+1), (i+1));
            scanf("%f", &matriz2[i][j]);
        }
    }
    do{
        printf("O que voce deseja?\n");
        printf("    [1] somar as duas matrizes\n");
        printf("    [2] subtrair a primeira matriz da segunda\n");
        printf("    [3] adicionar uma constante as duas matrizes\n");
        printf("    [4] imprimir as matrizes\n");
        printf("opcao: ");
        scanf("%d", &opcao);
        switch(opcao){
            case 1:
                    printf("A soma das matrizes eh:\n");
                    for(i=0; i<2; i++){
                        for(j=0; j<2; j++){
                            matriz3[i][j] = matriz1[i][j] + matriz2[i][j];
                        }
                    }
                        for(i=0; i<2; i++){
                            for(j=0; j<2; j++){
                                printf("%.2f ", matriz3[i][j]);
                            }
                            printf("\n");
                        }
                break;
            
            case 2:
                    printf("A subtracao das matrizes eh:\n");
                    for(i=0; i<2; i++){
                        for(j=0; j<2; j++){
                            matriz3[i][j] = matriz2[i][j] - matriz1[i][j];
                        }
                    }
                        for(i=0; i<2; i++){
                            for(j=0; j<2; j++){
                                printf("%.2f ", matriz3[i][j]);
                            }
                            printf("\n");
                        }
                break;
            
            case 3: 
                    printf("Qual constante voce quer adicionar? ");
                    scanf(" %c", &constante);
                    printf("Primeira matriz com a constante:\n");
                    for(i=0; i<2; i++){
                            for(j=0; j<2; j++){
                                printf("%.2f%c ", matriz1[i][j], constante);
                            }
                            printf("\n");
                        }
                    printf("\nsegunda matriz com a constante:\n");
                    for(i=0; i<2; i++){
                            for(j=0; j<2; j++){
                                printf("%.2f%c ", matriz2[i][j], constante);
                            }
                            printf("\n");
                        }
                    break;
            case 4:
                    printf("Primeira matriz:\n");
                    for(i=0; i<2; i++){
                            for(j=0; j<2; j++){
                                printf("%.2f ", matriz1[i][j]);
                            }
                            printf("\n");
                        }
                    printf("\nSegunda matriz\n:\n");
                    for(i=0; i<2; i++){
                            for(j=0; j<2; j++){
                                printf("%.2f ", matriz2[i][j]);
                            }
                            printf("\n");
                        }
                    break;
        }
    }while(opcao>4 || opcao<1);
}
