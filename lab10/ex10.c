#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
    srand(time(NULL));
    float tam, *p;
    int i, maior_igual_10=0;
    for( ; maior_igual_10<1; ){
        printf("Digite o tamanho que deseja do vetor: ");
        scanf("%f", &tam);
        if(tam>=10){
            maior_igual_10++;
        }
        else{
            printf("Vetor deve ter 10 ou mais posicoes! ");
        }
    }
    p = (float*) malloc(tam*sizeof(float));
    printf("\nOs 10 primeiros valores do vetor: ");
    for(i=0; i<10; i++){
        p[i] = rand() % 100;
        printf(i!=9 ? "%.2f, " : "%.2f.\n", p[i]);
    }
}