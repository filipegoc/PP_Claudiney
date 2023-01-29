#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(){
    char arq_entrada[40], arq_saida[40], nome_cidade[40], maior_cidade[40];
    int num_cidade, habitantes, i, mais_habitantes=0;
    printf("Qual o nome do programa de entrada? ");
    fgets(arq_entrada, 40, stdin);
    setbuf(stdin, NULL);
    printf("Qual o nome do programa de saida? ");
    fgets(arq_saida, 40, stdin);
    setbuf(stdin, NULL);
    FILE *entrada = fopen(arq_entrada, "w");
    if(arq_entrada == NULL){
        printf("Erro");
        exit(1);
    }
    printf("Digite quantas cidades serao cadastradas: ");
    scanf("%d", &num_cidade);
    setbuf(stdin, NULL);
    for(i=0; i<num_cidade; i++){
        printf("Cidade %d\n", i+1);
        printf("\tnome: ");
        fgets(nome_cidade, 40, stdin);
        printf("\thabitantes: ");
        scanf("%d", &habitantes);
        fprintf(entrada, "%s%d\n", nome_cidade, habitantes);
        setbuf(stdin, NULL);
    }
    fclose(entrada);
    entrada = fopen(arq_entrada, "r");
    for(i=0; i<num_cidade;i++){
        fscanf(entrada, "%s\n%d", nome_cidade , &habitantes);
        if(mais_habitantes < habitantes){
            mais_habitantes = habitantes;
            strcpy(maior_cidade, nome_cidade);
        }
    }
    fclose(entrada);
    FILE *saida = fopen(arq_saida, "w");
    if(saida == NULL){
        printf("Erro.");
        exit(1);
    }
    fprintf(saida, "Cidade mais populosa: %s\nQuantidade de habitantes: %d", maior_cidade, mais_habitantes);
    fclose(saida);
}