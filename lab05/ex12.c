#include <stdio.h>

void somaAlgarismo(int x);

int main()
{
    int num, digito;
    printf("Digite um numero inteiro e vamos calcular a soma de seus algarismos: ");
    scanf("%d", &num);
    if(num>0){   
        somaAlgarismo(num);
    }
    else{
        printf("Numero invalido!");
    }
    return 0;
}

void somaAlgarismo(int x){
    int soma=0, digito;
    while(x>0){
            digito= x%10;
            soma+= digito;
            x/=10;
        }
    printf("A soma dos algarismos eh: %d", soma);
}
