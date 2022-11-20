#include <stdio.h>

int verifica(int a){
    if(a>0)
        return 1;
    else if(a<0)
        return -1;
    else
        return 0;
}

int main()
{
    float num;
    int x;
    printf("Digite um numero: ");
    scanf("%f", &num);
    x= verifica(num);
    if(x==1){
        printf("Numero positivo (%d)", x);
    }
    else if(x==-1){
        printf("Numero negativo (%d)", x);
    }
    else{
        printf("Numero igual a zero (%d)", x);
    }
    return 0;
}