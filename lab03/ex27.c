#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int idade;
    printf("Digite sua idade e vamos ver qual categoria voce pertence: ");
    scanf("%d", &idade);
    if (idade >= 5 && idade <= 7)
    {
        printf("Voce pertence a categoria Infantil A.");
    }
    else if (idade >= 8 && idade <= 10)
    {
        printf("Voce pertence a categoria Infantil B.");
    }
    else if (idade >= 11 && idade <= 13)
    {
        printf("Voce pertence a categoria Juvenil A.");
    }
    else if (idade >= 14 && idade <= 17)
    {
        printf("Voce pertence a categoria Juvenil B.");
    }
    else if (idade >= 18)
    {
        printf("Voce pertence a categoria Senior.");
    }
    else
    {
        printf("Sem categoria.");
    }
    return 0;
}