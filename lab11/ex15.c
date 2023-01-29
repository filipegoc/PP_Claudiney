#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(){
    char arq_entrada[40], arq_saida[40], nome[40], str_idade[40];
    int num_pessoas, i, ano, nascimento, idade;
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
    printf("Qual o ano atual? ");
    scanf("%d", &ano);
    setbuf(stdin, NULL);
    printf("Digite quantas pessoas serao cadastradas: ");
    scanf("%d", &num_pessoas);
    setbuf(stdin, NULL);
    for(i=0; i<num_pessoas; i++){
        printf("pessoa %d\n", i+1);
        printf("\tnome: ");
        fgets(nome, 40, stdin);
        printf("\tano de nascimento: ");
        scanf("%d", &nascimento);
        fprintf(entrada, "%s%d\n", nome, nascimento);
        setbuf(stdin, NULL);
    }
    fclose(entrada);
    entrada = fopen(arq_entrada, "r");
    FILE *saida = fopen(arq_saida, "w");
    if(saida == NULL){
        printf("Erro.");
        exit(1);
    }
    for(i=0; i<num_pessoas; i++){
        fscanf(entrada, "%s\n%d", nome, &nascimento);
        idade = ano - nascimento;
        if(idade < 18)
            strcpy(str_idade, "menor de idade.");
        else if(idade == 18)
            strcpy(str_idade, "entrando na maior idade.");
        else
            strcpy(str_idade, "maior de idade.");
        fprintf(saida, "Nome: %s, %s\n", nome, str_idade);
    }
    fclose(entrada);
    fclose(saida);
}