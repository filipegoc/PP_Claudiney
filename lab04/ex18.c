#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    int ano;
    double aumento, salario=2000;
    aumento = salario*0.015;
    for(ano=1996; ano<=2022; ano++)
    {
        salario+= aumento;
        aumento*= 2;
    }
    printf("O salario desse funcionario eh %.2lf", salario);

    return 0;
}
