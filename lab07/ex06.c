#include <stdio.h>
#include <string.h>

void main()
{
    int i;
    char str[51];
    printf("Digite uma string de no maximo 50 letras e vamos transformar a letras minusculas em maiusculas: ");
    fgets(str, 51, stdin);
    for(i=0; i < strlen(str); i++){
        if(str[i] >= 97 && str[i] <= 122){
            printf("%c", str[i] - 32);
        }
        else{
            printf("%c", str[i]);
        }
    }
}
