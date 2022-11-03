#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n;
    printf("Digite um numero de 1 a 7 vamos mostrar o dia da semana correspondente: ");
    scanf("%d", &n);
    switch(n){
    case 1:
    printf("Domingo");
    break;
    case 2:
    printf("Segunda-feira");
    break;
    case 3:
    printf("Terca-feira");
    break;
    case 4:
    printf("Quarta-feira");
    break;
    case 5:
    printf("Quinta-feira");
    break;
    case 6:
    printf("Sexta-feira");
    break;
    case 7:
    printf("Sabado");
    break;
    default:
    printf("Numero invalido");
    }
    return 0;
}