#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(){
    char c, arq_entrada[40], arq_saida[40], txt[1000];
    int i, j, sup=0;
    printf("Qual o nome do programa de entrada? ");
    fgets(arq_entrada, 40, stdin);
    setbuf(stdin, NULL);
    printf("Qual o nome do programa de saida? ");
    fgets(arq_saida, 40, stdin);
    setbuf(stdin, NULL);
    FILE *entrada = fopen(arq_entrada, "w");
    if(arq_entrada == NULL){
        printf("Erro");
        exit(1);
    }
    printf("Digite o texto: ");
    fgets(txt, 1000, stdin);
    setbuf(stdin, NULL);
    for(i=0; i<strlen(txt); i++){
        fputc(txt[i], entrada);
        if(i%29==0&&i!=0)
            fprintf(entrada, "\n");
    }
    fclose(entrada);
    
    entrada = fopen(arq_entrada, "r");
    if(arq_entrada == NULL){
        printf("Erro");
        exit(1);
    }
    FILE *saida = fopen(arq_saida, "w");
    if(arq_saida == NULL){
        printf("Erro");
        exit(1);
    }
    for(i=strlen(txt); i>1; i--){
        fputc(txt[i], saida);
        sup++;
        if(sup%30==0)
            fprintf(saida, "\n");
    }
    
    fclose(entrada);
    fclose(saida);
}