#include <stdio.h>
#include <stdlib.h>

void main()
{
    int tam_memoria, *memoria, posicao, valor, op, i;
    
    printf("Digite o tamanho da memoria do computador em bytes: ");
    scanf("%d", &tam_memoria);
    for(i=0; i<1;){
        if(tam_memoria%4 != 0){
            printf("Erro. \nDigite o tamanho da memoria do computador em bytes: ");
            scanf("%d", &tam_memoria);
        }
        else{
            i++;
        }
    } 
    tam_memoria = tam_memoria/4 -1;
    memoria = (int*) malloc(tam_memoria*sizeof(int));
    for(i=0; i<tam_memoria; i++){
        memoria[i] = 0;
    }
    do{
        printf("\n\t[1] - Inserir valor em determinada posicao");
        printf("\n\t[2] - Consultar valor contido em determinada posição");
        printf("\n\t[3] - Sair");
        printf("\nOpcao: ");
        scanf("%d", &op);
        switch(op){
            case 1:
                printf("Qual posicao deseja? ");
                scanf("%d", &posicao);
                if(posicao<0 || posicao>tam_memoria){
                    printf("Posicao invalida!\n");
                    break;
                }
                printf("Qual valor deseja atribuir? ");
                scanf("%d", &valor);
                memoria[posicao] = valor;
                break;
            case 2:
                printf("Qual posicao deseja consultar? ");
                scanf("%d", &posicao);
                if(posicao<0 || posicao>tam_memoria){
                    printf("Posicao invalida!\n");
                    break;
                }
                printf("%d", memoria[posicao]);
                break;
            case 3:
                printf("\nSaindo...");
                exit(0);
        }
    }while(op!=3);
    exit(0);
}