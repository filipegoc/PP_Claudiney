#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float sal, par;
    printf("Digite seu salario: ");
    scanf("%f", &sal);
    printf("Digite a parcela do emprestimo: ");
    scanf("%f", &par);
    if (par / sal <= 0.2)
    {
        printf("emprestimo concedido");
    }
    else{
        printf("emprestimo nao concedido");
    }
    return 0;
}