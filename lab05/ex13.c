#include <stdio.h>

void operacao(float n1, char s, float n2);

int main()
{
    float num1, num2;
    char simbolo;
    printf("Digite a operacao matematica basica de 2 numeros desejada (ex: 125/5): ");
    scanf("%f%c%f", &num1, &simbolo, &num2);
    operacao(num1, simbolo, num2);
    return 0;
}

void operacao(float n1, char s, float n2){
    if(s=='+'){
        printf("O resultado da soma eh: %.2f", n1+n2);    
    }
    else if(s=='-'){
        printf("O resultado da subtracao eh: %.2f", n1-n2);
    }
    else if(s=='*'){
        printf("O resultado da multiplicacao eh: %.2f", n1*n2);
    }
    else if(s=='/'){
        printf("O resultado da divisao eh: %.2f", n1/n2);
    }
}
