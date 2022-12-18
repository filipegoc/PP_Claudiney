/*Faça um programa que armazena filmes produzidos por vários diretores e:
 Crie e leia um vetor de 5 diretores, cada um contendo nome (máximo 20 letras), quantidade de filmes e filmes. O membro filmes é um vetor, que deve ser criado após ter lido quantidade de filmes. Cada filme é composto por nome, ano e duração;
 Procure um diretor por nome, mostrando todos os filmes que ele já produziu. Repita o processo até digitar uma string vazia.
*/
#include <stdio.h>
#include <string.h>

struct filme{
    char nome[25], ano[5], duracao[10];
};

struct diretor{
    char nome[20];
    int qntFilmes;
    struct filme f[10];    
};

void main(){
    struct diretor d[5];
    int i, j, busc=0;
    char busca[20];
    for(i=0; i<5; i++){
        printf("Diretor %d:\n", i+1);
        printf("\tnome: ");
        fgets(d[i].nome, 20, stdin);
        setbuf(stdin, NULL);
        printf("\tquantidade de filmes: ");
        scanf("%d", &d[i].qntFilmes);
        setbuf(stdin, NULL);
        for(j=0; j<d[i].qntFilmes; j++){
            printf("\tnome %do filme: ", j+1);
            fgets(d[i].f[j].nome, 25, stdin);
            setbuf(stdin, NULL);
            printf("\tano %do filme: ", j+1);
            fgets(d[i].f[j].ano, 5, stdin);
            setbuf(stdin, NULL);
            printf("\tduracao %do filme: ", j+1);
            fgets(d[i].f[j].duracao, 10, stdin);
            setbuf(stdin, NULL);
        }
    }
    for( ; strcmp(busca, "") !=10 ; ){
        busc = 0;
        printf("\nDigite o nome de um diretor: ");
        fgets(busca, 20, stdin);
        setbuf(stdin, NULL);
        for(i=0; i<5; i++){
            if(strcmp(busca, d[i].nome) == 0){
                printf("Diretor: %s", d[i].nome);
                printf("\t%d filmes: \n", d[i].qntFilmes);
                for(j=0; j<d[i].qntFilmes ; j++){
                    printf("\tnome: %s", d[i].f[j].nome);
                    printf("\tano: %s", d[i].f[j].ano);
                    printf("\tduracao: %s", d[i].f[j].duracao);
                }
                busc++;
            }
        }
        if(busc == 0){
            printf("Diretor nao cadastrado\n");
        }    
    }
    printf("Finalizando");
}