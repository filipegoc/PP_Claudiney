#include <stdio.h>
#include <stdlib.h>

int main()
{
    int seg, h, m, s, resto;
    printf("Digite um tempo inteiro em segundos e vamos mostra-lo em horas, minutos e segundos: \n");
    scanf("%d", &seg);
    h = seg / 3600;
    resto = seg % 3600;
    m = resto / 60;
    s = resto % 60;
    printf("O tempo em horas, minutos e segundos eh: %dh %dm %ds \n", h, m, s);
    return 0;
}
