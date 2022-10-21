#include <stdio.h>
#include <stdlib.h>

int main()
{
    float d, sal;
    printf("Quantos dias o encanador trabalhou?: \n");
    scanf("%f", &d);
    sal = 27.6 * d;
    printf("O salario liquido que sera pago eh: %f", sal);

    return 0;
}