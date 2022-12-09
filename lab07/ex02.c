#include <stdio.h>
#include <string.h>

void main()
{
    int i, eh1=0;
    char str[21] = "";
    printf("Digite um numero de ate 20 digitos e vamos contar quantos numeros 1 ha nele: ");
    fgets(str, 21, stdin);
    for(i=0; i < strlen(str); i++){
        if(str[i] == '1'){
            eh1++;
        }
    }
    if(eh1 == 0){
        printf("Nao ha numeros 1.");
    }
    else{
        printf("Ha %d numero(s) 1", eh1);
    }
}
