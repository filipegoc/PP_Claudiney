#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(){
    int num_alunos, i;
    char **nome;
    float *notas;
    printf("Quantos alunos serao cadastrados? ");
    scanf("%d", &num_alunos);
    nome = (char**) malloc(num_alunos*sizeof(char*));
    for(i=0; i<num_alunos; i++){
        nome[i] = (char*) malloc(40*sizeof(char));
        if(nome[i] == NULL){
        printf("Erro.");
        exit(1);
    }
    }
    notas = (float*) malloc(num_alunos*sizeof(float));
    if(nome == NULL || notas == NULL){
        printf("Erro.");
        exit(1);
    }
    
    FILE *f = fopen("Notas_Finais.txt", "w");
    
    for(i=0; i<num_alunos; i++){
        setbuf(stdin, NULL);
        printf("\nAluno %d\n", i+1);
        printf("\tnome: ");
        fgets(nome[i], 40,stdin);
        setbuf(stdin, NULL);
        printf("\tnota: ");
        scanf("%f", &notas[i]);
        fprintf(f, "nome: %snota final: %.2f\n", nome[i], notas[i]);
    }
    fclose(f);
    free(notas);
    for(i=0; i<num_alunos; i++){
        free(nome[i]);
    }
    free(nome);
}