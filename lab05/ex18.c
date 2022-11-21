#include <stdio.h>

float quadrado(int a);

int main()
{
    int n1, n2, q1, q2;
    printf("Digite dois numeros inteiros positivos e vamos mostrar seu quadrado: ");
    scanf("%d %d", &n1, &n2);
    q1= quadrado(n1);
    q2= quadrado(n2);
    printf("O quadrado de %d eh %d \n", n1, q1);
    printf("O quadrado de %d eh %d \n", n2, q2);
    return 0;
}

float quadrado(int a){
    return a*a;
}
