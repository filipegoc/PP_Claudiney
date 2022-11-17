#include <stdio.h>

int main()
{
    float chico=1.5, ze=1.1;
    int ano=1;
    while (chico>ze)
    {
        chico+=0.02;
        ze+=0.03;
        ++ano;
    }
    printf("Sao necessarios %d anos para Ze ser maior que Chico.", ano);
    return 0;
}