#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct produto{
    char nome[51];
    int cod, estoque;
    float preco;
};

void main()
{
    struct produto *p;
    int n, maior_qnt, x, y, i;
    float maior_preco;
    printf("Quantos produtos serao cadastrados? ");
    scanf("%d", &n);
    setbuf(stdin, NULL);
    p = (struct produto*) malloc(n*sizeof(struct produto));
    for(i=0; i<n; i++){
        printf("\nProduto %d\n", i+1);
        printf("\tDigite o nome: ");
        fgets(p[i].nome, 51, stdin);
        setbuf(stdin, NULL);
        printf("\tDigite o codigo: ");
        scanf("%d", &p[i].cod);
        setbuf(stdin, NULL);
        printf("\tDigite a quantidade em estoque: ");
        scanf("%d", &p[i].estoque);
        setbuf(stdin, NULL);
        printf("\tDigite o preco: ");
        scanf("%f", &p[i].preco);
        setbuf(stdin, NULL);
        if(i == 0){
            maior_preco = p[i].preco;
            maior_qnt = p[i].estoque;
            x = 0;
            y = 0;
        }
        if(maior_preco < p[i].preco){
            maior_preco = p[i].preco;
            x = i;
        }
        if(maior_qnt < p[i].estoque){
            maior_qnt = p[i].estoque;
            y = i; 
        }
    }
    printf("Produto com maior preco: %s, custando R$ %.2f.", p[x].nome, p[x].preco);
    printf("\nProduto com maior quantidade em estoque: %s, com %d unidades.", p[y].nome, p[y].estoque);
}