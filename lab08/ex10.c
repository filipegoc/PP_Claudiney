//  Faça um programa que leia um vetor com dados de 5 livros: título (máximo 30 letras),
//  autor (máximo 15 letras) e ano. Procure um livro por título, perguntando ao usuário 
//  qual título deseja buscar. Mostre os dados de todos os livros encontrados.

#include <stdio.h>
#include <string.h>

struct livro{
    char titulo[30], autor[15], ano[5];
};

void main(){
    struct livro l[5];
    char busca[30];
    int i, encontrado=0;
    for(i=0; i<5; i++){
        printf("Livro %d\n", 1+i);
        printf("\tQual o titulo? ");
        fgets(l[i].titulo, 30, stdin);
        setbuf(stdin, NULL);
        printf("\tQual o autor? ");
        fgets(l[i].autor, 15, stdin);
        setbuf(stdin, NULL);
        printf("\tQual o ano? ");
        fgets(l[i].ano, 5, stdin);
        setbuf(stdin, NULL);
    }
    printf("\nQual titulo deseja buscar? ");
    fgets(busca, 30, stdin);
    setbuf(stdin, NULL);
    for(i=0; i<5; i++){
        if(strcmp(l[i].titulo, busca) == 0){
            printf("\nTitulo: %s", l[i].titulo);
            printf("Autor: %s", l[i].autor);
            printf("Ano: %s", l[i].ano);
            encontrado++;
            break;
        }   
    }
    if(encontrado == 0){
        printf("Nenhum titulo encontrado");
    }
}