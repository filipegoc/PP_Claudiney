#include <stdio.h>
#include <string.h>

void main()
{
    int i;
    char str[51];
    printf("Digite uma string de no maximo 50 letras e vamos transformar a letras maiusculas em minusculas: ");
    fgets(str, 51, stdin);
    for(i=0; i < strlen(str); i++){
        if(str[i] >= 65 && str[i] <= 90){
            printf("%c", str[i] + 32);
        }
        else{
            printf("%c", str[i]);
        }
    }
}
