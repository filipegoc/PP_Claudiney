#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
    int tam;
    char *str;
    printf("Digite o tamanho da string: ");
    scanf("%d", &tam);
    setbuf(stdin, NULL);
    str = (char*) malloc(tam*sizeof(char));
    printf("Digite a string: ");
    fgets(str, tam, stdin);
    printf("String sem as vogais: ");
    for(int i=0; i<tam; i++){
        if(str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u' && str[i] != 'A' && str[i] != 'E' && str[i] != 'I' && str[i] != 'O' && str[i] != 'U'){
            printf("%c", str[i]);   
        }
    }    
    free(str);
}