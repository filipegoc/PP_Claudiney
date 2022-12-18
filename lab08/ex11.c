#include <stdio.h>
#include <string.h>

struct data{
    int dia, mes, ano;  
};

struct compromisso{
    struct data d;
    char descricao[60];
};

void main(){
    struct compromisso c[5];
    int i, m, a, temCompromisso=0;
    for(i=0; i<5; i++){
        printf("Compromisso %d\n", i+1);
        printf("\tDescricao do compromisso: ");
        fgets(c[i].descricao, 60, stdin);
        setbuf(stdin, NULL);
        printf("\tQual a data? ");
        scanf("%d/%d/%d", &c[i].d.dia, &c[i].d.mes, &c[i].d.ano);
        setbuf(stdin, NULL);
    }
    printf("Digite um mes e ano: ");
    scanf("%d/%d", &m, &a);
    for(i=0; i<5; i++){
        if((c[i].d.mes == m) && (c[i].d.ano == a)){
            printf(temCompromisso == 0 ? "\nO(s) compromisso(s) nessa data e(sao): \n" : "\n" );   
            printf("Compromisso %d:\n", i+1);
            printf("\tDescricao: %s", c[i].descricao);
            printf("\tData: %d/%d/%d", c[i].d.dia, c[i].d.mes, c[i].d.ano);
            temCompromisso++;
        }
    }
    if(temCompromisso == 0){
        printf("Nao ha compromisso nessa data");
    }
}