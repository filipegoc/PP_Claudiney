#include <stdio.h>
#include <string.h>

struct aluno{
  char nome[101], curso[31], matricula[15];
};

void main(){
    struct aluno a[5];
    int i;
    for(i=0; i<5; i++){
        printf("Digite o nome do %do aluno: ", i+1);
        fgets(a[i].nome, 101, stdin);
        setbuf(stdin, NULL);
        printf("Digite o curso do %do aluno: ", i+1);
        fgets(a[i].curso, 31, stdin);
        setbuf(stdin, NULL);
        printf("Digite a matricula do %do aluno: ", i+1);
        fgets(a[i].matricula, 15, stdin);
        setbuf(stdin, NULL);
    }
    printf("\n\nOs dados cadastrados foram:");
    for(i=0; i<5; i++){
        printf("\nAluno %d: ", i+1);
        printf("\n\tnome: %s", a[i].nome);
        printf("\tcurso: %s", a[i].curso);
        printf("\tmatricula: %s", a[i].matricula);
    }
}