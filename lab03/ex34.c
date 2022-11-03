#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float n, f;
    printf("Digite sua nota e suas faltas: ");
    scanf("%f %f", &n, &f);
    if (n <= 10 && n >= 9 && f <= 20)
    {
        printf("Voce esta no conceito A.");
    }
    else if (n <= 10 && n >= 9 && f > 20)
    {
        printf("Voce esta no conceito B.");
    }
    else if (n < 9 && n >= 7.5 && f <= 20)
    {
        printf("Voce esta no conceito B.");
    }
    else if (n < 9 && n >= 7.5 && f > 20)
    {
        printf("Voce esta no conceito C.");
    }
    else if (n < 7.5 && n >= 5 && f <= 20)
    {
        printf("Voce esta no conceito C.");
    }
    else if (n < 7.5 && n >= 5 && f > 20)
    {
        printf("Voce esta no conceito D.");
    }
    else if (n < 5 && n >= 4 && f <= 20)
    {
        printf("Voce esta no conceito D.");
    }
    else if (n < 5 && n >= 4 && f > 20)
    {
        printf("Voce esta no conceito E.");
    }
    else if (n < 4 && n >= 0 && f <= 20)
    {
        printf("Voce esta no conceito E.");
    }
    else if (n < 4 && n >= 0 && f > 20)
    {
        printf("Voce esta no conceito E.");
    }
    return 0;
}