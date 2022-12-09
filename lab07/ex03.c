#include <stdio.h>
#include <string.h>

void main()
{
    int i;
    char str[51];
    printf("Digite uma string de no maximo 50 letras e vamos imprimi-la ao contrario: ");
    fgets(str, 51, stdin);
    for(i = strlen(str); i >=0 ; i--){
        printf("%c", str[i]);
    }
}
