#include <stdio.h>

void consumoTotal(float d, float l);

int main()
{
    float distancia, litros; 
    printf("Digite quantos km voce andou: ");
    scanf("%f", &distancia);
    printf("Digite quantos litros voce gastou: ");
    scanf("%f", &litros);
    consumoTotal(distancia, litros);
    return 0;
}

void consumoTotal(float d, float l){
    if(d/l >0 && d/l<8){
        printf("Consumo de %.2f Km/L, Venda o carro!", d/l);;
    }
    else if(d/l>=8 && d/l<=14){
        printf("Consumo de %.2f Km/L, Economico!", d/l);;
    }
    else if(d/l>14){
        printf("Consumo de %.2f Km/L, Super economico!", d/l);;
    }
    else{
        printf("Algo de errado nao esta certo");
    }
    
}
