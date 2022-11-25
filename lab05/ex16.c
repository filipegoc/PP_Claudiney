#include <stdio.h>

void desenha_linha(int x);

int main()
{
    int tamanho;
    printf("Quantos sinais '=' voce quer na linha? ");
    scanf("%d", &tamanho);
    desenha_linha(tamanho);
    return 0;
}

void desenha_linha(int x){
    int i;
    for(i=1; i<=x; i++){
        printf("=");
    }
}
