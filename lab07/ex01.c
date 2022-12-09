#include <stdio.h>
#include <string.h>

void main()
{
    char str[51];
    printf("Digite uma string de no maximo 50 letras e vamos imprimi-la: ");
    fgets(str, 51, stdin);
    fputs(str, stdout);
}
