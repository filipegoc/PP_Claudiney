#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ts, tm, th, s, m, h, sFinal, mFinal, hFinal;
    printf("Digite o horario de inicio da experiencia em hora, minuto e segundo, entre virgulas e espacos: \n");
    scanf("%d, %d, %d", &th, &tm, &ts);
    printf("Digite o tempo de duracao do experimento em hora, minuto e segundo, entre virgulas e espacos: \n");
    scanf("%d, %d, %d", &h, &m, &s);
    sFinal = (ts + s) % 60;
    mFinal = (tm + m) % 60;
    hFinal = th + h;
    if (ts + s >= 60)
        mFinal++;
    if (tm + m >= 60)
        hFinal++;
    if (hFinal >= 24)
        hFinal = hFinal % 24;
    printf("O experimento foi ate as: %d h, %d m e %d s", hFinal, mFinal, sFinal);
    return 0;
}