#include <stdio.h>
#include <string.h>

void main()
{
    char str[51];
    int i, j;
    printf("Digite uma string de no maximo 50 letras: ");
    fgets(str, 51, stdin);
    fflush(stdin);
    printf("Qual intervalo voce quer ver da string: ");
    scanf("%d %d", &i, &j);
    i--;
    for(i; i < j; i++){
        printf("%c", str[i]);
    }
}
