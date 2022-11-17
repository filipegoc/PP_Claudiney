#include <stdio.h>

int main()
{
    int n1, n2, op;
    do{
        printf("\nCALCULADORA \n");
        printf("Escolha um opcao: \n");
        printf("1. Adicao \n");
        printf("2. Subtracao \n");
        printf("3. Multiplicacao \n");
        printf("4. Divisao \n");
        printf("5. Sair \n");
        printf("Opcao: ");
        scanf("%d", &op);
        if(op>=1 && op<=4){
            printf("Digite os dois valores usados na operacao: ");
            scanf("%d %D", &n1, &n2);
        }
        if(op==1)
            printf("Resultado da soma eh %d \n", n1+n2);
        else if(op==2)
            printf("Resultado da subtracao eh %d \n", n1-n2);
        else if(op==3)
            printf("Resultado da multiplicacao eh %d \n", n1*n2);
        else if(op==4)
            printf("Resultado da divisao eh %.4f \n", ((float) n1/n2));
        else if(op==5)
            printf("Saindo...");
        else
            printf("Opcao invalida. \n");
    }while(op!=5);
    return 0;
}