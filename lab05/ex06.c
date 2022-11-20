#include <stdio.h>

int conversao(int h, int m, int s){
    return (h*3600)+(m*60)+s;
}

int main()
{
    int hrs, min, seg, tempoTotal;
    printf("Digite o tempo (hh mm ss) e vamos calcular o tempo total em segundos: ");
    scanf("%d %d %d", &hrs, &min, &seg);
    tempoTotal= conversao(hrs, min, seg);
    printf("O tempo total eh %d", tempoTotal);
    return 0;
}