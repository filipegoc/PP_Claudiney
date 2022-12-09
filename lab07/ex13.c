#include <stdio.h>
#include <string.h>

void main(){
    char str[51];
    int i, tam;
    int naoEh = 0;
    
    printf("Digite uma string de no maximo 50 letras e vamos se ela eh palindromo: ");
    scanf("%s", str);
    
    tam = strlen(str);
    
    for(i=0;i < tam ;i++){
        if(str[i] != str[tam-i-1]){
            naoEh = 1;
            break;
           }
        }
    
    if (naoEh) {
        printf("Nao eh palindromo");
    }    
    else {
        printf("Eh palindromo");
    }
}