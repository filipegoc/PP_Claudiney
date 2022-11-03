#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
   int num, soma;
   soma = 0;
   printf("Digite um numero inteiro e vamos calcular a soma dos algarismos: ");
   scanf("%d", &num);
   if(num > 0){
    while(num > 0){
       soma = soma + num % 10;
       num = num / 10;
       }
       printf("A soma dos algarismos eh %d",soma);
    }else{
       printf("O numero invalido");
    }
    return 0;
}