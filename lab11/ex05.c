#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(){
    char texto[1000], c, letra;
    int ocorrencia=0, i;
    FILE *f = fopen("arquivo_ex_05.txt", "w");
    if(f == NULL){
        printf("ERRO");
        exit(0);
    }
    printf("Digite um texto: ");
    fgets(texto, 1000, stdin);
    fputs(texto, f);
    setbuf(stdin, NULL);
    fclose(f);
    f = fopen("arquivo_ex_05.txt", "r");
    if(f == NULL){
        printf("ERRO");
        exit(0);
    }
    printf("Digite uma letra e vamos ver quantas vezes ele ocorre no texto: ");
    scanf("%c", &letra);
    c = fgetc(f);
    while(c != EOF){
        if(letra == c){
            ocorrencia++;
        }
        c = fgetc(f);
    }
    printf("A letra %c ocorre %d vezes no arquivo.", letra, ocorrencia);
    fclose(f);
}