#include <stdio.h>
#include <string.h>

struct dma{
    int dia, mes, ano;
};

int verificaData(int d, int m, int a);
int calculaDias(int d1, int m1, int a1, int d2, int m2, int a2);

int main(){
    struct dma d[2];
    int i, dataValida;
    for(i=0; i<2; i++){
        printf("Digite a %da data: ", i+1);
        scanf("%d/%d/%d", &d[i].dia, &d[i].mes, &d[i].ano);
        if(!verificaData(d[i].dia, d[i].mes, d[i].ano)){
            printf("Data invalida!");
            return 0;
        }
    }
    printf("Entre as duas datas, ha uma distancia de %d dias.", calculaDias(d[0].dia, d[0].mes, d[0].ano, d[1].dia, d[1].mes, d[1].ano));
    return 0;
}

int verificaData(int d, int m, int a){
    int valido=0;
    if(m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12)
    {
        if(d<=31)
        {
            valido=1;
        }
    }
    else if(m==4 || m==6 || m==9 || m==11)
    {
        if(d<=30)
        {
            valido=1;
        }
    }
    else if(m==2)
    {
        if((a%4==0 && a%100!=0) || (a%400==0))
        {
            if(d<=29)
            {
                valido=1;
            }
            else if(d<=28)
            {
                valido=1;
            }
        }
    }
    return valido;
}

int calculaDias(int d1, int m1, int a1, int d2, int m2, int a2){
    int dias;
    dias = (d2+m2*30+a2*365) - (d1+m1*30+a1*365);
    return dias;
}