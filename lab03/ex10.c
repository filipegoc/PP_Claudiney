#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float alt, sex;
    printf("Digite sua altura em metros: ");
    scanf("%f", &alt);
    printf("Digite 1 para sexo masculino e 2 para sexo feminino: ");
    scanf("%f", &sex);
    if (sex == 1)
    {
        printf("Seu peso ideal eh %f kg", (72.7 * alt)-58);
    }
    else if (sex == 2)
    {
        printf("Seu peso ideal eh %f kg", (62.1 * alt)-44.7);
    }
    return 0;
}
