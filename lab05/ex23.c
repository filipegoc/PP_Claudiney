#include <stdio.h>

int trianguloLateral(int a);

int main()
{
    int largura;
    printf("Digite a largura que voce quer no triangulo lateral: ");
    scanf("%d", &largura);
    if(largura>0){
        trianguloLateral(largura);
    }
    else{
        printf("Erro.");
    }
    
    return 0;
}

int trianguloLateral(int a){
    int i, j;
    for(i=1; i<=a; i++){
        for(j=1; j<=i; j++){
            printf("*");
        }
        printf("\n");
    }
    for(i=(a-1); i>=1; i--){
        for(j=1; j<=i; j++){
            printf("*");
        }
        printf("\n");
    }
}
