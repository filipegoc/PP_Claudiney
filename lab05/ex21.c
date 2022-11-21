#include <stdio.h>

int exclamacao(int a);

int main()
{
    int linhas;
    printf("Digite quantas linhas voce quer na arvore: ");
    scanf("%d", &linhas);
    if(linhas>0){
        exclamacao(linhas);
    }
    else{
        printf("Erro.");
    }
    
    return 0;
}

int exclamacao(int a){
    int i, j;
    for(i=1; i<=a; i++){
        for(j=1; j<=i; j++){
            printf("!");
        }
        printf("\n");
    }
}
