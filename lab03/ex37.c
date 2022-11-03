#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int h_chegada, m_chegada, h_partida, m_partida, chegada, partida, tempo;
    float preco;
    printf("Digite o par de chegada: ");
    scanf("%d %d", &h_chegada, &m_chegada);
    printf("Digite o par de partida: ");
    scanf("%d %d", &h_partida, &m_partida);
    chegada=h_chegada*60+m_chegada;
    partida=h_partida*60+m_partida;
    tempo= partida-chegada;
    if(partida<chegada)
    {
        tempo= (partida+1440)+chegada;
    }
    if(tempo<=60)
    {
        preco=1;
    }
    else if(tempo>60 && tempo <=120)
    {
                preco=2;
    }
    else if(tempo>120 && tempo <=180)
    {
                preco=3.4;
    }
    else if(tempo>180 && tempo <=240)
    {
                preco=4.8;
    }
    else if(tempo>240)
    {
                preco =4.8 + ((tempo/60-5)*2);
    }
    printf("O valor que voce deve pagar eh de R$ %.2f", preco);
    return 0;
}
