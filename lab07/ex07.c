#include <stdio.h>
#include <string.h>

void main()
{
    int i;
    char str[51];
    printf("Digite uma string de no maximo 50 letras e vamos transformar tirar os espacos: ");
    fgets(str, 51, stdin);
    for(i=0; i < strlen(str); i++){
        if(str[i] != ' '){
            printf("%c", str[i]);
        }
    }
}
