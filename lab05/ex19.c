#include <stdio.h>

int fatorial(int a);

int main()
{
    int num, fat;
    printf("Digite um numero e vamos calcular seu fatorial: ");
    scanf("%d", &num);
    if(num>=0){
        fat= fatorial(num);
        printf("O fatorial de %d eh %d", num, fat);
    }
    else{
        printf("Erro.");
    }
    
    return 0;
}

int fatorial(int a){
    int i, f=1;
    for(i=1; i<=a; i++){
        f*=i;
    }
    return f;
}
