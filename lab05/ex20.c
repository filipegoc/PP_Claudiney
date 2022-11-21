#include <stdio.h>

int qntdPrimo(int a);

int main()
{
    int num, primo;
    printf("Digite um numero e vamos calcular quantos numeros primos a abaixo desse numero: ");
    scanf("%d", &num);
    if(num>0){
        primo= qntdPrimo(num);
        printf("Ha %d numeros primos abaixo de %d", primo, num);
    }
    else{
        printf("Erro.");
    }
    
    return 0;
}

int qntdPrimo(int a){
    int i, j, primo, p=0;
    for(i=1; i<a; i++){
       primo=1;
       for(j = 2; j <= i; j++) {
           if(((i % j) == 0) && (j != i)){
               primo = 0;
               break;
           }
       }
        if(primo!=0 && i!=1){
            p++;
        }
    } 
    return p;
}
