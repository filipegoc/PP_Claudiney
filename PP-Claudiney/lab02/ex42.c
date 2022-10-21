#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salBase, salNovo;
    printf("Digite o salario salario base do funcionario: \n");
    scanf("%f", &salBase);
    salNovo = salBase + (salBase * 0.05) - (salBase * 0.07);
    printf("O funcionario ira receber: %f", salNovo);
    return 0;
}