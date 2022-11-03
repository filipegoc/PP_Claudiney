#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a1, b1, a2, b2, a3, b3, a4, b4, a5, b5, r1, r2, r3, r4, r5, acertos=0;
    a1 = (rand() % 100) + 1;
    b1 = (rand() % 100) + 1;
    a2 = (rand() % 100) + 1;
    b2 = (rand() % 100) + 1;
    a3 = (rand() % 100) + 1;
    b3 = (rand() % 100) + 1;
    a4 = (rand() % 100) + 1;
    b4 = (rand() % 100) + 1;
    a5 = (rand() % 100) + 1;
    b5 = (rand() % 100) + 1;
    printf("1) Quanto vale a soma de %d + %d? ", a1, b1);
    scanf("%d", &r1);
    if ( a1+b1 == r1)
    {
            ++acertos;
    }
    printf("2) Quanto vale a soma de %d + %d? ", a2, b2);
    scanf("%d", &r2);
    if ( a2+b2 == r2)
    {
            ++acertos;
    }
    printf("3) Quanto vale a soma de %d + %d? ", a3, b3);
    scanf("%d", &r3);
    if ( a3+b3 == r3)
    {
            ++acertos;
    }
    printf("4) Quanto vale a soma de %d + %d? ", a4, b4);
    scanf("%d", &r4);
    if ( a4+b4 == r4)
    {
            ++acertos;
    }
    printf("5) Quanto vale a soma de %d + %d? ", a5, b5);
    scanf("%d", &r5);
    if ( a5+b5 == r5)
    {
            ++acertos;
    }
    printf("\nGABARITO: \n");
    printf("1) Quanto vale a soma de %d + %d? \n", a1, b1);
    printf("Resposta: %d \n", a1+b1);
    printf("2) Quanto vale a soma de %d + %d? \n", a2, b2);
    printf("Resposta: %d \n", a2+b2);
    printf("3) Quanto vale a soma de %d + %d? \n", a3, b3);
    printf("Resposta: %d \n", a3+b3);
    printf("4) Quanto vale a soma de %d + %d? \n", a4, b4);
    printf("Resposta: %d \n", a4+b4);
    printf("5) Quanto vale a soma de %d + %d? \n", a5, b5);
    printf("Resposta: %d \n", a5+b5);
    printf("Voce teve %d acerto(os)!", acertos);
    return 0;
}