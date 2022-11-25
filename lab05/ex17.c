#include <stdio.h>

void soma(int a, int b);

int main()
{
    int n1, n2;
    printf("Digite dois numeros inteiros positivos e vamos somar os numeros entre eles: ");
    scanf("%d %d", &n1, &n2);
    soma(n1, n2);
    return 0;
}

void soma(int a, int b){
    int i, s=0;
    for(i=a+1; i<b; i++){
        s+=i;
    }
    printf("A soma dos numeros entre %d a %d eh %d", a, b, s);
}
