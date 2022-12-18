#include <stdio.h>
#include <string.h>

struct produtos{
    int codigo, quantidade;
    float preco;
    char nome[15];
};

void main(){
    struct produtos p[5];
    int i, cod=1, qntd, pedido=0;
    for(i=0; i<5; i++){
        printf("Produto %d\n", i+1);
        printf("\tnome: ");
        fgets(p[i].nome, 15, stdin);
        setbuf(stdin, NULL);
        printf("\tcodigo: ");
        scanf("%d", &p[i].codigo);
        setbuf(stdin, NULL);
        printf("\tpreco: ");
        scanf("%f", &p[i].preco);
        setbuf(stdin, NULL);
        printf("\tquantidade: ");
        scanf("%d", &p[i].quantidade);
        setbuf(stdin, NULL);
    }
    for( ; cod !=0; ){
        printf("\nPedido: \n");
        printf("digite o codigo e a quantidade do produto: ");
        scanf("%d %d", &cod, &qntd);
        for(i=0; i<5; i++){
            if((cod == p[i].codigo) && (qntd <= p[i].quantidade)){
                printf("Pedido realizado com sucesso!");
                p[i].quantidade -= qntd;
                pedido++;
            }
            else if((cod == p[i].codigo) && (qntd > p[i].quantidade)){
                printf("Quantidade pedida maior do que em estoque.");
            }
        }
        if(pedido == 0){
            printf("Codigo invalido!");
        }
    }
}