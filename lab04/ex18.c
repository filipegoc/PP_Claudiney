////NAO SEI SE TA CERTO!!!!!!!


#include <stdio.h>

int main()
{
    float salario=2000;
    int ano=1996;
    while(ano<=2022)
    {
        salario*= ((0.015*(ano-1995))+1);
        ano++;
    }
    printf("O salario atual desse funcionario eh de R$ %.2f", salario);
    return 0;
}