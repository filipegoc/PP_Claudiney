#include <stdio.h>
#include <string.h>

void main()
{
    char str[51];
    int i;
    printf("Digite uma string de no maximo 50 letras e vamos codifica-la: ");
    fgets(str, 51, stdin);
    for(i=0; i < strlen(str); i++){
        if(str[i] == ' '){
            printf(" ");
        }
        else if(str[i] == 88 || str[i] == 89 || str[i] == 90 || str[i] == 120 || str[i] == 121 || str[i] == 122){
            printf("%c", str[i] - 23);
        }
        else{
            printf("%c", str[i] + 3);
        }
    }
}