#include <stdio.h>
#include <string.h>

struct aeroporto{
    char codigo[4];
    int qntVoosSaem, qntVoosChegam;
};

struct voo{
    char origem[4], destino[4];
};

void main(){
    struct aeroporto a[5];
    struct voo v[5];
    int i;
    for(i=0; i<5; i++){
        printf("Voo %d:\n", i+1);
        printf("\tcodigo do aeroporto de origem: ");
        fgets(v[i].origem, 4, stdin);
        setbuf(stdin, NULL);
        printf("\tcodigo do aeroporto de destino: ");
        fgets(v[i].destino, 4, stdin);
        setbuf(stdin, NULL);
    }
    for(i=0; i<5; i++){
        printf("Aeroporto %d:\n", i+1);
        printf("\tcodigo: ");
        fgets(a[i].codigo, 4, stdin);
        setbuf(stdin, NULL);
        printf("\tquantidade de voos que chegam: ");
        scanf("%d", &a[i].qntVoosChegam);
        setbuf(stdin, NULL);
        printf("\tquantidade de voos que saem: ");
        scanf("%d", &a[i].qntVoosSaem);
        setbuf(stdin, NULL);
    }
}