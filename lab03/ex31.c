#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float peso, altura;
    printf("Digite sua altura em metros e seu peso em quilogramas e vamos calcular sua classificacao: ");
    scanf("%f %f", &altura, &peso);
    if (altura < 1.2 && peso <= 60)
    {
        printf("Voce esta na classificacao A.");
    }
    else if (altura >= 1.2 && altura <= 1.7 && peso <= 60)
    {
        printf("Voce esta na classificacao B.");
    }
    else if (altura > 1.7 && peso <= 60)
    {
        printf("Voce esta na classificacao C.");
    }
    else if (altura < 1.2 && peso > 60 && peso <= 90)
    {
        printf("Voce esta na classificacao D.");
    }
    
    else if (altura >= 1.2 && altura <= 1.7 && peso > 60 && peso <= 90)
    {
        printf("Voce esta na classificacao E.");
    }
    
    else if (altura > 1.7 && peso > 60 && peso <= 90)
    {
        printf("Voce esta na classificacao F.");
    }
    else if (altura < 1.2 && peso > 90)
    {
        printf("Voce esta na classificacao G.");
    }
    else if (altura >= 1.2 && altura <= 1.7 && peso > 90)
    {
        printf("Voce esta na classificacao H.");
    }
    else if (altura > 1.7 && peso > 90)
    {
        printf("Voce esta na classificacao I.");
    }
    return 0;
}