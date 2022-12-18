#include <stdio.h>
#include <string.h>

struct ingrediente{
    char nome[25];
    float qnt;
};

struct receita{
    char nome[25];
    int qntIngredientes;
    struct ingrediente i[10];    
};

void main(){
    struct receita r[5];
    int i, j, busc=0;
    char busca[25];
    for(i=0; i<5; i++){
        printf("Receita %d:\n", i+1);
        printf("\tnome: ");
        fgets(r[i].nome, 25, stdin);
        setbuf(stdin, NULL);
        printf("\tquantidade de ingredientes: ");
        scanf("%d", &r[i].qntIngredientes);
        setbuf(stdin, NULL);
        for(j=0; j<r[i].qntIngredientes; j++){
            printf("\tdigite o %do ingrediente: ", j+1);
            fgets(r[i].i[j].nome, 25, stdin);
            setbuf(stdin, NULL);
            printf("\tquantidade desse ingrediente: ");
            scanf("%f", &r[i].i[j].qnt);
            setbuf(stdin, NULL);
        }
    }
    for( ; strcmp(busca, "") !=10 ; ){
        busc = 0;
        printf("\nDigite uma receita: ");
        fgets(busca, 25, stdin);
        setbuf(stdin, NULL);
        for(i=0; i<5; i++){
            if(strcmp(busca, r[i].nome) == 0){
                printf("Receita: %s", r[i].nome);
                printf("\t%d ingredientes: \n", r[i].qntIngredientes);
                for(j=0; j<r[i].i[j].qnt ; j++){
                    printf("\t%.0f %s", r[i].i[j].qnt, r[i].i[j].nome);
                }
                busc++;
            }
        }
        if(busc == 0){
            printf("Receita inexistente\n");
        }    
    }
    printf("Finalizando");
}