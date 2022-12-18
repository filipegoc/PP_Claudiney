#include <stdio.h>
#include <string.h>

struct pessoa{
    int idade;
    char nome[101], endereco[101];
};

void main(){
    struct pessoa p;
    printf("Digite seu nome: ");
    fgets(p.nome, 101, stdin);
    setbuf(stdin, NULL);
    printf("Digite sua idade: ");
    scanf("%d", &p.idade);
    setbuf(stdin, NULL);
    printf("Digite seu endereco: ");
    fgets(p.endereco, 101, stdin);
    printf("\n\nOs dados cadastrados foram: ");
    printf("\nNome: %s", p.nome);
    printf("Idade: %d", p.idade);
    printf("\nEndereco: %s", p.endereco);
}