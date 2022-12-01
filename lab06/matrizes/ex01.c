#include <stdio.h>

void main()
{
    int i, j, igual=0, qntdMaior10=0;
    float matriz[4][4];
    for(i=0; i<4; i++){
        for(j=0; j<4; j++){
            printf("Digite o %do valor da linha %d: ", (j+1), (i+1));
            scanf("%f", &matriz[i][j]);
            if(matriz[i][j]>10){
                qntdMaior10++;
            }
        }
    }
    if(qntdMaior10==1){
        printf("1 valor maior que 10 \nO valor eh: ");
        for(i=0; i<4; i++){
            for(j=0; j<4; j++){
                if(matriz[i][j]>10){
                printf("%f", matriz[i][j]);
                }
            }
        }
    }
    else if(qntdMaior10>1){
        printf("%d valores maior que 10 \n", qntdMaior10);
        printf("Os valores sao: ");
        for(i=0; i<4; i++){
            for(j=0; j<4; j++){
                if(matriz[i][j]>10){
                printf("%f, ", matriz[i][j]);
                }
            }
        }
    }
}