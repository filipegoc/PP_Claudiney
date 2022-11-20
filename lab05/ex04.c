#include <stdio.h>

int numQuadrado(int a){
    int i, iAoQuadrado=0;
    for (i=0; i*i<a; i++)
    {
    }
    if (i*i==a)
        {
            return 1;
        }
    
}

int main()
{
    int num, quadradoPerfeito=0;
    printf("Digite um numero e vamos ver se ele eh um quadrado perfeito: ");
    scanf("%d", &num);
    if (num >=0){
        quadradoPerfeito= numQuadrado(num);
            if (quadradoPerfeito==1){
                printf("%d eh um quadrado perfeito", num);
            } 
            else{
                printf("%d nao eh um quadrado perfeito", num);
            }
    }  
    else
        printf("Numero invalido");
    return 0;
}
