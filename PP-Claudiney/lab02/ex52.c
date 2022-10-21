#include <stdio.h>
#include <stdlib.h>

int main()
{
    float premio, a1, a2, a3, total;
    printf("Digite o valor que o amigo 1 investiu: \n");
    scanf("%f", &a1);
    printf("Digite o valor que o amigo 2 investiu: \n");
    scanf("%f", &a2);
    printf("Digite o valor que o amigo 3 investiu: \n");
    scanf("%f", &a3);
    printf("Digite o valor do premio: \n");
    scanf("%f", &premio);
    total = a1 + a2 + a3;
    printf("O amigo 1 ganharia: %f \n"
           "O amigo 2 ganharia: %f \n"
           "O amigo 3 ganharia: %f \n",
           a1 / total * premio, a2 / total * premio, a3 / total * premio);
    return 0;
}