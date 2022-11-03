#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float km, l, consumo;
    printf("Digite a distancia percorrida em km e a quantidade de gasolina gasta em litros: ");
    scanf("%f %f", &km, &l);
    consumo = km / l;
    if (consumo < 8)
    {
        printf("Venda o carro! O consumo eh de %.2f km/l", consumo);
    }
    else if (consumo >= 8 && consumo < 14)
    {
        printf("Economico! O consumo eh de %.2f km/l", consumo);
    }
    else if (consumo >= 14)
    {
        printf("Super economico! O consumo eh de %.2f km/l", consumo);
    }
    return 0;
}