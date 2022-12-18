#include <stdio.h>
#include <string.h>

struct aluno{
    char nome[101], matricula[15];
    float prova1, prova2, prova3;
};

float maiorNotaP1(float a1, float a2, float a3, float a4, float a5);

float maiorMedia(float a1, float a2, float a3, float a4, float a5, float b1, float b2, float b3, float b4, float b5, float c1, float c2, float c3, float c4, float c5);

float menorMedia(float a1, float a2, float a3, float a4, float a5, float b1, float b2, float b3, float b4, float b5, float c1, float c2, float c3, float c4, float c5);

void main()
{
    struct aluno a[5];
    int i;
    
    
    for(i=0; i<5; i++){
        printf("DADOS DO %do ALUNO:\n", i+1);
        printf("Digite o nome: ");
        fgets(a[i].nome, 101, stdin);
        setbuf(stdin, NULL);
        printf("Digite a matricula: ");
        fgets(a[i].matricula, 15, stdin);
        setbuf(stdin, NULL);
        printf("Digite a nota da P1: ");
        scanf("%f", &a[i].prova1);
        printf("Digite a nota da P2: ");
        scanf("%f", &a[i].prova2);
        printf("Digite a nota da P3: ");
        scanf("%f", &a[i].prova3);
        setbuf(stdin, NULL);
        printf("\n");
    }
    i = maiorNotaP1(a[0].prova1, a[1].prova1, a[2].prova1, a[3].prova1, a[4].prova1);
    printf("A maior nota da P1 foi %0.2f pontos de %s", a[i].prova1,a[i].nome);
    i = maiorMedia(a[0].prova1, a[1].prova1, a[2].prova1, a[3].prova1, a[4].prova1, a[0].prova2, a[1].prova2, a[2].prova2, a[3].prova2, a[4].prova2, a[0].prova3, a[1].prova3, a[2].prova3, a[3].prova3, a[4].prova3);
    printf("A maior media dos 5 alunos foi %0.2f pontos de %s", (a[i].prova1 + a[i].prova2 + a[i].prova3) / 3 , a[i].nome);
    i = menorMedia(a[0].prova1, a[1].prova1, a[2].prova1, a[3].prova1, a[4].prova1, a[0].prova2, a[1].prova2, a[2].prova2, a[3].prova2, a[4].prova2, a[0].prova3, a[1].prova3, a[2].prova3, a[3].prova3, a[4].prova3);
    printf("A menor media dos 5 alunos foi %0.2f pontos de %s", (a[i].prova1 + a[i].prova2 + a[i].prova3) / 3 , a[i].nome);
    float aprovado(float a1, float a2, float a3, float a4, float a5, float b1, float b2, float b3, float b4, float b5, float c1, float c2, float c3, float c4, float c5);
    printf("Alunos aprovados:\n");
    if((a[0].prova1+a[0].prova2+a[0].prova3)/3 >= 6){
        printf("\t%s", a[0].nome);
    }
    if((a[1].prova1+a[1].prova2+a[1].prova3)/3 >= 6){
        printf("\t%s", a[1].nome);
    }
    if((a[2].prova1+a[2].prova2+a[2].prova3)/3 >= 6){
        printf("\t%s", a[2].nome);
    }
    if((a[3].prova1+a[3].prova2+a[3].prova3)/3 >= 6){
        printf("\t%s", a[3].nome);
    }
    if((a[4].prova1+a[4].prova2+a[4].prova3)/3 >= 6){
        printf("\t%s", a[4].nome);
    }
    
    printf("Alunos reprovados:\n");
    if((a[0].prova1+a[0].prova2+a[0].prova3)/3 < 6){
        printf("\t%s", a[0].nome);
    }
    if((a[1].prova1+a[1].prova2+a[1].prova3)/3 < 6){
        printf("\t%s", a[1].nome);
    }
    if((a[2].prova1+a[2].prova2+a[2].prova3)/3 < 6){
        printf("\t%s", a[2].nome);
    }
    if((a[3].prova1+a[3].prova2+a[3].prova3)/3 < 6){
        printf("\t%s", a[3].nome);
    }
    if((a[4].prova1+a[4].prova2+a[4].prova3)/3 < 6){
        printf("\t%s", a[4].nome);
    }
}

float maiorNotaP1(float a1, float a2, float a3, float a4, float a5){
    float maiorNota=a1;
    int aluno=0;
    if(maiorNota < a2){
        aluno=1;
    }
    if(maiorNota < a3){
        aluno=2;
    }
    if(maiorNota < a4){
        aluno=3;
    }
    if(maiorNota < a5){
        aluno=4;
    }
    return aluno;
}

float maiorMedia(float a1, float a2, float a3, float a4, float a5, float b1, float b2, float b3, float b4, float b5, float c1, float c2, float c3, float c4, float c5){
    float mediaMaior=(a1+b1+c1)/3;
    int aluno=0;
    if(mediaMaior < (a2+b2+c2)/3){
        aluno=1;
    }
    if(mediaMaior < (a3+b3+c3)/3){
        aluno=2;
    }
    if(mediaMaior < (a4+b4+c4)/3){
        aluno=3;
    }
    if(mediaMaior < (a5+b5+c5)/3){
        aluno=4;
    }
    return aluno;
}

float menorMedia(float a1, float a2, float a3, float a4, float a5, float b1, float b2, float b3, float b4, float b5, float c1, float c2, float c3, float c4, float c5){
    float mediaMaior=(a1+b1+c1)/3;
    int aluno=0;
    if(mediaMaior > (a2+b2+c2)/3){
        aluno=1;
    }
    if(mediaMaior > (a3+b3+c3)/3){
        aluno=2;
    }
    if(mediaMaior > (a4+b4+c4)/3){
        aluno=3;
    }
    if(mediaMaior > (a5+b5+c5)/3){
        aluno=4;
    }
    return aluno;
}