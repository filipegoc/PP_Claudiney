#include <stdio.h>
#include <string.h>

struct eletrodomestico{
    char nome[15];
    float potencia, tempoAtivo;
};

void main(){
    struct eletrodomestico e[5];
    int i;
    float consumoTotal=0, dias;
    for(i=0; i<5; i++){
        printf("eletrodomestico %d\n", i+1);
        printf("\tnome: ");
        fgets(e[i].nome, 15, stdin);
        setbuf(stdin, NULL);
        printf("\tQual a potencia em kW? ");
        scanf("%f", &e[i].potencia);
        setbuf(stdin, NULL);
        printf("\tQanto horas ele fica ligado por dia? ");
        scanf("%f", &e[i].tempoAtivo);
        setbuf(stdin, NULL);
        consumoTotal+= e[i].tempoAtivo * e[i].potencia;
    }
    printf("Quando dias voce quer o consumo dos eletrodomesticos: ");
    scanf("%f", &dias);
    printf("\nO consumo total na casa em %.0f dias eh: %.2f", dias, consumoTotal*dias);
    printf("\nConsumo relativo: ");
    for(i=0; i<5; i++){
        printf("\n%s: %.2f%% ", e[i].nome, ((e[i].tempoAtivo * e[i].potencia)/consumoTotal)*100);
    }
}