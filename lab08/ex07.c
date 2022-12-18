#include <stdio.h>
#include <string.h>

struct pessoa{
    char nome[100], endereco[100], telefone[20];
};

void main(){
    struct pessoa p[5];
    int i, j, k;
    for(i=0; i<5; i++){
        printf("Digite o %do nome: ", i+1);
        fgets(p[i].nome, 100, stdin);
        setbuf(stdin, NULL);
        printf("Digite o endereco: ");
        fgets(p[i].endereco, 100, stdin);
        setbuf(stdin, NULL);
        printf("Digite telefone (ex: 34 99999-9999): ");
        fgets(p[i].telefone, 20, stdin);
    }
    printf("\n--DADOS CADASTRADOS--\n");
    for(i=65; i<=90; i++){
        for(j=0; j<5; j++){
            if(i == p[j].nome[0]){
                printf("\nome: %s", p[j].nome);
                printf("Endereco: %s", p[j].endereco);
                printf("telefone: %s", p[j].telefone);
            }
        }
    }
}