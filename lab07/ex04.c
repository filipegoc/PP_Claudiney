#include <stdio.h>
#include <string.h>

void main()
{
    int i, ehA=0, ehE=0, ehI=0, ehO=0, ehU=0;
    char letra;
    char str[21];
    printf("Digite uma palavra de no maximo 20 letras e vamos contar as vogais: ");
    fgets(str, 21, stdin);
    for(i = 0; i < strlen(str); i++){
        if(str[i] == 'a' || str[i] == 'A'){
            ehA++;
        }
        if(str[i] == 'e' || str[i] == 'E'){
            ehE++;
        }
        if(str[i] == 'i' || str[i] == 'I'){
            ehI++;
        }
        if(str[i] == 'o' || str[i] == 'O'){
            ehO++;
        }
        if(str[i] == 'u' || str[i] == 'U'){
            ehU++;
        }
    }
    printf("A: %d \n", ehA);
    printf("E: %d \n", ehE);
    printf("I: %d \n", ehI);
    printf("O: %d \n", ehO);
    printf("U: %d \n", ehU);
    
    fflush(stdin);
    printf("Por qual letra voce quer trocas todas as vogais? ");
    scanf("%c", &letra);
    for(i=0; i < strlen(str); i++){
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U'){
            printf("%c", letra);
        }
        else{
            printf("%c", str[i]);
        }
    }
}
