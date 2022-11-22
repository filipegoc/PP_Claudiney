#include <stdio.h>

int triangulo(int a);

int main()
{
    int altura;
    printf("Digite a altura que voce quer no triangulo: ");
    scanf("%d", &altura);
    if(altura>0){
        triangulo(altura);
    }
    else{
        printf("Erro.");
    }
    return 0;
}

int triangulo(int a){
    int i, j, k;
    for(i=1; i<=a; i++){
        for(j=1; j<=(i*2-1); j++){
            for(k=i; k<a; k++){
                if(j==1){
                    printf(" "); 
                }
            }
            printf("*");        
        }
        printf("\n");   
    }
}
