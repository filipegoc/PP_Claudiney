#include <stdio.h>
#include <string.h>

struct carro{
    char marca[15], ano[5];
    float preco;
};

void main(){
    struct carro c[5];
    int i, encontrado=0;
    float p=1;
    for(i=0; i<5; i++){
        printf("Carro %d\n", 1+i);
        printf("\tQual a marca? ");
        fgets(c[i].marca, 15, stdin);
        setbuf(stdin, NULL);
        printf("\tQual o ano? ");
        fgets(c[i].ano, 5, stdin);
        setbuf(stdin, NULL);
        printf("\tQual o preco? ");
        scanf("%f", &c[i].preco);
        setbuf(stdin, NULL);
    }
    for( ; p!=0; ){
        printf("\nDigite um valor: ");
        scanf("%f", &p);
        for(i=0; i<5; i++){
            if(p >= c[i].preco){
                printf("Carro %d\n", i+1);
                printf("\tMarca: %s", c[i].marca);
                printf("\tAno: %s", c[i].ano);
                printf("\tPreco: R$ %.2f \n", c[i].preco);
                encontrado++;
            }
        }
        if(encontrado == 0){
            printf("\nNao ha nenhum carro abaixo de R$ %.2f\n", p);
        }
    }
}