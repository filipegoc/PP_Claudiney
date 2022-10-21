#include <stdio.h>
#include <stdlib.h>

int main()
{
    float valorHora, horasTrabalhadas, sal;
    printf("Digite o valor da hora de trabalho em reais: \n");
    scanf("%f", &valorHora);
    printf("Digite o numero de horas trabalhadas no mes: \n");
    scanf("%f", &horasTrabalhadas);
    sal = (valorHora * horasTrabalhadas) * 1.1;
    printf("O valor que voce vai receber sera %2.f", sal);
    return 0;
}
