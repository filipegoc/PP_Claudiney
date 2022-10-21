#include <stdio.h>
#include <stdlib.h>

int main()
{
    char lMin, lMai;
    printf("Digite uma letra em maiusculo: \n");
    lMai = getchar();
    lMin = lMai + 32;
    printf("Essa letra em minusculo eh: %c", lMin);
    return 0;
}