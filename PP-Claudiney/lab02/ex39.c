#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float ganhador1, ganhador2, ganhador3;
    ganhador1 = 780000 * 0.46;
    ganhador2 = 780000 * 0.32;
    ganhador3 = 780000 * .22;
    printf("O 1o ganhador recebera: %f \n"
           "O 2o ganhador recebera: %f \n"
           "O 3o ganhador recebera: %f \n",
           ganhador1, ganhador2, ganhador3);
    return 0;
}