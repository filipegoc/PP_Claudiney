#include <stdio.h>
#include <string.h>

void main()
{
    int num, i;
    char str1[102], str2[51], aux[51]="";
    printf("Digite a 1a string de no maximo 50 letras: ");
    fgets(str1, 51, stdin);
    printf("Digite a 2a string de no maximo 50 letras: ");
    fgets(str2, 51, stdin);
    printf("Quantas letras voce quer concatenar da string 2 na string 1? ");
    scanf("%d", &num);
    for(i=0; i<num; i++){
        aux[i] = str2[i];
    }
    strcat(str1, aux);
    fputs(str1, stdout);
}
