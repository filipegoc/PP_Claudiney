#include <stdio.h>
#include <string.h>

void main()
{
    int i;
    char letra1, letra2;
    char str[51];
    printf("Digite uma string de no maximo 50 letras: ");
    fgets(str, 51, stdin);
    fflush(stdin);
    printf("Qual letra voce quer substituir? ");
    scanf("%c", &letra1);
    fflush(stdin);
    printf("Por qual letra %c sera substituida? ", letra1);
    scanf(" %c", &letra2);
    for(i=0; i < strlen(str); i++){
        if(str[i] != letra1){
            printf("%c", str[i]);
        }
        else{
            printf("%c", letra2);
        }
    }
    
}

